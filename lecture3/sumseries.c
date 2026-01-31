 #include <stdio.h>

int main() {
    int n;
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    int sum = 0; // to store final sum

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0)
            sum -= i;  // subtract even terms
        else
            sum += i;  // add odd terms
    }

    printf("The sum of the series is %d\n", sum);

    return 0;
}

