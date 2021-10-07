/*
Задача 7. Запишете в осем последователни байта в паметта със
стойност 0xBB(1011 1011) и разпечатайте съдържанието на
горните байтове, ако типът е: double, signed long long, unsigned
long long
*/

#include <stdio.h>

int main() {

    unsigned char arr[] = {0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB};

    double dVar = *arr; // this is the start adress of the array
    long long int llVar = *arr; // this is the start adress of the array
    unsigned long long int ullVar = *arr; // this is the start adress of the array

    printf("Double value: %lf\n", dVar);
    printf("Long Long Int value: %lld\n", llVar);
    printf("Unsigned Long Long Int value: %llu\n", ullVar);

    return 0;
}
