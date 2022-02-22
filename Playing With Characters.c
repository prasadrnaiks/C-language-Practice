#include <stdio.h>
#include <string.h>

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   char ch,s[10],sen[30];
    scanf("%c", &ch); 

    scanf("%s\n", s); //compiler was thinking enter as new line so /n is here

    scanf("%[^\n]s", sen);

    printf("%c\n", ch);

    printf("%s\n", s);

    printf("%s", sen);

    return 0;
}
