/* Задача 15. Използвайте статична локална променлива, за да постигнете
същото поведение, описано в задача 14. */

#include <stdio.h>

void test(void);

int main() {

    test();

    test();

    test();

    return 0;
}

void test(void) {

    static int stat = 0;

    printf("Counter: %d\n", stat++);

}
