#include <stdio.h>

int main() {
    int a = 5;
    int b = 0;
    int c = a / b;  // Ошибка: деление на ноль
    printf("%d", c);
    return 0;
}