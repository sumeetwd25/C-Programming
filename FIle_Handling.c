#include<stdio.h>
int main(){
    FILE  *filePointer;
    char fileContent[1000];

    filePointer=fopen("test.txt","r");

    if(filePointer!=NULL){

while(fgets(fileContent,1000,filePointer)){
printf("%s",fileContent);
}
    }

    else{
        printf("File open unsuccessful");
    }
    fclose(filePointer);
    return 0;
}