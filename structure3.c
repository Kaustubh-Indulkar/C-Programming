#include <stdio.h>

int sum(int[],int size);

int main(int argc, char const *argv[])
{
    int a[10],n,i,result;
    printf("Enter the size of array: \n");
    scanf("%d",&n);
    printf("Enter %d element in array\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    result=sum(a,n);
    printf("Sum of the Array is:%d" ,result);
    return 0;
}

int sum(int arr[],int size){

    int i,sum=0;
    for(i=0;i<size;i++){
        sum=sum+arr[i];
    }
    return sum;
}
