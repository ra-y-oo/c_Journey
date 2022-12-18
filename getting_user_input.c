#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    double gpa;
    printf("Enter your gpa: \n");
    scanf("%lf", &gpa);
    printf("Your gpa is %f.\n", gpa);
    */

    /*
     char grade;
     printf("Enter your grade: \n");
     scanf("%c", &grade);
     printf("Your grade is %c.\n", grade);
     */
    /*Getting user input inform of a string*/

    char name[20];
    printf("Enter your name: \n");
    fgets(name, 20, stdin);
    printf("Your name is %s \n", name);




    return 0;
}