#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int choice;
    int val;
    char ch;
    printf("Enter Value ");
    scanf("%d",&val);
   // printf("Enter character value ");
   // scanf("%c",&ch);
    switch(val)
    {
        case 'A': //case 65:
            printf(" Inside Case A Block \n");
        break;

        case 'a': //case 97:
            printf(" Inside Case a Block \n");
        break;

        default:
        printf("case does not match \n");
        break;

    }
    return 0;
}