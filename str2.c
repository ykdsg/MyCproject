//
// Created by ykdsg on 2021/9/8.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    int i;
    for (i=0; i<argc;i++){
        printf("%d:%s\n", i, argv[i]);
    }

    char line[] = "hello";
    printf("strlen=%lu\n", strlen(line));

//    这个时候返回的是llo，因为返回的是指针
    char *p = strchr(line, 'l');
    printf("%s\n", p);
    //    找第2个l开始的地方
    p = strchr(p + 1, 'l');
    printf("%s\n", p);

    char *t = malloc(strlen(p) + 1);
    strcpy(t,p);

    printf("%s\n", t);


    free(t);
    return 0;
}