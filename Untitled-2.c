#include<stdio.h>
int main()
{
float a = 2.3f;
printf("%u %u %u", sizeof(char), sizeof(1.2), sizeof(a));

printf("\nsizeof('B') = %d", sizeof('B'));                      //ascii value of B = 66(which is an integer value)  //size of int = 4
return 0;
}

/*when hard-coded value is given in single quotes, it is converted into ASCII value*/