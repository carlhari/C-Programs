#include<iostream>
/*
Alisangco, Carl Hari
CEIT 37 101A
10/22/2020
*/
int main(){
	float _varRegWork, _varRegRate, _varS, _varOTRen, _varOTP, _varGP, _varPayroll_M, _varPayroll_D, _varPayroll_Y,_varT, _varNT;
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
	
	std::cout<<" Enter the name of Employee: ";
		getline(std::cin.ignore(),_varN);
		std::cout<<"\n";
		
	std::cout<<" Enter Regular Hours Worked: ";
		std::cin>>_varRegWork;
			std::cout<< "\n";
			
	std::cout<<" Enter Regular Rate: ";
		std::cin>>_varRegRate;
			std::cout<< "\n";
			
	std::cout<<" Enter Overtime Hours Rendered: ";
			std::cin>> _varOTRen;
//------------------------------------------------------------------------------------
	_varS = _varRegWork * _varRegRate;
	
	_varOTP = _varOTRen * _varRegRate * 1.50;
	
	_varGP = _varS + _varOTP;
	
	_varT = _varGP * 0.15;
	
	_varNT = _varGP - _varT;
	
	system("CLS");
//------------------------------------------------------------------------------------
	std::cout<<"                                 	  Payroll Period: "<<_varPayroll_M<< "/" << _varPayroll_D << "/" << _varPayroll_Y <<"\n\n";
			std::cout<<"######################################################################################################################## \n";
				std::cout<< "\n";
			std::cout<<"----------------------------------------------------------- \n";
			
	std::cout<<" Employee Name : "<<_varN<<"\n";
			std::cout<<"----------------------------------------------------------- \n";
	std::cout<<" Regular Hours Worked: "<<_varRegWork<<"\n";
	std::cout<<" Regular Rate: P "<<_varRegRate<<"\n";
	std::cout<<" Basic Salary for the Week: P "<<_varS<<"\n";
			std::cout<<"----------------------------------------------------------- \n";
	std::cout<<" OverTime Hours Rendered: "<<_varOTRen<<"\n";
	std::cout<<" Overtime Pay: P "<<_varOTP<<"\n";
			std::cout<<"----------------------------------------------------------- \n";
	std::cout<<" Gross Pay: P "<<_varGP<<"\n";
	std::cout<<" Less: Tax  P "<<_varT<<"\n";
			std::cout<<"----------------------------------------------------------- \n";
	std::cout<<" Net Pay: P "<<_varNT;
return 0;
}
