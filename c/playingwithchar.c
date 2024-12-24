#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    
    char ch;
    char s[40];
    char t[50];
    
    scanf("%c",&ch);
    scanf("%s",s);
    getchar();
    scanf("%[^\n]%*c",t);
    
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", t);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
