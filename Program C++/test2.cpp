#include <iostream>

int main(){
    int a, b, ans;
    char op;
    std::cout<<"CAPS ONLY \n";
    std::cout<< "A for Addition, S for Subtraction, M for Multi, D for Divide \n\n";
    std::cout<< "Enter your preferred Operation: ";
    std::cin>> op;
    if(op != ' '){
        std::cout<< "First number: ";
        std::cin>>a;
        std::cout<< "Second Number: ";
        std::cin>>b;
        if(a != 0 && b != 0){
            if(op == 'A'){
                ans = a + b;
            }
            if(op == 'S'){
                ans = a - b;
            }
            if(op == 'D'){
                ans = a/b;
            }
            if(op == 'M'){
                ans = a*b;
            }
            std::cout<< ans;
        }
    }
    else{
        std::cout<< "Invalid: Empty Field";
    }
}
