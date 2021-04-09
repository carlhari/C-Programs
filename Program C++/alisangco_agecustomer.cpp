#include<iostream>

int main(){
using namespace std;
	int _varAgeCustomer;
	string _varResult;
		cout<<"\n Input the age of Customer: ";
		cin>>_varAgeCustomer;
		cout<<"\n";
	if(_varAgeCustomer < 60){
		_varResult = "No discount,The age of customer is below 60";
	}else{
		_varResult = "20% ";
	}

	cout<<" Customer Discount is: "<<_varResult;
}
