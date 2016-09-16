#include <stdio.h>
#include <stdlib.h>


int main() {
  printf( "Problem 1: %d\n", multipleSum() );
  printf( "Problem 2: %d\n", evenFib() );
  return 0;
}

// Problem 1
// Multiples of 3 and 5
// Find sum of all multiples of 3 and 5 below 1000
int multipleSum() {
  int sum = 0;
  
  // add all multiples of 3 below 1000 to sum
  int multiple3 = 0;
  while ( multiple3 < 1000 ) {
    sum += multiple3;
    multiple3 += 3;
  }

  // add all multiples of 5 below 1000 to sum, excluding multiples of 3
  int multiple5 = 0;
  while ( multiple5 < 1000 ) {
    if ( multiple5 % 3 != 0 )
      sum += multiple5;
    multiple5 += 5;
  }

  return sum;
}

// Problem 2
// Find the sum of even-valued fibonacci terms that do not exceed 4 million
int evenFib() {
  int sum = 0;
  int term = 2;
  int prev = 1;

  while ( term < 4000000 ) {
    int newTerm = term + prev;
    prev = term;
    term = newTerm;

    if ( term % 2 == 0 )
      sum += term;
  }
}

  
  

