#include <stdio.h>

int main() {
    int a;
    
    scanf("%d", &a);
    
    if ( a % 2 == 0 ) {
        a += 1;
    }
    
    printf("%d\n", a);
    
    return 0;
}

// Считать целое число. Вывести на экран минимальное нечетное число, не меньшее введенного.

// Пример ввода
// 16
// Пример вывода
// 17
