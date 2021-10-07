#include <stdio.h>
#include "kaloLibrary.h"

int main() {

    char let = 'b';

    if(isUpper(let) == 0) {
        printf("The letter is upper");
    }
    else
    {
        printf("The letter is small");
    }

    return 0;
}
