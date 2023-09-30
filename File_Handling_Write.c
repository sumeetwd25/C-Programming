#include<stdio.h>
int main(){
    FILE *filePointer;

    filePointer=fopen("test2.txt","w");
    
    fputs("Hi,I created a new file.\n",filePointer);
    fputs("I created it using file handling.",filePointer);
    
    fclose(filePointer);
    return 0;
}