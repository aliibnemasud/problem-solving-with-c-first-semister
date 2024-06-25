// 2. Write a C program to add, divide, multiply, and divide two integers by using function.

#include <stdio.h>


int add(int a, int b){
    return a + b;
}

int divide(int a, int b){
    return a/b;
}


float multiply(float a, float b){
    return a * b;
}

int main() {

    printf("%d \n", add(1, 3));
    printf("%d \n", divide(9, 3));
    printf("%f \n", multiply(2, 3));
    
    return 0;
}