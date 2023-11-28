#include <stdio.h>
void main()
{
    int i,f=0,s=1,n;
    printf("enter the value of n:");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("%d\n",f);
        int next =f+s;
        f=s;
        s=next;
    }
}