#include<stdio.h>
int main()
{
    long int n;
    scanf("%ld",&n);
    if((n%2)==0 && n>=0)//gfxjgh
    printf("Even");
    else if(n<0)
    printf("invalid");
    else
    printf("Odd");
    return 0;
}
