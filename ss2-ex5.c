#include <stdio.h>

int main() {
    double chieudai = 10.0; 
    double chieurong = 5.0; 

    double chuvi = 2 * (chieudai + chieurong); 
    double dientich = chieudai * chieurong;    

    printf("Chieu dai: %.2f\n", chieudai);
    printf("Chieu rong: %.2f\n", chieurong);
    printf("Chu vi: %.2f\n", chuvi);
    printf("Dien tich: %.2f\n", dientich);

    return 0;
}

