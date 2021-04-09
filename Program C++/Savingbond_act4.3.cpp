#include<iostream>

using namespace std;
	
void newLine(){
	cout<<"\n";
}


int main(){

	int _varC1,_varC2,_varC3,_varC4, _varBA, _varInS, _varIn;
	

	cout<<" Enter the Age of Bond: ";
	cin>>_varBA;
		newLine();
		
		if(_varBA < 6){

			_varC1 = 25000 * 0 + 25000;
	
			cout<<"The Cash is: "<<_varC1;
		}
		else if(_varBA >=6 && _varBA <12){
	
			_varC2 = 25000 * 0.01 + 25000;
	
			cout<<"The Cash is: "<<_varC2;
		}
		else if(_varBA >=13 &&_varBA <18 ){
	
			_varC3 = 25000 * 0.02 + 25000;
			
			cout<<"The Cash is: "<<_varC3;
		}
		else if(_varBA >=19 &&_varBA <24){
			_varC4 = 25000 * 0.035 + 25000;
			cout<<"The Cash is: "<<_varC4;
		}
		
return 0;	
}
