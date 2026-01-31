#include <stdio.h>
int main()
{
    int lenght;
    printf("enter a lenght");
    scanf("%d", &lenght);

    int width;
    printf("enter a width");
    scanf("%d", &width);

    int area = (lenght * width);
    int perimeter = 2 * (lenght + width);

    if (area > perimeter)
    {
        printf("area is greater perimeter");
    }

    else
    {
        printf("perimeter is greater than area");
    }

    return 0;
}