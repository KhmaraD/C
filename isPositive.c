#include <stdio.h>

int main() {
    int number;
    
    scanf("%d", &number);
    
    if ( number >= 0 ) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
    
    return 0;
}

// Считать с клавиатуры число. Если число положительное, вывести на экран «yes», иначе вывести «no».

// Пример ввода
// -20
// Пример вывода
// no
