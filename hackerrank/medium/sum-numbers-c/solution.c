#include <stdio.h>

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a, b;
    float c, d;

    // Read two integers
    scanf("%d %d", &a, &b);

    // Read two floating point numbers
    scanf("%f %f", &c, &d);

    // Print integer sum and difference
    printf("%d %d\n", a + b, a - b);

    // Print float sum and difference formatted to 1 decimal place
    printf("%.1f %.1f\n", c + d, c - d);

    return 0;
}
