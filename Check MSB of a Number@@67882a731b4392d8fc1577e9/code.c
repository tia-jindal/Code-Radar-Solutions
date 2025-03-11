// Your code here...
#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    
    if((num >> (bits - 1)) & 1)
    {
        printf("Set");
    }
    else
    {
        printf("Not Set");
    }
    return 0;
}