#include<stdio.h>
int main(){
    int numbers[] = {1, 2, 3, 4, 5};
    int *ptr = numbers;

    printf("%d\t%d\n", *ptr,ptr); // prints the value at the current location
    ptr++;                 // move to the next location
    printf("%d\t%d\n", *ptr,ptr); 


//     int numbers[] = {1, 2, 3, 4, 5};
//     int *ptr = numbers;
//     printf("%d\n", *(ptr + 2));

}



//Double Pointer

// #include<stdio.h>  
// void main ()  
// {  
//     int a = 10;  
//     int *p;  
//     int **pp;   
//     p = &a; // pointer p is pointing to the address of a  
//     pp = &p; // pointer pp is a double pointer pointing to the address of pointer p  
//     printf("address of a: %x\n",p); // Address of a will be printed   
//     printf("address of p: %x\n",pp); // Address of p will be printed  
    
// }  