//programe developed with 3 functions 

#include <stdio.h> 

int min ( int x, int y ); 
int max ( int x, int y );
int mult ( int x, int y );
int main() //function main begins programme execution 
{
   int no1, no2;
   int maximum, minimum, multiply;
  
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);

   minimum = min ( no1, no2 );
   printf("%d\n", minimum );

   maximum = max ( no1, no2 );
   printf("%d\n", maximum);

   multiply = mult ( no1, no2 );
   printf("%d\n", multiply);
  
   return 0;
}
int min ( int x, int y )
{
  if ( x < y)
    return x;
  else 
    return y;
}

int max ( int x, int y)
{
  if ( x > y )
    return x;
  else 
  return y;
}

int mult ( int x, int y )
{
  return x * y;
}
