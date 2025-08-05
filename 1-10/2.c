#include <stdio.h>

int main(){
  int fib1 = 1, fib2 = 2, sumOfEvens = 2, newFib;
  while(fib1 + fib2 < 4000000){
    newFib = fib1 + fib2;
    fib1 = fib2;
    fib2 = newFib;
    if(fib2%2 == 0){
      sumOfEvens += fib2;
    }
  }
  printf("Sum of even fib numbers less than 4 million is: %d\n", sumOfEvens);
  return 0;
}
