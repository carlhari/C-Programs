#include<iostream>

int main(){
	using namespace std;
	
	char strlen;
	char string[] = "characters";
	
	for(int i = 0; i < strlen(string); i ++){
		cout<<string[i];
	}
}
