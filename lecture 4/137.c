#include <stdio.h>
int main(){

    int n,m;
    printf("enter. a number");
    scanf("%d  %d",   &n);
   // 1 3 5 7 9

    for ( int i =1; i<=n; i++){ 
        
        for(int j =1; j <= n ; j++)
     
        if( j %2 != 0){
    int n = 1;

        printf("%d",j);   
        
        printf("\n");
        }
        
    }

    return 0;
}