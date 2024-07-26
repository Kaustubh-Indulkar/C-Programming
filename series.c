#include <stdio.h>

int fact(int a);
double powerr(int a,int b);

int fact(int a){
    int factorial=1;
    for(int i=1;i<=a;i++){
        factorial*=i;
}
    return factorial;
}
double powerr(int a,int b){
    double pow=1;
    for(int i=1;i<=b;i++){

        pow*=a;
    }
    return pow;
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    double sum = 0;

    for (int i = 1; i <= n;i++) {
        int result = fact(i);
       
       double p=powerr(i,i);
        sum += (result / p);
        printf("%d!/%d^%d", i, i, i);
        
        if (i != n) {
            printf(" + ");
        }
    }

    printf("\nSum: %f\n", sum);

    return 0;
}

