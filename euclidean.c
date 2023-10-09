#include<stdio.h>
#include<math.h>
int main()
{
    int x1,x2,y1,y2;
    printf("enter the coordinates of first point:");
    scanf("%d %d",&x1 , &y1);
    printf("enter the coordinates of second point");
    scanf("%d %d",&x2,&y2);
    float distance=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    printf("\ndistance between points is:%f",distance);
    return 0;



}