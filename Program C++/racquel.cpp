#include<iostream>
int main(){
    float Rhours, Rrate, Bsalary, Othours, Otpay, Gpay, Ltax, Npay;
    std::string N;
    
    	std::cout<<"\n";
        std::cout<<"Enter the name of Employee: ";
        	getline(std::cin.ignore(), N);
        std::cout<<"\n\n";
        std::cout<<"Enter the Regular Hours Worked:    ";
	    std::cin>>Rhours;
		std::cout<<"\n\n";
	    std::cout<<"Enter the Regular Rate:    ";
	    std::cin>>Rrate;
		std::cout<<"\n\n";
		std::cout<<"Enter the Basic Salary for the week:    ";
	    std::cin>>Bsalary;
		std::cout<<"\n\n";
		
		

		
	    std::cout<<"Enter the Overtime Hours Rendered:    ";
	    std::cin>>Othours;
	    std::cout<<"\n\n";

		

	    
		Otpay = Othours * Rrate * 1.5;
	    Gpay = Bsalary + Otpay;
		Ltax = Gpay * 0.15;
		Npay = Gpay - Ltax;
		system("CLS");
		std::cout<<"Enter the name of Employee:  "<< N <<"\n";
		std::cout<<"Enter the Regular Hours Worked:  P "<<Rhours<<"\n";
		std::cout<<"Enter the Regular Rate: P  "<<Rrate<<"\n";
		std::cout<<"Enter the Basic Salary for the week:  P   "<<Bsalary<<"\n";

		
		std::cout<<"Enter the Overtime Hours Rendered:    P  "<<Othours<<"\n";
		std::cout<<"Enter the Overtime Pay:  P  "<<Otpay<<"\n";

		
		std::cout<<"Enter the Gross Pay:   "<<Gpay<<"\n";
		std::cout<<"Enter the Less Tax:   "<<Ltax<<"\n";

		
		std::cout<<"Enter Net Pay:   "<<Npay<<"\n";
		return 0;
}
