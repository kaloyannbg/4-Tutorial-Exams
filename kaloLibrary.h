#include <stdio.h>

int isUpper(char letter) {

    char currentLetter= 'A';
    char lastLetter = 'Z';
    for(currentLetter = 'A'; currentLetter <= lastLetter; currentLetter++  ) {
        if(currentLetter == letter) {
            return 0;
        }
    }

    return 1;
}
