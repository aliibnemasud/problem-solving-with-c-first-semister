#include <stdio.h>
void main()
{
    int num1,num2,num3;
    printf("Enter three numbers\n");
    scanf("%d %d %d",&num1,&num2,&num3);
    if(num1<num2 && num1<num3 && num1%2== 0){
        printf("\n%d is the smallest even",num1);
    }
    else if (num1<num2 && num1<num3 && num1%2 == 1){
        printf("\n%d is the smallest odd",num1);
    }
    else if(num2<num3 && num2%2 == 0){
        printf("\n%d is the smallest and Even Number",num2);
    }
    else if(num2<num3 && num2%2 == 1){
        printf("\n%d is the smallest and Odd Number",num2);
    }
    else{
        printf("\n%d is the smallest",num3);
    }
    if(num1>num2 && num1>num3 && num1%2 == 1){
        printf("\n%d is largest Odd Number",num1);
    }
    else if(num1>num2 && num1>num3 && num1%2 == 0){
        printf("\n%d is largest Even Number",num1);
    }
    else if(num2>num3 && num2%2 == 1){
        printf("\n%d is largest Odd Number",num2);
    }
    else if(num2>num3 && num2%2 == 0){
        printf("\n%d is largest Even Number",num2);
    }
    else{
        printf("\n%d is largest",num3);
    }
    getch();
    return 0;
}
