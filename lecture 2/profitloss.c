#include <stdio.h>
int main (){

    int cp;
    int sp;
    int profit;
    printf("Enter the cost price:");
    scanf("%d",&cp);
    printf("Enter the selling price:");
    scanf("%d",&sp);     
    if(sp>cp){
        profit= sp - cp;
        printf("The profit is %d",profit);
    }
    else if(cp>sp){
        profit= cp - sp;
        printf("The loss is %d",profit);
    }
    else{
        printf("No profit no loss");
    }           

      
 
    return 0;
}