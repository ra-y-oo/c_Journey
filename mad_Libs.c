#include <stdio.h>
#include <stdlib.h>

int main()
{
    char color[20];
    char pluralNoun[20];
    /*allows user to enter to names*/
    char celebrityF[20];
    char celebrityL[20];

    printf("Enter a color:");
    scanf("%s", color);
    printf("Enter a plural noun:");
    scanf("%s", pluralNoun);
    printf("Enter a celebrity:");
    scanf("%s%S", celebrityF, celebrityL);

    printf("Roses are %s\n", color);
    printf("%s are blue\n", pluralNoun);
    printf("I love %s %s\n", celebrityF, celebrityL);

    return 0;
}