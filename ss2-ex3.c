#include <stdio.h>

int main() {
    int a = 10;   
    int b = 20;   
    int sum, diff, product, quotient;  

    sum = a + b;     
    diff = a - b;     
    product = a * b;  
    quotient = a / b; 

    printf("Tong cua a va b la: %d\n", sum);
    printf("Hieu cua a va b la: %d\n", diff);
    printf("Tich cua a va b la: %d\n", product);
    printf("Thuong cua a và b la: %d\n", quotient);

    return 0;
}

