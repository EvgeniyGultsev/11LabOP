#include <stdio.h>
#include "Triangle.h"
int main() {
    struct triangle a;
    scanf("%f %f %f %f %f %f",&a.p1.x,&a.p1.y,&a.p2.x,&a.p2.y,&a.p3.x,&a.p3.y);
    length(&a);
    printf("%f\n", perimetr(a));
    printf("%f",area(a));
    return 0;
}
