
#include <stdio.h>

int main()
{
    int arr[6] = {1, 2, 3, 5, 6, 7};
    int x = 5;
    int count = 0;

    for(int i = 0; i < 6; i++)
    {
        if(arr[i] > x)
        {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}

