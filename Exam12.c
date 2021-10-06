/*
Задача 12. Ако имаме символен низ char str[] = “Hеllo”, заменете
буквите l с х на същия символен низ и отпечатайте резултата на
конзолата.
*/

#include <stdio.h>
#include <string.h>

int main() {

    char str[] = "Hello";

    printf("str: %s , after change letters \'l\'", str);
    
    int i = 0;

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == 'l') {
            str[i] = 'x';
        }
    }

    printf(" %s", str);

    return 0;
}
