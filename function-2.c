#include <stdio.h>

int fact(int a);
int main(int argc, char const *argv[])
{
    int a;
    printf("Enter the number for factorial: \n");
    scanf("%d",&a);
    int result=fact(a);
    printf("Factorial of %d is %d\n",a,result);

    /* code */
    return 0;
}
int fact(int a){
    int factorial=1;
    for(int i=1;i<=a;i++){
        factorial*=i;
}
    return factorial;
} 