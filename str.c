//
// Created by ykdsg on 2021/9/8.
//


#include <stdio.h>

int main(){

    int i = 0;
    char *s = "hello";

    char *s2 = "hello";
    char s3[] = "hello";


    printf("&i=%p\n", &i);
    printf("s=%p\n", s);
    printf("s2=%p\n", s2);
//s==s2，字符串在代码段，内存地址比较小的地方

    printf("s3=%p\n", s3);
//s3 在本地变量空间

    //    下面这句会报错，因为代码段的内容是只读的。
    //s[0]='B';

    //s3就可以进行修改，因为在本地变量空间
    s3[0] = 'B';
    printf("s3=%s\n", s3);
    return 0;
}