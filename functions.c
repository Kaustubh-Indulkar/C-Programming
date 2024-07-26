#include <stdio.h>


// void square1();
void square2(int);
int square3(int);
int square4();


int main(int argc, char const *argv[])
{   
    int b;
    // square1();
    b=square4();
    printf("Square is: %d",b);
    // b=square3(a);
    
    

    // square2(a);

    /* code */
    return 0;
}

// void square1(){
//     int a, b;
//     printf("Enter the values of a: \n");
//     scanf("%d",&a);
//     b=a*a;
//     printf("Square is:%d",b);

// }

// void square2(int a){
//     int b;
//     b=a*a;
//     printf("Square is:%d",b);


// }

// int square3(int a )
// {
//     return a*a;
// }

int square4(){
    int a;
    printf("Enter the value of a:\n");
    scanf("%d",&a);
    return a*a;
}