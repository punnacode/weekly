/*
print butterfly pattern
*/
#include<stdio.h>
int main()
{
  int n,i,j;
  printf("Enter n value: ");
  scanf("%d",&n);
  for(i=0;i<=n;i++)
  {
    for(j=0;j<=2*n+1;j++)
      {
      if((i<j) && (j<(2*n+1-i)))
      printf("  ");
      else
      printf("* ");
      }
        printf("\n");
        }
        for(i=0;i<=n;i++)
        {
          for(j=0;j<=2*n+1;j++)
            {
              if(((n-i)<j) && (j<(n+1+i)))
                printf("  ");
              else
                printf("* ");
                }
                printf("\n");
        }
}
