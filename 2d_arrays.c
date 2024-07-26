#include<stdio.h>

// int main(int argc, char const *argv[])
// {
//     int arr[5][5],i,j,row,col;
//     printf("Enter the number of rows and columns: \n");
//     scanf("%d%d",&row,&col);
//     printf("Enter %d Elements: \n",row*col);

//     for ( i = 0; i < row;i++)
//     {
//         for (j = 0; j < col; j++)
//         {
//             scanf("%d",&arr[i][j]);
//         }
        
//     }
//     printf("The matrix is: \n");
    
//     for ( i = 0; i < row; i++)
//     {
//         for (j = 0; j < col; j++)
//         {
//             printf(" %d ",arr[i][j]);
//         }
//         printf("\n");
        
//     }
//     // printf("Tranverse of the matrix is: \n");
//     printf("The new matrix is: \n");

//      for ( i = 0; i < row; i++)
//     {
//         for (j = 0; j < col; j++)
//         {
//             if(i==j){
//             arr[i][j]=0;
        
//             }
//             printf(" %d ",arr[i][j]);
//         }
//         printf("\n");
        
//     }

    
//     return 0;
// }

//sum of 2 arrays
int main(int argc, char const *argv[])
{
    int a[5][5],b[5][5],c[5][5],row,col,i,j;
    printf("Enter rows and columns for Array a: \n");
    scanf("%d%d",&row,&col);
    printf("Enter %d Elements: \n",row*col);

    for ( i = 0; i < row;i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    
    for ( i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf(" %d ",a[i][j]);
        }
        printf("\n");
        
    }

    printf("Enter rows and columns for Array b: \n");
    scanf("%d%d",&row,&col);
    printf("Enter %d Elements: \n",row*col);


         for ( i = 0; i < row;i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d",&b[i][j]);
        }
        
    }
    
    for ( i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf(" %d ",b[i][j]);
        }
        printf("\n");
        
    }
    printf("Sum of the matrix is: \n");
    for ( i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            c[i][j]=a[i][j]+b[i][j];
                printf(" %d ",c[i][j]);

        }

        printf("\n");
        
    }
    return 0;
}
