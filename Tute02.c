//program to calculate the amount to be paid for a rented vehicle

#include <stdio.h>
int main (void) //function main begins program execution 
{
  float distance, amount, remainingDist; //declaring variables for distance, amount and remaining distance

  printf("Input distance:"); //prompt
  scanf("%f", &distance); //user inputs distance 

  if ( distance <= 30 ) //using selection 
  {
    amount = distance * 50.00; //calculation for amount
    printf("Amount to be paid is %.2f", amount); //prompt
  }
    else if ( distance > 30 )
    {
      remainingDist = ( distance - 30.00 ) * 40.00;
      amount = remainingDist + ( 30.00 * 50.00 ); //calculation for amount 

      printf("Amount to be paid is Rs.%.2f", amount); //prompt
    }

  return 0; //end of main function
  
}