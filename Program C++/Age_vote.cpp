#include<iostream>
int main(){
	using namespace std;
		int Age;
		cout<<" This Program determines if the age of user is suitable to vote or not. \n";
		cout<<" Enter your Age: ";
			cin>>Age;
		if(Age >= 18){
			cout<<" Your allowed to VOTE!";
		}else if(Age < 18){
			cout<<" Sorry, Minors is NOT allowed to vote";
		}
}
