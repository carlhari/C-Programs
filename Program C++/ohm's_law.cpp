#include<iostream>

int main(){
	using namespace std;
	float inputAmpere, inputResist;
	cout<<" This Program Computes Voltage. Ohm's Law Formula. \n";
	
	cout<<" Enter the value of Ampere(I): ";
	cin>>inputAmpere;
		cout<<"\n";
	
	cout<<" Enter the value of Resistance(R): ";
	cin>>inputResist;
		cout<<"\n";
		
	float outputVoltage = inputAmpere * inputResist;
	
	cout<<" Given: \n";
	cout<<" 	Ampere = "<<inputAmpere<<"\n";
	cout<<" 	Resistance = "<<inputResist<<"\n\n";
	cout<<" 	Voltage = "<<outputVoltage;
	  
}
