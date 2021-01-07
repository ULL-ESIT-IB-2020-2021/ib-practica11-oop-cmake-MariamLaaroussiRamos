#include <iostream>
   
#include "tools.h"       
#include "complejo.h"    

int main (int argc, char* argv[]) {
  Usage(argc, argv);
  std::string limit = argv[1];
  const size_t kLimit = stoi(limit);
  std::cout << "Sum: " << fechas(kLimit) << std::endl; 
  return 0;
}