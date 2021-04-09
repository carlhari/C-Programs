#include<iostream>
int main(){
	using namespace std;
	int given1, given2;
	string result;
	cout<<" This Program Identifies the larger of two numbers supplied by user. \n";
	cout<<" Enter First Number: ";
	cin>>given1;
		cout<<"\n";
	cout<<" Enter Second Number: ";
	cin>>given2;
		cout<<"\n\n";
	if(given1 != 0 || given2 != 0){
		if (given1 > given2){
			result = " First Number is larger than Second Number!";
		}else if(given1 < given2){
			result = " Second Number is larger than First Number!";
		}else if(given1 == given2){
			cout<<" Error: First Number is equal to Second Number!";
		}
		
	}else{
		cout<<" Error Occured!";
	}
		cout<<result;
}
