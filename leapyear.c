#include <stdio.h>

int main(void)
{
   int userInput = 0;

   printf("Please input a year.\n");
   if ((scanf("%d", &userInput) != 1) || userInput <= 0)
   {
       printf("Please enter a valid number.\n");
       return 1;
   }
   {
       if ((userInput % 4) != 0)
       {
           printf("Your year is not a leap year.\n");
       }
       else if ((userInput % 100) != 0)
       {
           printf("Your year is a leap year!\n");
       }
       else if ((userInput % 400) != 0)
       {
           printf("Your year is not a leap year.\n");
       }
       else
       {
           printf("Your year is a leap year!\n");
       {
   }
   return 0;
}
}
}
