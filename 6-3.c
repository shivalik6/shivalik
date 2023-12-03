#include <stdio.h>
void main()
{
    int a[20],i,x,n;
    printf("enter the limit");
    scanf("%d",&n);
    printf("enter array elements") ;
for (i=0;i<n;++i)
scanf("%d",&a[i]);
printf("enter element to search:");
scanf("%d",&x);
for(i=0;i<n;++i)
if (a[i]==x)
break;
if(i<n)
printf("element found at index %d",i+1);
else
printf("element not found");

    
}