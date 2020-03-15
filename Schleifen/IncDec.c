/* 
	ju 8-Mrz-20 IncDec.c
    Increment: i = i + 1     <=> i += 1       <=>    i++
    Decrement: i = i - 1     <=> i -= 1       <=>    i--
*/
#include <stdio.h>
int main()
{
    int a = 1;

    printf("Finished round %d\n", a);
    a++;

    printf("Finished round %d\n", a);
    a++;

    printf("Finished round %d\n", a);
    a++;

    return 0;
}