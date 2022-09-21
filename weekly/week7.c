#include<stdio.h>
#include<conio.h>
 
int main()
{
    int i,j,n;
 
    printf("Enter number of rows: ");
    scanf("%d",&n);
    i=1;
    do 
    {
		j=1;
        do
        {
            printf(" ");
     		                         
    	}while(++j<=n-i+1);    
        
		j=1;
        do
        {
            printf("*");
     		                         
    	}
        while(++j<=i*2-1);                    
        
		printf("\n");
    }  
    while(++i<=n);  
    
	i=n-1;     
    do 
    {
	    j=1;
        do
        {
            printf(" ");
     		                         
    	}
        while(++j<=n-i+1);  
                       
		j=1;
        do
        {
            printf("*");
     		                         
    	}
        while(++j<=i*2-1);   
	                  
        printf("\n");
 
    }
    while(--i>0);     
          
    return 0;
}