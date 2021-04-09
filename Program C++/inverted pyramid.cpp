#include <iostream>

int main(){
//Base itohs
	int a, b ,c, i , j;
	for(a = 1; a <= 3; a ++){
		for(b = 1; b<= 27; b++){
			std::cout<< " ";
		}
		for(b = 1; b <= 5; b++){
			std::cout<< "*";
		}
		std::cout<<"\n";
	}	
//At itohs ang pyramid 
	for (a = 10; a>= 1; a--){ //rows
		for(b  = 30; b> a; b--){	//spaces
			std::cout<< " ";	
		}
		for(c = 1; c < a * 2; c++){ //columns
			std::cout<< "*";
		}
		std::cout<< "\n";
	}
	
		
//---------------------------------------------------------------------------------------------
/*
	I wanna quit T-T
	
	SEND HELP PLEASE T-T
*/
	  for(i = 1; i <= 10; i++){ // rows nanaman buset
    
        for(j = i; j<= 10; j++) //spaces -.- 
        {
            std::cout<<" ";
        }
        for(j = 1; j<= i*2-1;j++) //columns argh!!!
        {
            std::cout<<"*";
        }
        std::cout<< "\n";
    }
    /*
        Base
    */
       for(i = 1; i <= 3; i++){ //rows again :(

        for(j = 1; j<= 8;j++){ //spaces again :/
            std::cout<<" ";
        }

        for(j = 1; j <=5; j++){//columns again	-.-
            std::cout<<"*";
        }
        std::cout<<"\n";
    }
}

