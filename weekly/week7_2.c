#include <stdio.h>
void DiamondPattern(int number) 
{int i, k, count = 1;
     count = number - 1;
    for (k = 1; k <= number; k++)
    {
        for (i = 1; i <= count; i++)
            printf(" ");
        count--;
        for (i = 1; i <= 2 * k - 1; i++)
            printf("*");
        printf("\n");
     }
     count = 1;
     for (k = 1; k <= number - 1; k++)
     {
         for (i = 1; i <= count; i++)
             printf(" ");
         count++;
         for (i = 1 ; i <= 2 *(number - k)-  1; i++)
             printf("*");
         printf("\n");
      }
      return 0;
}
int main()
{
    int number; 
    printf("Enter number of rows: ");
    scanf("%d", &number);
    DiamondPattern(number);
    return 0;
}
    
