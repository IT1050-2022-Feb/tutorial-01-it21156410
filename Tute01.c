/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1,mark2;

  printf("Enter Mark 01: \n >>> ");
  scanf("%d", &mark1);
  
  printf("Enter Mark 02: \n >>> ");
  scanf("%d", &mark2);
  
  printf("Average of two marks: %.2f", (mark1 + mark2) / 2.0);
  
  return 0;
}

