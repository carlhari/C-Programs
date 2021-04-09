#include <iostream>

int main() {
  float collection[5];
  float total, average;

  for (int i = 0; i < sizeof(collection)/sizeof(collection[0]); i++) {
    std::cout << "Input no. " << i + 1 << ": ";
    std::cin >> collection[i];
  }

  for (const int item : collection) {
    total += item;
  }

  average = total / (sizeof(collection)/sizeof(collection[0]));

  std::cout << "\nTotal: " << total << std::endl;
  std::cout << "Average: " << average << std::endl;

  return 0;
}
