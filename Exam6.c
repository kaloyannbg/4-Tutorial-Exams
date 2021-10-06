/*
Задача 6. Запишете в четири последователни байтове в паметта със
стойност 0xAA(10101010) и разпечатайте съдържанието на горните байтове,
ако типът е: float, signed int, unsigned int
*/

#include <stdio.h>

int main() {

    float fVar = 0xAAAAAAAA;
    int iVar = 0xAAAAAAAA;
    unsigned int uVar = 0xAAAAAAAA;

    printf("Float value: %f\n", fVar);
    printf("Integer value: %d\n", iVar);
    printf("Unsigned int value: %u\n", uVar);

    return 0;
}
