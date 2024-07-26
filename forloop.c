 #include <stdio.h>

//To caluculate sum

// int main(int argc, char const *argv[])
// {
//     int sum = 0;
//     for (int i = 1; i <= 5; i++)
//     {
//         sum=sum+i;
//     }
//     printf("Sum is %d\n",sum);
//     return 0;
// }

//To calulate product(factorial)

// int main(int argc, char const *argv[])
// {   
//     int num;
//     int fact=1;
//     printf("Enter the number for factorial: \n");
//     scanf("%d",&num);

//     for(int i=1;i<=num;i++){
//         fact*=i;
//     }
//     printf("Factorial is %d\n",fact);
//     return 0;
// }

//To calculate power

// int main(int argc, char const *argv[])
// {
//     int pow=1,a,b;
//     printf("Enter the values for a and b: \n");
//     scanf("%d%d",&a,&b);

//     for(int i=1;i<=b;i++){

//         pow=pow*a;
//     }
//     printf("Power of %d and %d the number is:%d\n",a,b,pow);
//     return 0;
// }

//To identify the given number is prime or not

// int main(int argc, char const *argv[])
// {
//     int i,num,count=0;
//     printf("Enter the number: \n");
//     scanf("%d",&num);

//     for(i=1;i<=num;i++){    
//         if(num%i==0){
//             count++;
//         }
//     }   
//     if(count==2){
//         printf("%d is a prime number\n",num);
//     }
//     else{
//         printf("%d is not a prime number\n",num);
//     }   
//     return 0;
// }

//To print numbers from 1-10

int main(int argc, char const *argv[])
{
    for(int i=1;i<=10;i++){
        printf("%d\n",i);
    }
    return 0;
}


