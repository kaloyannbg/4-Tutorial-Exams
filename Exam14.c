/* Задача 14. Напишете глобална променлива, която увеличаваме с 1 във
функция void test(). Извикайте функцията три пъти test() от main()
принтирайте стойността на глобалната променлива. */

#include <stdio.h>

int g_counter = 0; // global variable counter

void test(void);

int main() {
    printf("g_counter before function test() value: %d\n", g_counter);
    test();
    printf("Counter value: %d\n", g_counter);
    test();
    printf("Counter value: %d\n", g_counter);
    test();
    printf("Counter value: %d\n", g_counter);

}

void test(void) {
    g_counter++;
    //printf("Counter value: %d\n", g_counter++); // global variable counter return + 1;
}
