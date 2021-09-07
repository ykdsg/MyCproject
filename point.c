//
// Created by ykdsg on 2021/9/7.
//

#include <stdio.h>

void f(int *p);

int main(){
    int i = 6;
    int j = 8;
    printf("&i=%p\n", &i);
    f(&i);



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
}