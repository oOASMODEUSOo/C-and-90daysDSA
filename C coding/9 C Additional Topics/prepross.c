#include <stdio.h>
#define PI 3.1415
#define circleArea(r) (PI*r*r)

int main() {
    float radius, area;

    printf("Enter the radius: ");
    scanf("%f", &radius);
    area = circleArea(radius);
    printf("Area = %.2f", area);

    return 0;
}




// these are some predefined macros
// Macro	Value
// __DATE__	A string containing the current date
// __FILE__	A string containing the file name
// __LINE__	An integer representing the current line number
// __STDC__	If follows ANSI standard C, then the value is a nonzero integer
// __TIME__	A string containing the current date.