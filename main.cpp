#include "clock_machine.h"
#include <iostream>

int main() {
  Clock_Machine company;
  int option;

  while (true) {
    std::cout << "Company's Clock Machine" << std::endl;
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
      company.clock_in();
    }
    if (option == 2) {
      company.clock_out();
    }
    if (option == 3) {
      company.take_breaks();
    }
    if (option == 4) {
      company.end_break();
    }
    if (option == 0) {
      break;
    }
    company.display();
    std::cout << std::endl;
  }

  return 0;
}
