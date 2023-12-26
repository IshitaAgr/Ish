#include "add.c"
#include "mul.c"


int main(int argc, char const *argv[])
{
    int ch;
    printf("Enter 1 for addition\nEnter 2 for multiplication  : ");
    scanf("%d",&ch);
    switch(ch){
    case 1:
        add();
        break;
    case 2:
        mul();
        break;
    }
    return 0;
}
