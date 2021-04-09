#include <iostream>
#include <fstream>
#include <ctime>


using namespace std;

//declaration
 	int Xiaomi = 11000;
    int Realme = 36000;
    int iPhone = 75000;
    int unit = 0; 
	int unitQty = 0;
 	int AmountOfSale = 0;
    int total = 0;
    int cash;
    char choice;
    

//functions ng mga smartphone
xiaomi(){
		cout<<" Xiaomi..............P 11,000 X "<<unitQty<<" = "<<unitQty * Xiaomi<<"\n\n";
		AmountOfSale = unitQty * Xiaomi;
}

realme(){
		cout<<" Realme..............P 36,000 X "<<unitQty<<" = "<<unitQty * Realme<<"\n\n";
		AmountOfSale = unitQty * Realme;
}

iphone(){
	cout<<" iPhone..............P 75,000 X "<<unitQty<<" = "<<unitQty * iPhone<<"\n\n";
			AmountOfSale = unitQty * iPhone;
}


int main ()
{
	//pagbukas ng file, read = if at write of.
	ofstream myFile;
	ifstream inFile;
	
	myFile.open("resibo.txt");
	inFile.open("resibo.txt");
	
	//kapag di mabasa yung file or malocate.
	if(inFile.fail()){
		cerr << " Error Opening File ";
		exit(1);
		
	}
   
    //UI
    cout << "\n\t*****************************************************";
    cout << "\n\t*                                                   *";
    cout << "\n\t*     >>>>>> Welcome to Jaja Phone Hub <<<<<<       *";
    cout << "\n\t*        1. Xiaomi>>>>>>>>>Php 11,000               *";
    cout << "\n\t*        2. Realme>>>>>>>>>Php 36,000	            *";
    cout << "\n\t*        3. iPhone>>>>>>>>>Php 75,000               *";
    cout << "\n\t*                                                   *";
    cout << "\n\t*****************************************************";
    cout << "\n\n";
     
	//loop   
      do{
      	//para mareset kapag nagyes ang user sa reselect
      	myFile.close();
      	
      	cout << "\n Enter your unit you want: ";
        	cin >> unit;
        cout<< "\n How many pieces you want?: ";
       		cin >> unitQty;
        	cout<<"\n";
        	
        //condition para buksan ulit yung file	
       if(unit != 0 && unitQty != 0){
       	
	   		myFile.open("resibo.txt");
	   		
			//time, babasahin yung time ng machine/computer
			    time_t tt; 
			    struct tm * ti; 
			    time (&tt); 
			    ti = localtime(&tt); 
				string timer = asctime(ti); 
			
			//random condition, para lang ma display yung time&date
	   		if(!myFile.fail()){
	   			myFile<<"\t\tTime and Date of Purchased \n"<<"\t\t "<<timer;
	   		}
	   		
	   		//selection
		        if(unit == 1){
		        	xiaomi();
		        	myFile<<"Jaja Phone Hub \n\n"<<" Receipt \n"<<" "<< unitQty << " Xiaomi = "<<AmountOfSale<<"\n";
				}else if(unit == 2){
					realme();
					myFile<<"Jaja Phone Hub \n\n"<<" Receipt \n"<<" "<< unitQty << " Realme = " <<AmountOfSale<<"\n";
				}else if(unit == 3){
					iphone();
					myFile<<"Jaja Phone Hub \n\n"<<" Receipt \n"<<" "<< unitQty << " iPhone = " <<AmountOfSale<<"\n";
				}else{
					cout<<"\n Product not found";
					exit(1);
					myFile.close();
				}
		}
			//para makareselect
			cout<<" Baby, Do you want to reselect ? [Y/N]: ";
			cin>> choice;
	
	  }while((choice == 'Y' || choice == 'y') && (choice != 'N' || choice != 'n') );
		
		
		
	total = total + AmountOfSale ;
	myFile <<" \n Total Payment: P "<<total<<"\n\n";
	
	cout<<"\n Total Payment: P "<<total<<"\n\n";
	cout<<" Cash: P ";
	cin>>cash;
	myFile <<" Cash: P"<<cash;
	
	

	
	int change = cash - total;
	
	//condition para hindi dumiretso kapag kulang ang pera
	
	if(cash < 11000){
		cout<<"\n\n Sorry, Not enough money.";
		exit(1);
		myFile.close();
	}else if (change < 1){
		cout<<"\n\n Sorry, Not enough money.";
		exit(1);
		myFile.close();
	}
	
	cout<<"\n Change: P "<< change<<"\n\n";
	myFile<<"\n\n Change : P"<<change<<"\n";
	
	cout<<" THANKYOUUUUUUUUUUU FOR PURCHASING OUR PRODUCTS \n\n\n";
    myFile<<"\n\n THANKYOUUUUUUUUUUU FOR PURCHASING OUR PRODUCTS";
    
    //pagclose ng file
    inFile.close();
  	myFile.close();
  	
    return 0;
}
