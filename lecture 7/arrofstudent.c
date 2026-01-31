#include <stdio.h>
int main(){
int marks[10]= {97,69,94,15,3,23,45,23,12,45};
 
   for(int i=0;i<10;i++){
    if(marks[i]<35){ 
        printf("%d\n", i);
    }
    
   }
 return 0;
}