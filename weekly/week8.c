#include<stdio.h>
#include<math.h>

int main(){
    int n;
    int sum=0;
    printf("Input Number: ");
    scanf("%d", &n);
    sum = (n*(n-1))/2;
    printf("%d",sum);
}