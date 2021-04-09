#include <iostream>

int main(){
	int i, j, k,f;
	
//upper part
	for(i = 1; i <= 5; i++){	//rows 
		
		for(j = 1; j <= i; j++){ //columns
		
			std::cout<<"*";
		}
	
		std::cout<<"\n";
	}
	
//bottom part
	for(k =1; k <= 5; k++){	//rows again -.-
		for(f = k; f <= 4; f++){	//column ulits hays xD
		
			std::cout<<"*";
		}
		std::cout<<"\n";
	}
		
}
