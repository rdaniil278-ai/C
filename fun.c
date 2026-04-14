#include <stdio.h>

//Функция без параметров и без возврата

void printHello() {
    printf("Hello!\n");
}

//Функция с параметрами

void printSum(int a, int b) {
    printf("Sum = %d\n", a + b);
}

//Функция, возвращающая значение

int multiply(int x, int y) {
    return x * y;
}

// Использование:
//int result = multiply(4, 5); // result = 20

//Полный пример:

#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int x = 10, y = 20;
    int s = add(x, y);
    printf("%d + %d = %d\n", x, y, s);
    return 0;
}