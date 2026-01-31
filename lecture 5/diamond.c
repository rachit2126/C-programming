#include <stdio.h>
int main(){
    for(int i = 1 ; i<=5;i++)
    {
        for ( int j = 1;j<=5-i;j++){
            printf(" ");
        }
        
        for( int k = 1 ; k <=i;k++){
            printf("*");
        }
        
         for( int k = 2 ; k <=i;k++){
            printf("*");
        }
       
        
        
        printf("\n");

    }  
    for(int p = 1 ; p<=5 ; p++){

         
       for( int l = 1 ; l <= p; l++ ){
        printf(" ");
       }
      

   
        for( int t = 4 ; t >p;t--){
            printf("*");
        }
        
        for( int t = 6 ; t >p;t--){
            printf("*");
        }
        
             printf("\n");



    }
}