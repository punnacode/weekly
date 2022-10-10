#include<stdio.h>

int main()
{
    float n;

    float temp, sqrt;

    printf("Enter Number: ");

    scanf("%f", &n);

    sqrt = n / 2;
    temp = 0;
    
    if(n<0){
        printf("The square root of %.2f is undefined", n);
        return 0;
    }
    while(sqrt != temp){
        temp = sqrt;
        sqrt = (n/temp + temp) / 2;
    }
    if(n==1){
         printf("The square root of 1.00 is 1.00");
    }   
    else printf("The square root of %.2f is %.2f", n, sqrt);
}
