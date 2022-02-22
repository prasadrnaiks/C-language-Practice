#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{    // coding duniya youtube
    // formula n-min= required value
    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
    int len=2*n-1;
    int min1,min2,min;
    //for rows  
    for(int i=1;i<=len;i++)
    { // for column
        for(int j=1;j<=len;j++)
        {
            //min difference vertical
            min1= i<=len-i? i-1:len-i;
            // min for horizontal 
            min2= j<=len-j? j-1 :len-j;
            min= min1<=min2? min1:min2;
            printf("%d ",n-min);
        }
        printf("\n");
    }
    
   
    return 0;
}
