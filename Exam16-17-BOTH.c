/* Задача 16. Да се дефинира константата Пи (3.14159...) и да се напише
функция, която изчислява лицето на окръжност по даден радиус (Пи * R * R).
В main() да се извика горната функция с радиуси 1, 1.5, 13 */

/*

Задача 17.* Към задача 16 да се добави втора функция, която изчислява
лицето на елипса по зададени два параметъра ( Пи * A * B)

*/

#include <stdio.h>

const double PI = 3.14159;
double circleArea(double radius);
double ellipseArea(double radiusA, double radiusB);

int main() {

    double radiusOne = 1.0;
    double radiusTwo = 1.5;
    double radiusThree = 13.0;


    printf("Circle Area with radius: %.2f is: %f\n", radiusOne, circleArea(radiusOne) );
    printf("Circle Area with radius: %.2f is: %f\n", radiusTwo, circleArea(radiusTwo) );
    printf("Circle Area with radius: %.2f is: %f\n", radiusThree, circleArea(radiusThree) );


    printf("Ellipse Area with radiusA: %.2f and radiusB: %.2f is: %f\n", radiusOne, radiusTwo, ellipseArea(radiusOne, radiusTwo) );

    return 0;
}

double circleArea(double radius) {

    double area = PI * radius * radius;

    return area;

}

double ellipseArea(double radiusA, double radiusB) {

    double area = PI * radiusA * radiusB;

    return area;

}
