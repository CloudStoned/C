#include<stdio.h>
#include<math.h>

int main(){

    int num1,num2,num3,num4,num5;
    
    

    printf("Enter integer 1: ");
    scanf(" %d", &num1);

    printf("Enter integer 2: ");
    scanf(" %d", &num2);
    
    int sum1 = num1 + num2;

    printf("Enter integer 3: ");
    scanf(" %d",&num3);

    printf("Enter integer 4: ");
    scanf(" %d", &num4);

    int sum2 = num3 + num4;

  
    printf("Enter Integer 5: ");
    scanf(" %d", &num5);

    int total = (sum1 * sum2);

    printf("Result = %d",(int) pow(total,num5));




    return 0;
}
