#include <stdio.h>

int main(void)
{
    char chChar1;
    char chChar2;

    printf("Enter first charcter : ");
    scanf("%c", &chChar1);

    printf("Enter second character : ");
    scanf("%c %c", &chChar2, &chChar2);

    printf("First character : %c\n", chChar1);
    printf("Second character : %c\n", chChar2);

    return 0;
}

