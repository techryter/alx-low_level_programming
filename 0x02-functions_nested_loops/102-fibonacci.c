#include <stdio.h>
/**
 *  program that prints the first 50 Fibonacci numbers, 
 *  starting with 1 and 2, followed by a new line.
 */
int main() 
{
  int i, n;

  // initialize first and second terms
  int t1 = 1, t2 = 2;

  // initialize the next term (3rd term)
  int nextTerm = t1 + t2;

  // get no. of terms from user
  printf("50");
  scanf("%d", &n);

  // print the first two terms t1 and t2
  printf("Fibonacci Series: %d, %d, ", t1, t2);

  // print 3rd to nth terms
  for (i = 3; i <= n; ++i) {
    printf("%d, ", nextTerm);
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
  }

  return 0;
}
