#include <stdio.h>
#include <stdlib.h>
/*Prototype*/
double cube(double num);

int main()
{
    printf("Answer: %f\n", cube(3.0));
    return 0;
}

double cube(double num)
{
    return num * num * num;
}