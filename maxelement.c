#include<stdio.h>

int findMaxElement(int * arr, int size);
int max(int,int);

int main(){

    int arr[100],max,i,size;

    printf("Enter the size of the array\n");
    scanf("%d",&size);
   
    printf("Enter %d elements of an array\n", size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
   
    max=findMaxElement(arr, size);

    printf("Maximum element in the array is %d\n",max);

    return 0;
}

int findMaxElement(int * arr, int size)
{
    if(size==1)
    return arr[0];
    else
    return max(findMaxElement(arr,size-1),arr[size-1]);
}


int max(int n1,int n2)
{
    return n1>n2? n1:n2;
}
