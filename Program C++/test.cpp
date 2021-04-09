#include <iostream>
/*
    Xmas Tree
*/
int main(){
    int i, j;
    for(i = 1; i <= 10; i++){ // rows
    
        for(j = i; j<= 10; j++) //spaces
        {
            std::cout<<" ";
        }
        for(j = 1; j<= i*2-1;j++) //columns
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
