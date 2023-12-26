#include<stdio.h>
#include<conio.h>

void main()
{
    int n,num,r,ans=0;
    clrscr();
    
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    n=num;
    
    
    do
    {
        r=n%10;
        ans=ans+r*r*r;
        n=n/10;
    }while(n>0);
    
    // if else condition to print Armstrong or Not 
    if(ans==num)
    {
        printf("%d is an Armstrong number.",num);
    }
    else
    {
        printf("%d is not an Armstrong number.",num);
    }
    getch();
}