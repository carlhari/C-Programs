#include<iostream>
#include<iomanip>

int main(){
	using namespace std;
		int _myGrade;
		float _valueN;
		string _vRem;
		char _myChoice;
	
	do{
		system("CLS");
		cout<<" Input Grade in Percentage (%): ";
		cin>>_myGrade;
			cout<<"\n";
		
			
	if(_myGrade >= 97 && _myGrade == 100 ){
		_valueN = 1.00;
		_vRem = "Excellent";
	}else if(_myGrade >=94 && _myGrade <= 96){
		_valueN = 1.25;
		_vRem = "Excellent";
	}else if(_myGrade >= 91 && _myGrade <= 93){
		_valueN = 1.50;
		_vRem = "Very Good";
	}else if(_myGrade >=88 && _myGrade <= 90){
		_valueN = 1.75;
		_vRem = "Very Good";
	}else if(_myGrade >=85 && _myGrade <= 87){
		_valueN = 2.00;
		_vRem = "Good";
	}else if(_myGrade >=83 && _myGrade <= 84){
		_valueN = 2.25;
		_vRem = "Good";
	}else if(_myGrade >=79 && _myGrade <= 82){
		_valueN = 2.50;
		_vRem = "Satisfactory";
	}else if(_myGrade >=76 && _myGrade <= 78){
		_valueN = 2.75;
		_vRem = "Fair";
	}else if(_myGrade == 75){
		_valueN = 3.00;
		_vRem = "Passed";
	}else if(_myGrade >= 50 && _myGrade <=69 ){
		_valueN = 5.00;
		_vRem = "Failed";
	}else if(_myGrade <= 49 ){
		cout<<" ERROR! Invalid input Grade Below 50 ";
		exit(0);
	}else if(_myGrade >= 101){
		cout<<" ERROR! Invalid input Grade Above 100 ";
		exit(0);
	}
		cout<<" Equivalent Numerical Grade   : "<<fixed<<setprecision(2)<<_valueN<<"\n";
		
		cout<<" Remarks                      : "<<_vRem<<"\n\n";
		
		
		cout<<" Input another grade?[Y/N]: ";
		cin>>_myChoice;
			
		if(_myChoice == 'N'|| _myChoice == 'n'){	
				exit(0);
		}
	}while(_myChoice == 'Y'|| _myChoice == 'y');
}
