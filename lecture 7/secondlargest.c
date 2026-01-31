#include <stdio.h>
int main()
{
     int max=-1;
     int  max2 = -1;
    int arr[5] = {11, 92, 73, 41, 115};
    for (int i = 0; i <= 4; i++)
    {
      if(arr[i]>max)
      {
        max2=max;
        max=arr[i];

      }
      else if(arr[i]>max2 && arr[i] != max){
        max2=arr[i];
      }

      }
        printf("%d",max2);
     
    }   

   
