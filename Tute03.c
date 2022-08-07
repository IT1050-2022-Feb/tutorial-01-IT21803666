//programme to calculate the sum of numbers from 1 to n
#include <stdio.h>
int main (void) //function main begins programme execution 
{
  int n, counter = 1; //variable declaration 
  int c = 0, int total = 0;

  printf("Enter a number:"); //prompt
  scanf("%d", &n); //user enters a number from keyboard

  while ( counter <= n ) //while condition
    {
      c++; //post increment of variable c

      total = total + c; //calculation of total

      counter++; //post increment of counter
    } 
  printf("Total is %d", total); //prompt
 
  return 0; //end of main function 
}