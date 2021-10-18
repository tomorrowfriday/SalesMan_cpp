#include <iostream>
#include "data.hpp"

int itowns(int towns_total) {
  do {
  std::cout   <<  "Towns total (>= 2): ";
  std::cin    >>  towns_total;
  }
  while(towns_total < 2);
}

