#include <iostream>

int main(){
	int a;
	std::string b;
	std::cout<<"Enter the number of year of employee with the company: ";
	std::cin>>a;
	if(a < 5){
		b = "1%";
	}else{
		b = "2%";
	}
	std::cout<<"The Bonus of the Employee Annual Salary is: "<< b ;
}
