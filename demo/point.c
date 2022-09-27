//
// Created by ykdsg on 2021/9/7.
//

#include <stdio.h>

void f(int *p);

void g(int i);

int main(){


    int i = 6;
    int j = 8;
//    可以看到i跟j的地址相差4个字节，说明在内存中他们是紧挨着放的
    printf("&i=%p\n", &i);
    printf("&j=%p\n", &j);
    f(&i);
    g(i);



//    指针是const，表示不能再指向其他变量
    int *const q = &i;
    *q = 26;
    //q++; //ERROR

//    表示所指是const，不能通过指针去修改变量
    const int *p = &i;
    //*p = 26; ERROR
    i = 26;
    p = &j;


    return 0;
}


void f(int *p){
    printf("*p=%d\n", *p); //打印的是i的内容，6
    printf("p=%p\n", p);//打印的是i的地址
    *p = 26;
}


void g(int k) {
    printf("k=%d\n", k);
}