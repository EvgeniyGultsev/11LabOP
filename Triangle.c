#include "Triangle.h"
#include <math.h>
float area(struct triangle triang){
    float p,answer;
    p=(triang.a+triang.b+triang.c)/2;
    answer=sqrt(p*(p-triang.a)*(p-triang.b)*(p-triang.c));
    return answer;
}
float perimetr(struct triangle triang){
    return triang.a+triang.b+triang.c;
}
void length(struct triangle *triangle){
    triangle->a=sqrt(pow(triangle->p1.x-triangle->p2.x,2) + pow(triangle->p1.y-triangle->p2.y,2));
    triangle->b=sqrt(pow(triangle->p2.x-triangle->p3.x,2)+pow(triangle->p2.y-triangle->p3.y,2));
    triangle->c=sqrt(pow(triangle->p1.x-triangle->p3.x,2)+pow(triangle->p1.y-triangle->p3.y,2));
}