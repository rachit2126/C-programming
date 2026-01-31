#include <stdio.h>
int main()
{
    for (int i = 0; i <= 5; i++)
    {
        int a = 4;
        for (int j = 0; j < 5 - i; j++)
        {
            printf("%d", j);
        }

        for (int t = 1; t <= i; t++)
        {
            printf(" ");
        }
        for (int t = 1; t <= i; t++)
        {
            printf(" ");
        }
        for (int j = 4-i; j >= 0; j--)
        {
            printf("%d", j);
            a--;
        }
        printf("\n");
    }
}