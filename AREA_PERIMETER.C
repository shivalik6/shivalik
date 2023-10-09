#include<stdio.h>
int main ()
{
    float length,breadth,radius,side;
    //AREA AND PERIMETER OF CIRCLE 
    printf("enter the radius of circle:");
    scanf("%f",&radius);
    printf("area of circle is :%f\n",3.14*radius*radius);
    printf("perimeter of circle is:%f\n",2*3.14*radius);
    //AREA AND PERIMETER OF SQUARE 
    printf("enter the side of square:");
    scanf("%f",&side);
    printf("the area of square is:%f\n",side*side);
    printf("the perimeter of square is :%f\n",4*side);
    //AREA AND PERIMETER OF RECTANGLE
    printf("enter the length of rectangle:");
    scanf("%f",&length);
    printf("enter the breadth of rectangle:");
    scanf("%f",&breadth);
    printf("the area of rectangle is :%f\n",length*breadth);
    printf("perimeter of rectangle is:%f\n",2*(length+breadth));
    return 0;





}