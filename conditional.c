#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b;
    printf("Enter the two numbers of : \n");
    scanf("%d%d", &a, &b);

    a > b ? printf("%d is greater than %d\n", a,b) : b > a ? printf("%d is greater than %d\n", a,b)
                                                         : printf("%d is equal to %d\n", a, b);

    /* code */
    return 0;
}