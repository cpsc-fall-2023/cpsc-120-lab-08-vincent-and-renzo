// Renzo Diaz
// renzo05diaz@csu.fullerton.edu
// @renzo05diaz
// Partners: @vincentchen1

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (arguments.size() < 2 || arguments.empty()) {
    std::cout << "Error: you must supply ay least one argument\n";
    return (2);
  };

  double sum{0.0};
  bool first = true;
  for (const std::string& arg : arguments) {
    if (first) {
      first = false;
    } else {
      double number = std::stod(arg, nullptr);
      sum += number;
    }
  }
  double avg{sum / static_cast<double>(arguments.size() - 1)};

  std::cout << "average = " << avg << "\n";

  return 0;
}
