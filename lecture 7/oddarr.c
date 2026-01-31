 #include <stdio.h>
int main()
{
   int even =0,odd=0;
    int arr[6] = {1, 2, 3, 5, 6, 7};
    // sum of even = 10
    // sum of odd = 14
    for (int i = 0; i <= 5; i++)
    {
        if ( i% 2 == 0)
        {    arr[i]+=even;
            even= arr[i];
          
        }
        else{ arr[i]+=odd;
            odd=arr[i];
            
        }
        
        
    }    printf("%d\n", even-odd);
}
