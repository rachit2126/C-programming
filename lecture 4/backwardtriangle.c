 #include <stdio.h>

int main() {
    int n, m;
    printf("Enter two numbers: ");
    scanf("%d %d", &m, &n);

    int i, j, k;

    for (i = 1; i <= n; i++) {
        // Print spaces
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print stars
        for (k = 1; k <= i; k++) {
            printf("*");
        }
        printf("\n"); // move to next line
    }

    return 0;
}
