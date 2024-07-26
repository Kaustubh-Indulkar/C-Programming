#include <stdio.h>

int main(int argc, char const *argv[])
{
    int no;
    printf("Enter a number: \n");
    scanf("%d", &no);

    if (no > 0)
    {
        printf("The number %d is positive\n",no);
    }
    else if (no < 0)
    {
        printf("The number %d is negative\n",no);
    }
    else
    {
        printf("The number %d is zero\n",no);
    }
    /* code */
    return 0;
}
