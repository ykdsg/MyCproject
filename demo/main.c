#include <stdio.h>


void cheer(int i ) {
    printf("cheer %d\n", i);
}


int main() {
    printf("Hello, World!\n");
    char c = 255;
//    表示不以补码的形式表示
    unsigned char c2=255;
    int i = 255;
    printf("c=%d,i=%d,c2=%d\n", c, i,c2);


    cheer(2.4);

    int x = 0;
    int y;
    printf("size of int:%lu\n", sizeof(int));
    printf("size of int&:%lu\n", sizeof(&x));
//    %p表示输出以内存中实际存储一个变量格式
    printf("%p\n", &x);
    printf("%p\n", &y);

    int ai[10];
//    数组的地址
    printf("ai-- %p\n", ai);
    printf("ai-- %p\n", &ai);
    printf("ai-- %p\n", &ai[0]);
    printf("ai-- %p\n", &ai[1]);

    // char的位数比int 小，会直接丢弃掉多的部分
    int testi = 32769;
    char testc = i;
    printf("test char %d\n",testc);
    return 0;
}
