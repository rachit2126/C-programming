#include <stdio.h>
int main(){

    int n,m;
    printf("enter. a number");
    scanf("%d  %d", &m , &n);

    for ( int i =1; i<=m ; i++){ // outer loops - no. of lines
        for(int i =1; i <=n; i++) // inner loops - no. of star in each line
        printf("%d",i);  // number ise
        // printf("*") star ise hojayega
        printf("\n");
    }

    return 0;
}