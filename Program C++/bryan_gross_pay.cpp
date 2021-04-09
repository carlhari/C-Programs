#include <iostream>
#include <iomanip>
int main(){
	using namespace std;
	cout<<" This Program computes Gross Pay of Michael Bryan. \n\n";
	int work_hours = 80;
	
	//pay per hour. 
	float pay = 67.97;
	
	float result  = work_hours * pay;
	cout<<" Michael Bryan worked "<<work_hours<<" hours\n";
	cout<<" Bryan Total earned: PHP "<<fixed<<setprecision(2)<<result;
}
