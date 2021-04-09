#include<iostream>

int main(){
using namespace std;
//	seconds hours minutes
int _varS, _varH, _varM,_varM1,_varS1;
cout<<"\n This Program converts input time in seconds to its equivalent in Hours, Minutes, and Seconds \n\n";
cout<<" Input time in seconds : "; 
cin >> _varS;
cout<<"\n";
_varM = _varS / 60;
_varH = _varM / 60;
_varM1 = _varM%60;
_varS1 = _varS%60;				
//				No need to get remainder of hr        getting remainder of mins		  getting remainder of secs					
cout << " The Input time in seconds is equivalent to: " << _varH<< " Hours " << _varM1 << " Minutes " << _varS1 << " Seconds";
}
