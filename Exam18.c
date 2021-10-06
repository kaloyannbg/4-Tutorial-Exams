/* Задача 18 Довършете задачата за кемперите от миналия път като добавите
променлива, в която да се събират парите, които клиентът дължи на компанията.
Принтирайте резултата. Питайте клиента дали иска още налични продукти. */

/*
Вчерашната задача
10. Представете си, че имате фирма за отдаване на каравани и кемпери под
наем, за която трябва да разработите софтуер. Вие сте малка фирма и имате
общо 3 каравани на цена 90 лв. на ден и 3 кемпера на цена 100 лв. на ден.
Декларирайте променливи за броя на караваните, цената на караваните, броя на
кемперите и цената им. Направете меню, което пита клиента каравана или
кемпер ще иска. Направете променлива, в която да се събират парите, които
клиента дължи на компанията. Принтирайте резултата
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void printMenu(float caravanPrice, float cemperPrice, float carPrice);

int main()
{

    int caravansAvaiable = 3, cempersAvaiable = 3, carsAvaiable = 6;

    float caravanPrice = 90.0, cemperPrice = 100.0, carPrice = 60.0;

    int choice = 0;

    int vehicleNum = 0;

    int days = 0;

    float amount = 0.0;

    float totalAmount = 0.0;

    char cContinue[20];

    cContinue[0] = 'y';

    do
    {

        system("cls");

        if (caravansAvaiable != 3 || cempersAvaiable != 3 || carsAvaiable != 6)
        {
            printf(" -- Avaiable vehicles: caravans: %d, cempers: %d, cars: %d -- \n \n", caravansAvaiable, cempersAvaiable, carsAvaiable);
        }

        printMenu(caravanPrice, cemperPrice, carPrice);

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("How many caravans you want: ");
            scanf("%d", &vehicleNum);
            vehicleNum = abs(vehicleNum);
            if (vehicleNum > caravansAvaiable)
            {
                printf("Sorry, we have %d caravans avaiable\n", caravansAvaiable);
            }
            else
            {
                printf("Ookay... For how many days you want it: ");
                scanf("%d", &days);
                days = abs(days);
                amount = caravanPrice * vehicleNum * days;
                caravansAvaiable = caravansAvaiable - vehicleNum;
                totalAmount = totalAmount + amount;
                printf("Mmkay.. You get %d caravans for %d days for: %.2fBGN, total amount in this moment: %.2fBGN\n", vehicleNum, days, amount, totalAmount);
            }
            break;
        case 2:
            printf("How many cempers you want: ");
            scanf("%d", &vehicleNum);
            vehicleNum = abs(vehicleNum);
            if (vehicleNum > cempersAvaiable)
            {
                printf("Sorry, we have %d cempers avaiable\n", cempersAvaiable);
            }
            else
            {
                printf("Ookay... For how many days you want it: ");
                scanf("%d", &days);
                days = abs(days);
                amount = cemperPrice * vehicleNum * days;
                cempersAvaiable = cempersAvaiable - vehicleNum;
                totalAmount = totalAmount + amount;
                printf("Mmkay.. You get %d cempers for %d days for: %.2fBGN, total amount in this moment: %.2fBGN\n", vehicleNum, days, amount, totalAmount);
            }
            break;

        case 3:
            printf("How many cars you want: ");
            scanf("%d", &vehicleNum);
            vehicleNum = abs(vehicleNum);
            if (vehicleNum > carsAvaiable)
            {
                printf("Sorry, we have %d cars avaiable\n", carsAvaiable);
            }
            else
            {
                printf("Ookay... For how many days you want it: ");
                scanf("%d", &days);
                days = abs(days);
                amount = carPrice * vehicleNum * days;
                carsAvaiable = carsAvaiable - vehicleNum;
                totalAmount = totalAmount + amount;
                printf("Mmkay.. You get %d cars for %d days for: %.2fBGN, total amount in this moment: %.2fBGN\n", vehicleNum, days, amount, totalAmount);
            }
            break;

        case 0:
            printf("Bye Bye! ");
            break;
        default:
            printf("Please, enter valid choice!");
            break;
        }

        if (caravansAvaiable == 0 && cempersAvaiable == 0 && carsAvaiable == 0)
        {
            printf(" !! Sorry very much, but all our vehicles is out !! \n");
            break;
        }

        if (choice != 0)
        {
            printf("\n -- Do you want to continue with your transaction?[y/n]: ");
            scanf("%s", &cContinue);
        }

    } while (choice != 0 && (cContinue[0] == 'y' || cContinue[0] == 'Y') );

    printf(" -- !! Your total amount is: %.2fBGN !! -- ", totalAmount);

    return 0;
}

void printMenu(float caravanPrice, float cemperPrice, float carPrice) {

    printf(" -- Rent a Vehicles -- \n");
    printf(" -- Enter 1 for rent a caravan -- Price Per Caravan is: %.2f\n", caravanPrice);
    printf(" -- Enter 2 for rent a cemper -- Price Per Cemper is: %.2f\n", cemperPrice);
    printf(" -- Enter 3 for rent a car -- Price Per Car is: %.2f\n", carPrice);
    printf(" -- Enter 0 for quit -- \n");
    printf(" -- Enter your choice:  \n");

}
