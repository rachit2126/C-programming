 #include <stdio.h>

int main() {
    int n, m;
    printf("Enter two numbers: ");
    scanf("%d %d", &n, &m);

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            for (int j = 1; j <= i; j++) {
                printf("%d", j);
            }
        } else {
            for (int j = 1; j <= i; j++) {
                char ch = 'A' + j - 1;
                printf("%c", ch);
            }
        }
        printf("\n");
    }

    return 0;
}

