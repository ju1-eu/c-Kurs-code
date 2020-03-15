/* 
	ju 8-Mrz-20 For.c
    for (STARTAUSDRUCK; BEDINGUNG; RECHENAUSDRUCK;)
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    for (int i = 0; i < 10; i++)
    {
        printf("Hello my name is Jan! %d\n", i);
    }

    printf("\n\n");

    for (int i = 0; i < 10; i += 2)
    {
        printf("Hello my name is Jan! %d\n", i);
    }

    printf("\n\n");

    for (int i = 9; i >= 0; i--)
    {
        printf("Hello my name is Jan! %d\n", i);
    }

    return 0;
}