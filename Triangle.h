#ifndef MAIN_C_TRIANGLE_H
#define MAIN_C_TRIANGLE_H
struct point{
    float x,y;
};
struct triangle{
    struct point p1,p2,p3;
    float a,b,c;
};
float area(struct triangle);
float perimetr(struct triangle);
void length(struct triangle*);
#endif