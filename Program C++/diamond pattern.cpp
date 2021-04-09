#include <iostream>

int main(){
	int i, j, k, a = 5;
	for(i = 1; i<= a;i++){
		for(j = 1; j <= (a - i); j++){
			std::cout<<" ";
		}
		for(j = 1; j <= i; j++){
			std::cout<<"*";
		}
		for(k = 2; k <= i; k++){
			std::cout<<"1";
		}
		std::cout<<std::endl;
	}
	for(i = 1; i<= a; i++){
		for(j = 1; j<= i; j++){
			std::cout<< " ";
		}
		for(j= 2; j<= (a-i);j++){
			std::cout<<"2";
		}
		for(k =1; k<= (a-i); k++){
			std::cout<<"3";
		}
		std::cout<<std::endl;
	}
	std::cout<<std::endl;
}

