#include<stdio.h>
#include<stdlib.h>
void test();
int main(void)
{
    test();
    printf("\n Back to main");
    test();
    return 0;
}
void test()
{
    static int val; //static variable declaration
    val=10; //assigning value to static varibale at the later stage
    //if we initialize static variable at the later stage
    //then it voilets the property of static
    //it is treated as auto variable
    // STATIC VARIABLES MUST BE INITIALIZED AT THE TIME OF DECLARATION ONLY
    int n=30; //local variable initialization
    printf("\n Val=%d &val=%u N=%d",val,&val,n);
    val+=5;
    n+=5;
    printf("\n Val=%d &val=%u N=%d \n",val,&val,n);

}