#include <iostream>
#include <exception>

int main(){
		int a, b, c;
		std::cout<<"Enter Numerator: ";
		std::cin>>a;
		std::cout<<"Enter Denominator: ";
		std::cin>>b;
		
		try{
			if(b == 0)
				throw b;
			c = a/b;
			
		}catch(int ex){
			std::cout<<"Divided by zero is Invalid";
		}
		if(b!=0)
			std::cout<< c ;
	return 0;
}
