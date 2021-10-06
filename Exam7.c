/*
Задача 7. Запишете в осем последователни байта в паметта със
стойност 0xBB(1011 1011) и разпечатайте съдържанието на
горните байтове, ако типът е: double, signed long long, unsigned
long long
*/

#include <stdio.h>

int main() {

    double dVar = 0xBBBBBBBBBBBBBBBB;
    long long int llVar = 0xBBBBBBBBBBBBBBBB;
    unsigned long long int ullVar = 0xBBBBBBBBBBBBBBBB;

    printf("Double value: %lf\n", dVar);
    printf("Long Long Int value: %lld\n", llVar);
    printf("Unsigned Long Long Int value: %llu\n", ullVar);

    return 0;
}
