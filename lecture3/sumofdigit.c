#include <stdio.h>
int main (){
      int n;
      printf("enter a number");
      scanf("%d",&n);
      int lastdigit = 0 ;  
      int sum = 0; 


     
     while (n !=0){
         lastdigit = n % 10;
        sum = sum + lastdigit;
        n=n/10;
         
     }
      
      printf ("the sum of digit = %d",sum);
    return 0;
}

// #include <stdio.h>
// int main() {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);

//     int lastdigit = 0;  
//     int sum = 0; 

//     while (n != 0) {
//         lastdigit = n % 10;       // get last digit
//         if (lastdigit % 2 == 0)   // check even
//             sum = sum + lastdigit; // add only even digits
//         n = n / 10;               // remove last digit
//     }

//     printf("The sum of even digits = %d\n", sum);
//     return 0;
// }
 