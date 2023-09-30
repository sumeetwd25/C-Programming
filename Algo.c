//searching algorithm
#include<stdio.h>
#define SIZE 10
#define true 1
#define false 0

int comparisons=0;

void display_array(int arr[]);

int linear_search(int arr[], int key);

int main(){

    int arr[SIZE]={10,20,30,40,50,60,70,80,90,100};
    int key;

    display_array(arr);
    printf("\nEnter the key: ");
    scanf("%d",&key);

    if (linear_search(arr,key)){

        printf("%d is found in the array\n",key);
        printf("No. of comparisons: %d\n",comparisons);
    }
    else{
        printf("%d is not found in the array\n",key);
        printf("No. of comparisons: %d\n",comparisons);
    }

    return 0;
}

void display_array(int arr[]){

    int index;
    printf("Array elements are: ");
    for(index=0; index<SIZE; index++){
    printf("%4d",arr[index]);
    }
}

int linear_search(int arr[], int key){

    int index;
    comparisons=0;

    for (index=0; index<SIZE; index++){
        
        comparisons++;
        if (key==arr[index])
        return true;
    }
    return false;
}
