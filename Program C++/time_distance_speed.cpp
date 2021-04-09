#include<iostream>

int main(){
	using namespace std;
	float speed = 300, distance = 8000, result;
	
	result  = distance / speed;
	
	cout<<" This Progam Computes required time to travel 8000 miles with speed of 300mph. \n";
	cout<<"\n Distance = "<<distance<<"\n"<<" Speed = "<<speed;
	cout<<"\n The Required time is: "<<result<<" or 26:40:00";
}
