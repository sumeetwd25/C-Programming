#include<stdio.h>
int main(void)
{
    int num;
    char ch;
    printf("\n enter numeric value : ");
    scanf("%d",&num);
    printf("\n Enter character : ");
    scanf("%*c");//suppress the new line character
    scanf("%c",&ch);
    printf("\n Num = %d Character = %c\n\n",num,ch);
   
    return 0;
}