/*Задача 13. Ако имаме символен низ char str[] = “HELLO”, заменете
всичките символи с главна буква със съответните символи с малка
буква.*/


#include <stdio.h>
#include <string.h>

char isUpMakeSm(char someLetter); // my own function which make Upper letter to Small, Small will be small again

int main() {

     char str[] = "HELLO";

     printf("%s now is: ", str);
     int i = 0;

     for(i = 0; str[i] != '\0'; i++) {
         printf("%c", isUpMakeSm(str[i]));
     }

     return 0;
}

char isUpMakeSm(char inputLetter) {

    const int alphaBetNum = 26;

    int upLetter = 'A';

    char arrUpperLetters[alphaBetNum];

    char arrSmallLetters[alphaBetNum];

    char currentLetter = 'A';

    int counter = 0;

    int i = 0;

    for(currentLetter = 'A'; currentLetter <= 'Z'; currentLetter++) {
        arrUpperLetters[counter] = currentLetter;
        counter++;
    }

    counter = 0;

     for(currentLetter = 'a'; currentLetter <= 'z'; currentLetter++) {
        arrSmallLetters[counter] = currentLetter;
        counter++;
    }

    counter = 0;

     for(currentLetter = 'A'; currentLetter <= 'Z'; currentLetter++) {
        if(inputLetter == currentLetter) {
            return arrSmallLetters[counter];
            break;
        }
        counter++;
    }

    return inputLetter;
}
