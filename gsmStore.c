#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define GSM_LENGTH 15

//MY GSM STORE WITH USER INTERFACE

//I WILL MAKE UPDATES FOR MY PROGRAM,

char GsmProducts[][GSM_LENGTH] = { "startFrom1", "Nokia", "Samsung", "Queery" };

double GsmPrices[] = { 0, 89.90, 100.21, 250,7 };

int symbolSquare = 254;

int symbolEqual = 251;

int symbolVertical = 178;

enum menuItems {quit = 0, catalog, newProduct, bill};

void printMenu(void);

int main()
{

    int iChoice = 0;

    int i = 0;

    int GsmProductsLength = sizeof(GsmProducts)/GSM_LENGTH;

    int whiteSpaces = 0;

    int counter = 0;

    do {

    printMenu();

    scanf("%d", &iChoice);

    printf("\n ");

    system("cls");

    if(iChoice == catalog) {
        printf(" - - Read catalog - - \n\n");

        for(i = 1; i < GsmProductsLength; i++) {

          printf(" %c %d. %s", symbolEqual, i, GsmProducts[i]);
          whiteSpaces = GSM_LENGTH - strlen(GsmProducts[i]);
          while(counter < whiteSpaces) {
              printf(" ");
              counter++;
          }
          printf(" $ %.2f\n", GsmPrices[i]);
            counter = 0;
        }

    } else if(iChoice == newProduct) {
        printf(" - -Buy your new product - -");

    } else if(iChoice == bill) {
        printf(" - - Your bill is: ");

    } else if(iChoice == quit) {
        printf(" - - You quit from program.\n");
    }
    else {
        printf("Invalid menu item!");
    }

    } while (iChoice != quit);

    return 0;

}


void printMenu(void) {

    printf("\n");

    printf(" %c Enter 1 %c to look at catalog.   %c\n", symbolSquare, symbolEqual, symbolSquare);

    printf(" %c Enter 2 %c to buy GSM product.   %c\n", symbolSquare, symbolEqual, symbolSquare);

    printf(" %c Enter 3 %c to look at your bill. %c\n", symbolSquare, symbolEqual, symbolSquare);

    printf(" %c Enter 0 %c to quit from program. %c\n\n", symbolSquare, symbolEqual, symbolSquare);

    printf(" %c Enter your number choice %c: ", symbolVertical, symbolEqual);

}
