/*
Задача 6. Запишете в четири последователни байтове в паметта със
стойност 0xAA(10101010) и разпечатайте съдържанието на горните байтове,
ако типът е: float, signed int, unsigned int
*/

#include <stdio.h>

int main() {

    unsigned char data[] = {0xAA , 0xAA, 0xAA, 0xAA};  // write four consequtive bytes

    float floatValue = *data;  // this is the start adress of the array
    printf("When data is refferenced as float: %f\n", floatValue);

    signed int signedIntValue = *data;  // this is the start adress of the array
    printf("When data is refferenced as int: %d\n", signedIntValue);

    unsigned int unsignedIntValue = *data; // this is the start adress of the array
    printf("When data is refferenced as int: %u\n", unsignedIntValue);

    return 0;
}


/*

when chars, the values are: [ k1(0xAA) | k2(0xAA) | k3(0xAA) | k4(0xAA)  ]
when chars, the addresses are:  k1(1) | k2( a[k1]+ 1) | k3(  a[k2] + 1 ) | ...

char c = *data
int i = *data

when int: [ k1(0xAA | ? | ? | ? ...... ) | k2( 0xAA| ? | ? | ? ...... ) | k3(0xAA | ? | ? | ? ......) | k4(0xAA| ? | ? | ? ......) ]
when int, the addresses are:  k1(1) | k2( a[k1] + sizeof(int) ) | k2( a[k2] + intSize)
int
*/
