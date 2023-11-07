// Renzo Diaz
// renzo05diaz@csu.fullerton.edu
// @renzo05diaz
// Partners: @vincentchen1

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (argc != 4) {
    std::cerr << " error: You must supply three arguments.\n" << std::endl;

    return 1;
  }

  std::string protein = arguments[1];
  std::string bread = arguments[2];
  std::string condiment = arguments[3];

  std::cout << "Your order:\n";
  std::cout << "A " << protein << " sandwich on " << bread << " with "
            << condiment << "\n";
  return 0;
}