// Your code here...
#include <stdio.h>

int main()
{
    char ch;
    scanf("%c",&ch);
    
    if((int)(ch)>=65 && (int)(ch)<=97)
    {
        printf("Uppercase");
    }
    else
    {
        printf("Lowercase");
    }
    return 0;
}