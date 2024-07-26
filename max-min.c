#include <stdio.h>

// int main(int argc, char const *argv[])
// {

//     int a, b, c;
//     printf("Enter Three Numbers: \n");
//     scanf("%d%d%d", &a, &b, &c);

//     if (a > b && a > c)
//     {
//         printf("%d is greater than %d and %d\n", a, b, c);
//         printf("hii");
//     }
//     else if (b > a && b > c)
//     {
//         printf("%d is greater than %d and %d\n", b, a, c);
//     }
//     else
//     {
//         printf("%d is greater than %d and %d\n", c, a, b);
//     }
//     return 0;
// }

int main(int argc, char const *argv[])
{

    int a, b, c;
    printf("Enter Three Numbers: \n");
    scanf("%d%d%d", &a, &b, &c);

    if (b > a && a > c || c > a && a > b)
    {
        printf("%d is the second largest \n", a);
        printf("hii");
    }
    else if (a > b && b > c || c > b && b > a)
    {
        printf("%d is the second largest \n", b);
    }
    else
    {
        printf("%d is the second largest \n", c);
    }
    return 0;
}
