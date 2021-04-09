#include<iostream>

int main(){
	using namespace std;
	int given;
	string result;
		cout<<" This Program Display year level of students based on entry number. \n\n";
		cout<<" Enter Entry Number: ";
		cin>>given;
			cout<<"\n";
		switch(given){
			case 1:
				result = " Freshman";
				
				break;
			case 2:
				result = " Sophomore";
				
				break;
			case 3:
				result = " Junior";
				
				break;
			case 4:
				result = " Senior";
				
				break;
			default:
				result = " Out-of-school-youth";
		}
		cout<<" Highschool Status: "<<result;
		
}
