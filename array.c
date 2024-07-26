// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     int arr[10],size,i,sum=0;

//     printf("Enter the size of the array");
//     scanf("%d",&size);

//     printf("Enter %d elements in array\n",size);
//     for(i=0;i<size;i++){
//         scanf("%d",&arr[i]);
//         sum+=arr[i];

//     }

//         printf("Sum of the array is:%d",sum);

//     return 0;
// }

// To search the number from the array

// int main(int argc, char const *argv[])
// {

//     int arr[10],size,i,num,j;

//     printf("Enter the size of the array\n");
//     scanf("%d",&size);

//     printf("Enter %d elements in array\n",size);
//     for(i=0;i<size;i++){
//         scanf("%d",&arr[i]);

// }
//     printf("Enter the Number to search: \n");
//     scanf("%d",&num);

//     for(j=0;j<=size;j++){
//         if(arr[j]==num){
//         printf("The number is found at %d position",arr[j]);
//         break;
//     }
//     if(j==size){
//         printf("The number is not found");

//     }

// }
// }
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr[10], size, i, max;

    printf("Enter the size of the array\n");
    scanf("%d", &size);

    printf("Enter %d elements in array\n", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    max=arr[0];
    for(i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }     
    }
    printf("The maximum number is %d",max);


    return 0;
}
