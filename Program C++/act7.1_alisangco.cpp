#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){
	float inputData[10], sum = 0.00, average;
	float largestNum, smallestNum;
	int i;
	int index = 1;
	cout<<"This Program lets user input 10 floating points values, \n\nIdentifies the smallest and largest number, and Average. \n\n";
	
	while(i < 10){
		cout<<"Input "<<i+1<<":";
		cin>>inputData[i];
		i++;
			cout<<"\n";
	}
	i = 0;
	
	while(i < 10){
	
		sum = sum + inputData[i];
		average = sum / 10;
		
		if (inputData[index] < inputData[i]){
			
			index = i;
			largestNum = inputData[index];
		}
		i++;
	}
 	i = 0;
 	while(i < 10){
		if (inputData[index] > inputData[i]){
			
			index = i;
			smallestNum = inputData[index];
		}
		i++;
	}
 

	cout<<"\n The Smallest Number: "<<smallestNum<<"\n";
	cout<<" The Largest Number: "<<largestNum<<"\n";
	cout<<" The Average : "<<average;

	return 0;
}
