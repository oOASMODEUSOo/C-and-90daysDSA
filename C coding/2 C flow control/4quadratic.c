//C Program to Find the Roots of a Quadratic Equation

#include <stdio.h>
#include <math.h>

int main(){
    float a,b,c;
    printf("Enter the coefficient of x^2: ");
    scanf("%f", &a);
    printf("Enter the coefficient of x: ");
    scanf("%f", &b);
    printf("Enter the coefficient of 1: ");
    scanf("%f", &c);

    float discriminant = b * b - 4 * a * c;

    if (discriminant > 0){
        float root1 = (-b + sqrt(discriminant))/2*a;
        float root2 = (-b - sqrt(discriminant))/2*a;
        printf("Since discriminant is greater than 0 so the equation have 2 real distinct roots %0.1f and %0.1f", root1, root2);
    }

    else if (discriminant == 0){
        float rootsingle = -b/(2*a);
        printf("Since discriminant is equal to 0 so the equation have 1 real root %0.1f", rootsingle);
    }

    else if (discriminant < 0){
        printf("Roots are imaginary\n");
        float realPart = -b / (2 * a);
        float imagPart = sqrt(-discriminant) / (2 * a);
        printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);
    }

    return 0;
}