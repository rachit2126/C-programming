  #include <stdio.h>
int main (){

    for ( int i =1 ;i<=5;i++){
   int a=1;int b=1;
       int d=a+64;
     
    
       char ch=(char)d; 
   
          for(int j = 1; j<=5-i; j++){
           
            printf(" ");
          }
          for(int k =1 ;k<=i ;k++){
            
            printf("%c",ch );
            ch++;
          } 
             char eh = ch - 2;
            for(int f =1 ;f<=i-1 ;f++){ 
            printf("%c",eh);
            eh--;
            
          } 
 printf("\n");

}
   
}
//                     A
//                 A   B   A
//          A      B   C   B   A
//     A    B      C   D   C   B    A