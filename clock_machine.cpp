#include "clock_machine.h"

void Clock_Machine::clock_in(std::string name, std::string id) {
  Employees *person = new Employees;
  person->name = name;
  person->id = id;

  // Get the time the employee clocked-in
  time_t now = time(0);
  char *date_time = ctime(&now);
  person->time_clocked_in = date_time;

  person->break_time = false;

  list_of_employees.push_back(person);
}

void Clock_Machine::clock_in() {
  std::string name, id;
  std::cout << "Enter your name: ";
  getline(std::cin, name);
  std::cout << "Enter your ID  : ";
  getline(std::cin, id);

  Employees *person = new Employees;
  person->name = name;
  person->id = id;

  // Get the time the employee clocked-in
  time_t now = time(0);
  char *date_time = ctime(&now);
  person->time_clocked_in = date_time;

  person->break_time = false; // We assume he didn't have a break yet

  list_of_employees.push_back(person);
}

void Clock_Machine::take_breaks() {
  std::string name, id;
  std::cout << "Enter your name: ";
  getline(std::cin, name);
  std::cout << "Enter your ID  : ";
  getline(std::cin, id);

  for (auto employe : list_of_employees) {
    if (employe->name == name && employe->id == id) {
      employe->break_time = true;
    }
  }
}

void Clock_Machine::end_break() {
  std::string name, id;
  std::cout << "Enter your name: ";
  getline(std::cin, name);
  std::cout << "Enter your ID  : ";
  getline(std::cin, id);

  for (auto employe : list_of_employees) {
    if (employe->name == name && employe->id == id) {
      if (employe->break_time == true) {
        employe->break_time = false;
      }
    }
  }
}

void Clock_Machine::clock_out() {
  std::string name, id;

  std::cout << "Enter your name: ";
  getline(std::cin, name);
  std::cout << "Enter your ID  : ";
  getline(std::cin, id);

  for (auto employe : list_of_employees) {
    if (employe->name == name && employe->id == id) {
      std::cout << employe->name << " has clocked out successfully! "
                << std::endl;

      // get the time the employee clocked out
      time_t now = time(0);
      char *date_time = ctime(&now);
      employe->time_clocked_out = date_time;

      // Add this employee to the log since their shift is over
      intendance.add_to_log(employe);

      // Remove their credentials from the list of employees currently working
      list_of_employees.remove(employe);
      break;
    }
  }
}

void Clock_Machine::display() {
  std::cout << std::endl;
  std::cout << list_of_employees.size() << " are clocked-in " << std::endl;

  for (auto employe : list_of_employees) {
    if (employe->break_time == true) {
      std::cout << "(On Break) ";
    }
    std::cout << employe->name << "   " << employe->id << "   clocked: ";
    std::cout << employe->time_clocked_in;
  }
}

void Clock_Machine::machine_log() { intendance.print_log(); }
