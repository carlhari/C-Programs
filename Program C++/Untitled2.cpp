#include<iostream>
using namespace std;

int main(){
	
	int giveNum,i;
	float collection[5], sum, _average, item;
	
	cout<<" Enter total number of input 1-5";
	cout<<giveNum;
	
		cout<<"\n";
		
	//pagstore.......
	for(i = 0; i < giveNum; i++){
       cout << "Enter Number " << i + 1 << " : ";
       cin >> collection[i];
    }
    for (const int item : collection) {
    sum += item;
  	}
	
	_average = sum / (sizeof(collection)/sizeof(collection[0]));
	cout<<" Total  : "<<sum<<"\n";
	cout<<" Average: "<<_average;
    
    
	
}
