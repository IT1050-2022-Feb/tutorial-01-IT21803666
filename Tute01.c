//program to input marks of 2 subjects and find its average

#include <stdio.h>
int main (void) //program begins execution at main 
{
  int mark1, mark2; //declaring variables for marks
  float avg, sum; //declaring variables for average and sum

  printf("Enter marks of subject 1:"); //prompt
  scanf("%d", &mark1); //user input marks of subject 1

  printf("Enter marks of subject 2:"); //prompt
  scanf("%d", &mark2); //user input marks of subject 2 

  sum = mark1 + mark2; //calculating total of 2 subjects
  printf("Sum is %.1f\n", sum); //prompt

  avg = sum / 2; //calculation of average
  printf("Average is %.1f\n", avg); //prompt

  return 0; //end of main function 
}