#include <iostream>
#include <iomanip>
void miles_to_kilo() { 

	double miles; 
	std::cout <<"!!!!!!!!!!XXXXXXXXXXXXXXXXXXXXX Miles to kilometers Converter XXXXXXXXXXXXXXXXXXXXX!!!!!!!!!! \n" <<std::endl;
	std::cout << std::fixed;
	std::cout << std::setprecision(2);
	std::cout <<"Enter Miles: ";
	std::cin >> miles;
	double kilometers = miles * 1.61;
	double feet = miles * 5280;
	double inch = feet *12;
	double centimeter = inch *2.54;
	double kilometer = centimeter /100000;
	std::cout << "Your original value is: " << miles << "mi" << std::endl;
	std::cout << "Your converted value in kilometers is: " << kilometers << "km" << std::endl;
	std::cout << "Your converted value from miles to foot is: " <<feet << "ft" <<std::endl;
	std::cout << "Your converted value from foot to inch is: "<<inch <<"in" <<std::endl;
	std::cout << "Your converted value from inch to centimeter is: "<<centimeter <<"cm" <<std::endl;
	std::cout << "Your converted value from centimeter to kilometer is: " <<kilometer <<"km";
}
void cm_converter(){	//minus
	double centimeters;
	std::cout <<"!!!!!!!!!!XXXXXXXXXXXXXXXXXXXXX Centimeters Converter XXXXXXXXXXXXXXXXXXXXX!!!!!!!!!! \n " <<std::endl;
	std::cout << std::fixed;
	std::cout << std::setprecision(2);
	std::cout <<"Enter Value: ";
	std::cin >> centimeters;
	double feet = centimeters * 0.0328084;
	double inch = centimeters * 0.393701;
	std::cout << "Your original value is: " <<centimeters << "cm" <<std::endl;
	std::cout << "Your converted value in feet: " <<feet << "ft" <<std::endl;
	std::cout << "Your converted value in inch: " <<inch << "in";
}


int main(){ 
	
	int choices;
	std::cout<<"  Available Choices is 1 and 2 \n 1 for Miles and 2 for Cm converters \n\n";
	std::cout<<"Enter your Choice: ";
			std::cin>>choices;
	switch (choices){
		case 1:
			system("CLS");
			miles_to_kilo();
		break;
		
		case 2:
			system("CLS");
			cm_converter();
		break;
		
		default:
			std::cout<<"Error";
	}
		
}




