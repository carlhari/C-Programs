#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;
int main(){

	int _varBonus, _varEmployeeYears, _varS;
	int _varResult;
	string _varN, _varRes;
	
	cout<<"\n The Bonus is based on the of years, the employee has been with the company \n\n";
	
	cout<<" Input your Name: ";
	getline(cin.ignore(),_varN);
		cout<<"\n";
	cout<<" Input the number of Years of Employee with the Company: ";
	cin>>_varEmployeeYears;
		cout<<"\n\n";
		
	cout<<" Input your salary: ";
	cin>>_varS;

		cout<<"\n";
		
		
	if(_varEmployeeYears <= 5){
		_varRes = "1% Bonus";
		_varResult = _varS * 0.01;
	}else{
		_varRes = "2% Bonus";
		_varResult = _varS * 0.02 ;
	
	}
		cout<<" The Bonus of Employee is: "<<_varRes<<"\n\n";
		cout<<" Your Bonus Salary is: "<<_varResult;

}
