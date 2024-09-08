// Max Coltrin ma807298
// COP 3223
// 9/6/23

#include <stdio.h>
#include <math.h>
#define PI 3.14159

double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();

int main (int argc, char **argv){
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return  0;
}   

// Distance First d=sqrt((x2-x1)^2 +(y2-y1)^2)
double calculateDistance(){
    double x1,y1,x2,y2;
    printf("Enter first point's coordinates (x1,y1):");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter second point's coordinates (x2,y2):");
    scanf("%lf %lf", &x2, &y2);
    
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    
    printf("Point 1 entered x1 = %.2lf; y1 = %.2lf\n", x1, y1);
    printf("Point 2 entered x2 = %.2lf; y2 = %.2lf\n", x2, y2);
    printf("Distance between the points is %.2lf\n", distance);

    return distance;
}
// Next is Perimeter, using distance from the last problem as the diameter for the circumference of a circle.
double calculatePerimeter() {
    double distance = calculateDistance();
    double perimeter = PI * distance;
    printf("The perimeter of the city encompassed by your request is %.2lf\n", perimeter);
    return 2.5; // Difficulty
}
// Onto Area next, A=pi*r^2.
double calculateArea(){
    double distance = calculateDistance();
    double radius = distance / 2;
    double area = PI * pow(radius, 2);
    printf("The area of the city encompassed by your request is %.2lf\n", area);
    return 3.5;
}

// Pentultimately, width, which of a circle is just the diameter.
double calculateWidth(){
    double width = calculateDistance();
    printf("The width of the city encompassed by your request is %.2lf\n", width);
    return 1;
}

// Last but not least is height which is the same scenario as width.
double calculateHeight(){
    double height = calculateDistance();
    printf("The height of the city encompassed by your request is %.2lf\n", height);
    return 1;
}