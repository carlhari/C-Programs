#include <iostream>
using namespace std;
 

int romanFunction(int given)
{
    int num[] = {1,4,5,9,10,40,50,90,100,400,500,900,1000};
    string rom[] = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
    
	int i=12;    
    
	while(given>0)
    {
      int div = given/num[i];
      given %= num[i];
      while(div--)
      {
      	
        cout<<""<<rom[i];
      }
      i--;
    }
}

int main()
{
    int givenNum;
 	
 	cout<<"This Program Converts Number to Roman Numerical 1-3000 \n";
 	cout<<"\nEnter Number: ";
 		cin>>givenNum;
 			cout<<"\n";
 	
    romanFunction(givenNum);
 
    return 0;
}
