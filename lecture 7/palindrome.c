  #include <stdio.h>


int check(int arr[]){
for(int i =0 ; i <=7 ; i++){
    for(int j = 7-i;j>=0 ; j--){
          if(arr[i] == arr[j]){
             return 1;
             
    }  
  break;
    }
}
   
   return 0;
}



int main()
{
 
    int arr[8] = {1, 2, 3, 4, 5, 6,7,8};
    

    int ans = check( arr);
    printf("%d",ans);
   }
