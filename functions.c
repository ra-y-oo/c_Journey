#include <stdio.h>
#include <stdlib.h>

int main()
{
    sayHi("Rayoo", 19);
    return 0;
}

void sayHi(char name[], int age)
{
    printf("Hello %s, you are %d\n", name, age);
}