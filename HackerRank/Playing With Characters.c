/*
Task

You have to print the character, ch, in the first line. Then print s in next line. In the last line print the sentence, sen.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define MAX_LEN 100

int main() 
{
    char ch, s[MAX_LEN], sen[MAX_LEN];

    scanf("%c", &ch);
    printf("%c\n", ch);
    
    scanf("%s", s);
    printf("%s\n", s);
    
    getchar();
    scanf("%[^\n]%*c", sen);
    printf("%s\n", sen);
     
    return 0;
}
