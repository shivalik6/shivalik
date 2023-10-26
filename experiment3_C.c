#include <stdio.h>

int main() {
    int choice;
    float radius,side,length,breadth,area,perimeter;
    printf("1.circle\n2.square\n3.rectrangle\n");
    printf("enter your choice:-");
    scanf("%d", &choice);

    if (choice == 1) {
    
        printf("Enter the radius of the circle: ");
        scanf("%f", &radius);
        float area = 3.1415 * radius * radius;
        float perimeter = 2 * 3.1415 * radius;
        printf("Area of the circle: %.2f\n", area);
        printf("Perimeter of the circle: %.2f\n", perimeter);
    } else if (choice == 2) {
       
        printf("Enter the side of the square: ");
        scanf("%f", &side);
        float area = side * side;
        float perimeter = 4 * side;
        printf("Area of the square: %.2f\n", area);
        printf("Perimeter of the square: %.2f\n", perimeter);
    } else if (choice == 3) {
       
        printf("Enter the length of the rectangle: ");
        scanf("%f", &length);
        printf("Enter the width of the rectangle: ");
        scanf("%f", &breadth);
        float area = length * breadth;
        float perimeter = 2 * (length + breadth);
        printf("Area of the rectangle: %.2f\n", area);
        printf("Perimeter of the rectangle: %.2f\n", perimeter);
    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}
