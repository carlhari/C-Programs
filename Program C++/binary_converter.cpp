#include <iostream>
#include <cmath>

int main(){
	long int bn, hexanumber = 0, remainder, j = 1;
	int k, octalnumber = 0, decimalnumber = 0, i = 0;
	
	std::cout<< "Enter the Binary: ";
	std::cin>>bn;
	while (bn != 0 )
	{
		decimalnumber += (bn % 10) * pow(2, i);
		i++;
		bn /= 10;
	} 
		std::cout<< "DEC :"<< decimalnumber<<std::endl;
		std::cout<<std::oct<<"OCT:"<< decimalnumber<<std::endl;
		std::cout<<std::hex<<"HEX: "<<decimalnumber<<std::endl;

}



