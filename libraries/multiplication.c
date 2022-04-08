#include<stdio.h>
#include<cs50.h>

int main (void)
{
  int numberA = get_int("Enter number A:  \n");
  int numberB = get_int("Enter number B:  \n");
  
  printf("The product is: %i\n", numberA * numberB);
}
