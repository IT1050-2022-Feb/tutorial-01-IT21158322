/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int s1,s2;
  float av;
  printf("enter the sub 1 mark ");
  scanf("%d",&s1);
  printf("enter the sub 2 mark ");
  scanf("%d",&s2);
  av=(s1+s2)/2;
  printf("Average is %.2f",av);


  return 0;
}

