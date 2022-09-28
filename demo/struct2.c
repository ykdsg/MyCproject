#include <printf.h>

//
// Created by ykdsg on 2022/9/28.
//
struct point {
    int x;
    int y;
};

int numberStruct(struct point p){
    p.y = 0;
    printf("func struct p's address= \t0x%12lX\n", (size_t) &p);
    return p.x;
}

int numberPoint(struct point *p){
    p->y = 0;
    printf("func point p's address= \t0x%12lX\n", (size_t) p);
    return p->x;
}

int main(){
    struct point p = {1, 2};
    printf("main p address= \t0x%12lX\n",(size_t)&p);
    numberStruct(p);
    printf("after numberStruct p.y = %d \n", p.y);
    numberPoint(&p);
    printf("after numberPoint p.y = %d \n", p.y);




}