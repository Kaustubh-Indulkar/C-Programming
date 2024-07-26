#include <stdio.h>

// int main(int argc, char const *argv[])
// {
//    int no;
//    printf("Enter a number: ");
//    scanf("%d",&no);

//    if(no%2==0){
//     printf("%d is an even number",no);
//    }
//    else{
//        printf("%d is an odd number",no);
//       }
//     /* code */
//     return 0;
// }

int main(int argc, char const *argv[])
{
  int no1,no2;
  printf("Enter two numbers: ");
  scanf("%d %d",&no1,&no2);

  if(no1>no2){
    printf("%d is greater than %d",no1,no2);
  }
  else if(no1<no2){
    printf("%d is greater than %d",no2,no1);
    /* code */}
    else{
      printf("%d and %d are equal",no1,no2);
    }
    /* code */
    return 0;
}
