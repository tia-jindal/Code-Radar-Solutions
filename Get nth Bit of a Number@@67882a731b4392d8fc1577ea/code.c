// Your code here...
#include <stdio.h>

int getNthBit(int num, int n) {
    return (num >> n) & 1;
}

int main()
{
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    int bit = getNthBit(a,b); 
    
    printf(bit);
    return 0;
}