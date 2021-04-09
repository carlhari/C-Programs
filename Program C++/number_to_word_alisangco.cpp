#include <iostream>
#include <vector>
/*
Name: Alisangco, Carl Hari A.
Section: CEIT 37 101A
*/

void convert(int &input);

int main() {
  int input;
  std::cout << " This program converts Numbers 1-9999 into Words \n\n";
  std::cout << " Input number: ";
  std::cin >> input;
  convert(input);
  
  return 0;
}

void convert(int& input) {
  // number words
 
  std::string _NTS[] = {"Hundred", "Thousand"};
  std::string _once[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
  std::string _Digit0[] = {"", "", "Twenty", "thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninty"};
  std::string _Digit2[] = {"", "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
 
  // collection of words
  std::vector<std::string> collection;

  std::cout << " Output:\t\t";

  
  
  if (input < 0) {
   	std::cout<<" Error: Negative numbers is not allowed!";
  }

 
  /* Main logic */
  while (input > 0) {
    if (input < 10) {
      collection.push_back(_once[input]);
      break;
    } else if (input < 20) {
      collection.push_back(_Digit0[input - 10]);
      break;
    } else if (input < 100) {
      collection.push_back(_Digit2[input / 10]);
      input %= 10;
    } else if (input < 1000) {
      collection.push_back(_once[input / 100]);
      collection.push_back(_NTS[0]);
      input %= 100;
    } else if (input <= 9999) {
      collection.push_back(_once[input / 1000]);
      collection.push_back(_NTS[1]);
      input %= 1000;
    } else {
      std::cout << " Error: Input data exceed 9999";
      return;
    }
  }


  // Output
  for (const std::string word : collection) {
    std::cout << word << " ";
  }
}


