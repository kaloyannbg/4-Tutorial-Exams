/*
Задача 11. Ако имаме символен низ от символа char str[] = “Hello”;
копирайте всеки един от неговите символи в низ, който да изглежда
огледален на него. Ето така char rts[] = “ollеH”; и принтирайте
резултата.
*/

#include <stdio.h>
#include <string.h>

int main() {

    char str[] = "Hello Code Academy Staff, Greetings all.";

    const int strLength = strlen(str); // 5

    char rts[strLength]; // rts[5]

    int i = 0;

    int j = 0;

    for(i = strLength-1; i >= 0; i--) {
        rts[j] = str[i]; // rts[0] = str[4] , rts[1] = str[3], rts[2] = str[2], rts[3] = str[1], rts[4] = str[0]
        j++;
    }

    rts[strLength] = '\0';

    printf("str[] is: \"%s\"\nrts[] is: \"%s\" ", str, rts);

    return 0;

}
