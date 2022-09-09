#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100];
    char str2[100];
    int i=0;
    int result;
    printf("Enter the string: ");
    scanf("%s", str1);
    int str_len;
    str_len=strlen(str1);
    str_len-=1;
    while(str_len>=0){
        str2[i] = str1[str_len];
        i++;
        str_len--;
    }
    result = strcmp(str1,str2);
    if(result==0){
        printf("%s is a parlindrome", str1);
    }
    else{
        printf("%s is not a parlindrome", str1);
    }
}