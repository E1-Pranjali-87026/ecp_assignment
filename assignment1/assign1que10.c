#include <stdio.h>
#include <math.h>

int main() {
    
    double a, b, c;
    double s, area, perimeter;

    
    printf("Enter the length of side a: ");
    scanf("%lf", &a);
    printf("Enter the length of side b: ");
    scanf("%lf", &b);
    printf("Enter the length of side c: ");
    scanf("%lf", &c);

    perimeter = a + b + c;

 
    s = perimeter / 2;

    area = sqrt(s * (s - a) * (s - b) * (s - c));

    // Output the results
    printf("Perimeter of the triangle: %.2lf\n", perimeter);
    printf("Area of the triangle: %.2lf\n", area);

    return 0;
}

