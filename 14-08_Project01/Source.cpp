#include <stdio.h>
#define PI 3.1415926535897932384626433832795
int main() {
    int r;
    double area;
    scanf_s("R = %d", &r);
    area = PI * r * r;
    printf("%.6lf\n", area);
    return 0;
}