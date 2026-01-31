#include <stdio.h>
int main()
{// n =1234 ,  r = 4321  , n + r
    int n;
    printf("enter a number");
    scanf("%d", &n);
    int r = 0;
    int b;
    b =  n;

    int ld ; 
    
     while( n !=0){ 
         ld = n%10;
      r = (r  + ld) * 10;
 
        n = n/10;
     }
     r = r/10;
    int sum = b+ r;  
    printf("%d",sum);




    return 0;
}