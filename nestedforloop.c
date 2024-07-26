#include <stdio.h>


// int main(int argc, char const *argv[])
// {
//     int i ,j;
//     for(i=1;i<=5;i++){
//         for(j=1;j<=4;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
    
//     return 0;
// }


//****
//  5rows
//  4columns

//1234
//4rows 4columns

// int main(int argc, char const *argv[])
// {
//     int i,j;
//     for(i=1;i<=4;i++){
//         for(j=1;j<=4;j++){
//             printf(" %d",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

//1234

// int main(int argc, char const *argv[])
// {
//     int i,j,k=1;
//     for(i=1;i<=4;i++){
//         for(j=1;j<=4;j++){
//             printf(" %d ",k);
//             k++;
//         }
//         printf("\n");
//     }
//     return 0;
// }

//*
//** 
//*** 
//**** 
//***** 

// int main(int argc, char const *argv[])
// {
//     int i,j;
//     for(i=1;i<=5;i++){
//         for(j=1;j<=i;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }


// int main(int argc, char const *argv[])
// {
//     int i,j;
//     for(i=5;i>=1;i--){
//         for(j=1;j<=i;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

int main(int argc, char const *argv[])
{
    int i,j,k=1;
    for(i=1;i<=5;i++){
        for(j=1;j<=10;j++){
             k=i*j;
            printf(" %d ",k);
            k++;
        }
        printf("\n");
    }
    return 0;
}
