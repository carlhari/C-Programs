#include<iostream>
#include<cmath>
int main(){
	using namespace std;
	int _varIcode, _varQ, _varIprice,_varTotalic,_varTotalc,_varTen,_varChange;
	float _varVat;
	
	cout<<" Enter Item Code : ";
	cin>>_varIcode;
		cout<<"\n";
	cout<<" Enter Quantity : ";
	cin>>_varQ;
		cout<<"\n";
	cout<<" Enter Amount Tendered : ";
	cin>>_varTen;
		
	if(_varIcode == 001){
		_varIprice = 20;
	}else if(_varIcode == 002){
		_varIprice = 25;
	}else{
		cout<<" Error: the Item is not available";
	}
	
	system("CLS");
	cout<<" Item Code       : "<<_varIcode<<"\n";
	cout<<" Quantity        : "<<_varQ<<"\n";
	cout<<" Item Price      : "<<_varIprice<<"\n";
	
	_varTotalic = _varIprice * _varQ;
	cout<<" Total Item Cost : "<<_varTotalic<<"\n\n\n";
	
	_varVat = 0.06 * _varTotalic;
	cout<<" VAT 6%          : "<<_varVat<<"\n";
	
	_varTotalc =  _varTotalic + _varVat;
	cout<<" Total Cost      : "<<_varTotalc<<"\n\n\n";
	
	cout<<" Amount Tendered : "<<_varTen<<"\n";
	
	_varChange = _varTen - _varTotalc;
	cout<<" Amount Change   : "<<_varChange;
return 0;
}
