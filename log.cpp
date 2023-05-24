#include "log.h"

Log::Log() {}

Log::~Log() { save_log.clear(); }

void Log::add_to_log(Employees *employe) { save_log.push_back(employe); }

void Log::print_log() {
  for (auto employe : save_log) {
    std::cout << employe->name << "   " << employe->id << std::endl;
    std::cout << "   --- Clocked in: " << employe->time_clocked_in;
    std::cout << "   --- Clocked out: " << employe->time_clocked_out;
    std::cout << std::endl;
  }
}
