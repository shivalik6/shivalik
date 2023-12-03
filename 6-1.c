#include<stdio.h>
void main()
{
    int a[100],max,size,c,location=1;
    printf("enter no of elements in array:");
    scanf("%d",&size);
    for (c=0;c<size;c++)
    scanf("%d",&a[c]);
    max=a[0];for(c=1;c<size;c++)
    {
        if(a[c]>max)
        {
            max=a[c];
            location=c+1;
        }
    }
    printf("max element is present at %d and value is %d",location,max);
}