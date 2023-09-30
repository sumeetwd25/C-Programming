#include <stdio.h>
int main() {  
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);  
    
    // %d displays the integer value of a character
    // %c displays the actual character
    printf("ASCII value of %c = %d\n", c, c);
    printf("Hexadecimal ASCII value = %x\n",c);
    printf("Octal ASCII value = %o\n",c);
    
    return 0;
}
