#include <stdio.h>
#include <math.h>

void func(int a_func)
{
    printf("%d\n", a_func);
}
 
int main()
{
    int i = 0; // line 11 - 20

    for (int i = 0; i < 5; i++) // line 13 - 16
    {
        // something
    }

    printf("%d\n", i); // i from line 11

    return 0;
}