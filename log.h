#ifndef LOG_H
#define LOG_H

#include "employees.h"
#include <iostream>
#include <list>

class Log {
private:
  std::list<Employees *> save_log;

public:
  // Constructor
  Log();
  // Destructor
  ~Log();

  // Add to intendance
  void add_to_log(Employees *employe);

  // Show today's intendance (Who came to work)
  void print_log();
};

#endif // LOG_H
