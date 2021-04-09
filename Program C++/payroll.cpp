#include<iostream>
#include<string>
int main(){
	int _varRegWork, _varRegRate, _varS, _varOTRen, _varOTP, _varGP, _varPayroll_M, _varPayroll_D, _varPayroll_Y;
	float _varT, _varNT;
	std::string _varN;
	
	std::cout<<" Month of Payroll Period: ";
		std::cin>>_varPayroll_M;
			std::cout<< "\n";
			
	std::cout<<" Date of Payroll Period: ";
		std::cin>>_varPayroll_D;
			std::cout<< "\n";	
			
	std::cout<<" Year of Payroll Period: ";
		std::cin>>_varPayroll_Y;
			std::cout<< "\n";
	system("CLS");
	std::cout<<"                                 	  Payroll Period: "<<_varPayroll_M<< "/" << _varPayroll_D << "/" << _varPayroll_Y <<"\n\n";

				std::cout<<"######################################################################################################################## \n";
	std::cout<< "\n";
	
				std::cout<<"----------------------------------------------------------- \n";

		
	std::cout<<" Employee Name: ";
		std::cin>> _varN;
			std::cout<< _varN;
			
				std::cout<<"----------------------------------------------------------- \n";
			std::cout<< "\n";
			
	std::cout<<" Regular Hours worked: ";
		std::cin>> _varRegWork;
		
			std::cout<< "\n";
			
	std::cout<<" Regular Rate: 	P ";
		std::cin>> _varRegRate;
		
			std::cout<< "\n";
			
	_varS = _varRegWork * _varRegRate;
	
	std::cout<<" Basic Salary for the Week:  P "<< _varS<<"\n\n";
	
				std::cout<<"----------------------------------------------------------- \n";
	
	std::cout<<" Overtime Hours Rendered: ";
		std::cin>>_varOTRen;
		
	_varOTP = _varOTRen * _varRegRate * 1.5;
	
	_varGP = _varS + _varOTP;
	
	_varT = _varGP * 0.15;
	
	_varNT = _varGP - _varT;
	
	std::cout<<" Overtime Pay: 	P "<<_varOTP<<"\n";
				std::cout<<"----------------------------------------------------------- \n";
	std::cout<<" Gross Pay:  P "<<_varGP<<"\n";
	std::cout<<" Less : Tax: 	P " <<_varT<<"\n";
				std::cout<<"----------------------------------------------------------- \n";
	std::cout<<" Net Pay: 	P "<<_varNT;
	
return 0;
}
