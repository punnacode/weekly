#include<stdio.h>

int main(){
    float n;
    float i;
    printf("Enter Number: ");
    scanf("%f", &n);
    for(i=0.001;i*i<n;i=i+0.001);
    if(n<0){
        printf("The square root of %.2f is undefined", n);
    }
    else 
        printf("The square root of %.2f is %.2f", n, i);
    
}