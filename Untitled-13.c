#include <stdio.h>
int main(void)
{
int str[]={'P','R','E','C','A','T'};
printf("A%c ",str);                     // should be '*str'
printf("A%s ",str);
printf("A%c ",str[0]);
return 0;
}
