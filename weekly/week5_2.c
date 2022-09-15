#include<stdio.h>
#include<string.h>

void isPalindrome(char str[])
{   int l = 0;
    int h = strlen(str) - 1;
    while(h > 1)
    {
        if( str[l++] != str[h--])
        {
            printf("%s is not a palindrome\n", str);
            return;
        }
    }
    printf("%s is a palindrome\n", str);
}

int main()
{
    char *str;
    printf("Enter the string: ");
    scanf("%s", str);
    isPalindrome(str);
}
