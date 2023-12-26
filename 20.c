#include<stdio.h>

void main() {
 int num,sum; 
 clrscr();
 printf("Enter integer numbers: ");
 scanf ("%d", &num);
 sum = 0;
 do {
  sum += num % 10; 
  num /= 10; 
 } while (num > 0);
 printf ("The Sum is = %d \n",sum);
 getch();
}