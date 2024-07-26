#include <stdio.h>

int main(int argc, char const *argv[])
{
    int base, height, area;
    printf("Enter Base and Height: \n");
    scanf("%d%d", &base, &height);

    area = 0.5 * base * height;

    printf("Area of the given Triangle is:%d", area);

    return 0;
}
