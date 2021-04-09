#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;


float pi = 3.1416, radius;

//FUNCTIONS !!!!!!!!!!!!!!!!!!!!!!!

void circumference(){
	float answer = 2 * pi * radius;
	
	cout<<" The Circumference is: "<<fixed<<setprecision(2)<<answer;
}

void areaCircle(){
	float answer = pi * pow(radius,2);
	
	cout<<" The Area is: "<<fixed<<setprecision(2)<<answer;
}

void diameter(){
 	float answer = 2 * radius;
	
	cout<<" The Diameter is: "<<fixed<<setprecision(2)<<answer;
}
//------------------------------------------------------------


//main
int main(){
	char choice,answer;
	
		system("CLS");
		cout<<" This program computes Circumference, Area and Diameter of a cirlce \n\n";
		cout<< " Created using SWITCH CASE STATEMENT. \n\n";
		cout<<" Enter Radius: ";
		cin>>radius;
			cout<<"\n";
		
		
		cout<<" MENU \n";
		cout<<" [C] Circumference \n";
		cout<<" [A] Area of a Circle \n";
		cout<<" [D] Diameter of a Circel \n";
		cout<<" [E] Exit \n";
		
		cout<<" Enter your Choice: ";
		cin>>choice;
			cout<<"\n";
		
		//main logic
		switch(choice){
			
			//circumference
			case 'C': 
				circumference();
			break;
			
			case 'c':
				circumference();
			break;
			
			//area of circle
			case 'A':
				areaCircle();	
			break;
			
			case 'a':
				areaCircle();
			break;
			
			//diameter
			case 'd':
				diameter();
			case 'D':
				diameter();
			break;
			
			//exit
			case 'e':
				exit(0);
			break;
			
			case 'E':
				exit(0);
			break;
			
			//error !!
			default:
				cout<<" Invalid Choice!!";
				exit(0);
		}
}

