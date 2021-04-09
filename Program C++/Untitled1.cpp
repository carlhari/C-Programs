#include<iostream>
#include<cmath>


using namespace std;


int main()
{
    int giveNum, res3;
    cout << "This program converts Numbers 1-9999 into Words \n";
    cout << "Enter number: ";
    cin >> giveNum;
    
    //Formula
    int Thousands = giveNum / 1000;
    int res1 = giveNum % 1000;
    int Hundreds = res1 / 100;
    int res2 =res1 % 100;
    int Tens = res2 / 10;
    int Teens = res2;
    
    cout << endl;
    cout << "Converted into Words: ";
    
    
    switch(Thousands)
   {
    case 1: cout <<"One Thousand ";break;
    case 2:  cout <<"Two Thousand ";break;
    case 3:cout <<"Three Thousand ";break;
    case 4:cout <<"Four Thousand ";break;
    case 5:cout <<"Five Thousand ";break;
    case 6:cout <<"Six Thousand ";break;
    case 7:cout <<"Seven Thousand ";break;
    case 8:cout <<"Eight Thousand ";break;
    case 9:cout <<"Nine Thousand ";break;
    default:cout << "";
   } 
    
    switch(Hundreds) 
   {
    case 9:cout <<"Nine Hundred ";break;
    case 8:cout <<"Eight Hundred ";break;
    case 7:cout <<"Seven Hundred ";break;
    case 6:cout <<"Six Hundred ";break;
    case 5:cout <<"Five Hundred ";break;
    case 4:cout <<"Four Hundred ";break;
    case 3:cout <<"Three Hundred ";break;
    case 2:cout <<"Two Hundred ";break;
    case 1:cout <<"One Hundred ";break;
    default:cout << "";
   } 
   
    switch(Tens) 
   {
    case 9:cout <<"Ninety ";break;
    case 8:cout <<"Eighty ";break;
    case 7:cout <<"Seventy ";break;
    case 6:cout <<"Sixty ";break;
    case 5:cout <<"Fifty ";break;
    case 4:cout << "Forty ";break;
    case 3: cout << "Thirty ";break;
    case 2:cout << "Twenty ";break;
    case 1:cout << "";break;
    default:cout << "";
   } 
    switch(Teens) 
   {
    case 19:cout <<"Nineteen ";break;
    case 18:cout <<"Eighteen ";break;
    case 17:cout <<"Seventeen ";break;
    case 16:cout <<"Sixteen ";break;
    case 15:cout <<"Fifteen ";break;
    case 14:cout <<"Fourteen ";break;
    case 13:cout <<"Thirteen ";break;
    case 12:cout <<"Twelve ";break;
    case 11:cout <<"Eleven ";break;
    case 10:cout <<"Ten ";break;
    default:cout << "";
   } 
	if (res2 > 19){	
    res3 = res2 % 10;
    
    switch(res3)
   {
	    case 9:cout <<"Nine";break;
	    case 8:cout <<"Eight";break;
	    case 7:cout <<"Seven";break;
	    case 6:cout <<"Six";break;
	    case 5:cout <<"Five";break;
	    case 4:cout <<"Four";break;
	    case 3:cout <<"Three"; break;
	    case 2:cout <<"Two";break;
	    case 1:cout <<"One";break;
	    default:cout << "";
   } 
}
    else
   {
    cout << "";
   } 
    
    
    return 0;
}
