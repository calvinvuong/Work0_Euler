#include <stdio.h>
#include <stdlib.h>

// Problem 1
// Multiples of 3 and 5
// Find sum of all multiples of 3 and 5 below 1000
int multipleSum() {
  int sum = 0;
  
  // add all multiples of 3 below 1000 to sum
  short multiple3 = 0;
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
  int sum = 2;
  int term = 2;
  int prev = 1;

  while ( term < 4000000 ) {
    int newTerm = term + prev;
    prev = term;
    term = newTerm;

    if ( term % 2 == 0 )
      sum += term;
  }
  return sum;
}

// Problem 3
// What is the largest prime factor of the number 600851475143 ?
int largestPrimeFactor() {
  long quotient = 600851475143;
  int divisor = 2;
  int largestPrime;
  
  while ( divisor < quotient ) {
    while ( quotient % divisor == 0 )  // check if it's a factor
      quotient /= divisor;
    divisor += 1;
  }
  return quotient;
}

// Problem 4
// Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
int squareDifference() {
  int sumOfSquares;
  int squareOfSum = ( (100 * (100 + 1)) / 2 ) * ( (100 * (100 + 1)) / 2 );

  int i;
  for ( i = 1; i <= 100; i++ )
    sumOfSquares += ( i * i );

  return squareOfSum - sumOfSquares;
}
  

int main() {
  printf( "Problem 1: %d\n", multipleSum() );
  printf( "Problem 2: %d\n", evenFib() );
  printf( "Problem 3: %d\n", largestPrimeFactor() );
  printf( "Problem 6: %d\n", squareDifference() );
  return 0;
}

