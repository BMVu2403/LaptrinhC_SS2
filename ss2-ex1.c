#include <stdio.h>

int main() {
    // Kieu int: dung de luu tru so nguyen 
    int a = 10; // Khoi tao bien nguyen a voi gia tri 10

    // Kieu float: dung de luu tru so thuc voi do chinh xac don 
    float b = 3.14f; // Khoi tao bien so thuc b voi gia tri 3.14 

    // Kieu double: dung de luu tru so thuc voi do chinh xac kep 
    double c = 2.718281828; // Khoi tao bien so thuc c voi gia tri 2.718281828

    // Kieu char: dung de luu tru mot ky tu 
    char d = 'A'; // Khoi tao bien ky tu d voi gia tri 'A'

    // Kieu bool (dùng thu vien <stdbool.h>): luu tru gia tri logic (true hoac false)
    #include <stdbool.h>
    bool e = true; // Khoi tao bien logic e voi gia tri true (1)

    // Kieu unsigned int: luu tru so nguyen khong am 
    unsigned int f = 100; // Khoi tao bien nguyen khong am f voi gia tri 100

    // Kieu long: luu tru so nguyen lon 
    long g = 1000000; // Khoi tao bien nguyen lon g voi gia tri 1000000

    // Kieu short: luu tru so nguyen ngan (it byte hon int)
    short h = 32767; // Khoi tao bien nguyen h voi gia tri 32767

    // In các giá tr? ra màn h?nh
    printf("a = %d\n", a);
    printf("b = %f\n", b);
    printf("c = %lf\n", c);
    printf("d = %c\n", d);
    printf("e = %d\n", e); // In kieu bool voi %d (true = 1, false = 0)
    printf("f = %u\n", f);
    printf("g = %ld\n", g);
    printf("h = %d\n", h);

    return 0;
}

