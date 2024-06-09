#include <stdio.h>

void function() {
    auto int autoVar = 10;
    static int staticVar = 20;

    printf("autoVar inside function(): %d\n", autoVar);
    printf("staticVar inside function(): %d\n", staticVar);

    autoVar++;
    staticVar++;
}

int main() {
    auto int autoVar = 5;
    register int regVar = 15;
    extern int externVar;

    printf("autoVar in main(): %d\n", autoVar);
    printf("regVar in main(): %d\n", regVar);
    printf("externVar in main(): %d\n", externVar);

    function();

    printf("autoVar after function call: %d\n", autoVar);
    printf("regVar after function call: %d\n", regVar);
    printf("externVar after function call: %d\n", externVar);

    return 0;
}

int externVar = 25;
