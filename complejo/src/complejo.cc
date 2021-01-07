#include <iostream>

#include "complejo.h"    


/** Devuelve el valor de la suma de todos los términos de valor par de la serie de
 *  Fibonacci menores que kLimit
 *
 *  @param[in] kLimit. Se suman los términos pares menores que kLimit
 *  @return La suma de los términos pares menores que kLimit
 */
size_t fibonacci_sum(const size_t kLimit) {
  size_t second_to_last{0},  // Second to last term
           last{1},          // Last term generated
           new_term{0};      // New term of the serie
  size_t sum{0};        // Accumulated sum of the terms

	while (new_term < kLimit) {
    new_term = last + second_to_last;
    if ((new_term % 2 == 0) && (new_term < kLimit)) {
      sum += new_term;
    }
    // Uncomment for debug: print each new term
    // std::cout << "Term: " << new_term << std::endl;
    second_to_last = last;
    last = new_term;
	}

  return sum;
}