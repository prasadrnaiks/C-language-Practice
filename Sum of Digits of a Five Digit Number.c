#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n,i,sum=0,a;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    
        a=n%10;
        b=n%100;
        c=n%1000;
        d=n%10000;
        e=n%100000;
    sum = a+b+c+d+e;
    print("%d",sum);
    return 0;
}