#include<iostream>

int main(){
	using namespace std;
	

	int  giveNum, i = 1,arr[20];
	arr[0]= 1;
	arr[1] = 1;
	
	cout<<" This Program Computes the N-term of Fibonacci Sequence.";
	cout<<"\n N-Term: ";
	cin>>giveNum;
		cout<<"\n";

	while(arr[i] <= 20){	 
		
		for(i; i<= giveNum; i++){
			arr[i]= arr[i-1] + arr[i-2];
		}
		
		for(i = 0; i<=giveNum; i++){
			cout<<"\n ";
			cout<<arr[i];
		}
		break;
	}	
	
	return 0;
}
