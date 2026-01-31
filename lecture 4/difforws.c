#include <stdio.h>
int main(){

    int n,m;
    printf("enter. a number");
    scanf("%d  %d", &m , &n);
    int a = n;

    for ( int i =1; i<=n; i++){
        for(int j =1; j <= i; j++)
        printf("%d",j);   
        
        printf("\n");
    }

    return 0;
}