#include <stdio.h>
#include <string.h>

// Function to reverse a string
void reverseString(char str[]) {
    int length = strlen(str);
    int start = 0;
    int end = length - 1;

    // Swap characters from start to end to reverse the string
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char inputString[100];
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    // Call the function
    reverseString(inputString);

    printf("Reversed string: %s\n", inputString);

    return 0;
}
