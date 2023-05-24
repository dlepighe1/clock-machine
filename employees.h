#ifndef EMPLOYEES_H
#define EMPLOYEES_H

#include <string>

struct Employees {
  std::string name, id, time_clocked_in, time_clocked_out;
  bool break_time;
};

#endif // EMPLOYEES_H
