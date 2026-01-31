  #include <stdio.h>

int main() {
    for (int i = 5; i >= 1; i--) {

 
        for (int s = 5; s > i; s--) {
            printf(" ");
        }

       
        for (int k = i; k >= 1; k--) {
            printf("%d", k);
        }

        printf("\n");
    }
    return 0;
}

// 54321
//  4321
//   321
//    21
//     1
