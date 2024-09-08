// Max Coltrin ma807298
// COP 3223
// 9/6/23

#include <stdio.h>
#include <math.h>

double calculateDistance() {
    double x1, y1, x2, y2;
    printf("Enter coordinates of point #1 (x1, y1): ");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter coordinates of point #2 (x2, y2): ");
    scanf("%lf %lf", &x2, &y2);

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Output the required text
    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", x1, y1);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", x2, y2);
    printf("The distance between the two points is %.2lf\n", distance);

    return distance;
}
