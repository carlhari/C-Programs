#include<iostream>
/*
Name: Alisangco, Carl Hari A.
Section: CEIT 37 101A
Date: 10/09/20
*/

using namespace std;
int main(){
	
	float _ThisWidth, _ThisLength,_ThisArea, _ThisPerimeter, _Thism2, _Thisin2,_Thisft2,_Thism,_Thisin,_Thisft;
	
	cout<<"Enter the Length of Rectangle: ";
		cin>>_ThisLength;
	
	cout<<"\n";
	
	cout<< "Enter the Width of Rectangle: ";
		cin>>_ThisWidth;
	
	system("CLS");
	//area
	_ThisArea = _ThisLength * _ThisWidth;
		_Thism2 = _ThisArea/100;
		_Thisin2 = _ThisArea/2.54;
		_Thisft2 = _ThisArea/30.48;
	//perimeter
	_ThisPerimeter = 2*(_ThisLength + _ThisWidth);
		_Thism = _ThisPerimeter/100;
		_Thisin = _ThisPerimeter/2.54;
		_Thisft = _ThisPerimeter/30.48;
	
	//Pagprint
	
	cout<<"Given: \n";
	cout<<"Length: "<<_ThisLength<<"\n";
	cout<<"Width: "<<_ThisWidth<<"\n";
	
	cout<<" Area \n"; 
		cout<<"  Sq cm: "<<_ThisArea<<"\n";
		cout<<"  Sq m: "<<_Thism2<<"\n";
		cout<<"  Sq in: "<<_Thisin2<<"\n";
		cout<<"  Sq ft: "<<_Thisft2<<"\n\n";
	
	cout<<" Perimeter \n";
		cout<<"  cm: "<<_ThisPerimeter<<"\n";
		cout<<"  m: "<<_Thism<<"\n";
		cout<<"  in: "<<_Thisin<<"\n";
		cout<<"  ft: "<<_Thisft<<"\n";	
		
return 0;
}
