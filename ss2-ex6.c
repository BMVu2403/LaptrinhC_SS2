#include <stdio.h>

int main() {
    const float PI = 3.14f; 

    float bankinh = 5.0f; 
    
    float chuvi = 2 * PI * bankinh;       
    float dientich = PI * bankinh * bankinh; 

    printf("Ban kinh: %.2f\n", bankinh);
    printf("Chu vi: %.2f\n", chuvi);
    printf("Dien tich: %.2f\n", dientich);

    return 0;
}

