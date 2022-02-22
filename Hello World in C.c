#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	
    char s[100];
    scanf("%[^\n]%*c", &s);
  	/*%[^\n]%*c
means that all the characters entered as the input, including the spaces, until we hit the enter button are stored in the variable, name; provided we allocate sufficient memory for the variable*/
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    printf("Hello, World!\n");
    printf("%s",s);
    return 0;
}
