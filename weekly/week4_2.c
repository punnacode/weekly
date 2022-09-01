#include <stdio.h>
int main()
{
int i, j, n;
scanf("%d", &n);
for(i=n/2+1; i>1; i--)
{
for(j=i; j<n; j++)
{
    printf(" ");
}
for(j=1; j<=(2*i-1); j++)
{
    printf("*");
}
printf("\n");
}


for(i=1; i<=n/2+1; i++)
{
for(j=i; j<n; j++)
{
    printf(" ");
}
for(j=1;j<=(2*i-1); j++)
{
    printf("*");
}
printf("\n");
}
}