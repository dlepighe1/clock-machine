#ifndef CLOCK_MACHINE_H
#define CLOCK_MACHINE_H

#include "employees.h"
#include "log.h"
#include <iostream>
#include <list>

class Clock_Machine {
private:
  std::list<Employees *> list_of_employees; // List of people clocked in today
  Log intendance;

public:
  // Clock in
  void clock_in(std::string name, std::string id);
  void clock_in();

  // Breaks managers
  void take_breaks();
  void end_break();

  // Clock out
  void clock_out();

  // Show the list of employee clocked-in
  void display();

  // About the log
  void machine_log();
};

#endif // CLOCK_MACHINE_H
