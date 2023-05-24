#include "clock_machine.h"
#include <iostream>

int main() {
  Clock_Machine mcdonalds;
  int option;

  while (true) {
    std::cout << "McDonald's Clock Machine" << std::endl;
    std::cout << "-----------------------" << std::endl;
    std::cout << "1. Clock-In" << std::endl;
    std::cout << "2. Clock-Out" << std::endl;
    std::cout << "3. Take Break" << std::endl;
    std::cout << "4. End Break" << std::endl;
    std::cout << "0. Close Program" << std::endl;
    std::cout << "\nEnter your option: ";
    std::cin >> option;
    std::cin.ignore();

    if (option == 1) {
      mcdonalds.clock_in();
    }
    if (option == 2) {
      mcdonalds.clock_out();
    }
    if (option == 3) {
      mcdonalds.take_breaks();
    }
    if (option == 4) {
      mcdonalds.end_break();
    }
    if (option == 0) {
      break;
    }
    mcdonalds.display();
    std::cout << std::endl;
  }

  return 0;
}
