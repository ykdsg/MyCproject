//
// Created by ykdsg on 2021/9/14.
//

#include <stdio.h>
#include <stdlib.h>
#include "node.h"
typedef struct _list{
    Node *head;
    Node *tail;
} List;


void add(List * pList, int number);
void printList(List *pList);
void  find(List *pList,int number);
void del(List *pList,int number);

int main(){
    List list;
    list.head = NULL;
    list.tail = NULL;
    int number;
    do {
        scanf("%d", &number);
        if (number != -1) {
            add(&list, number);
        }
    } while (number != -1);

    printList(&list);
    printf("find :");
    scanf("%d", &number);
    find(&list, number);
    printf("del :");
    scanf("%d", &number);
    del(&list, number);
    printList(&list);

    return 0;
}

void del(List *pList,int number){
    Node *p;
//    previous node
    Node *preNode=pList->head;
    for (p = pList->head; p; p = p->next) {
        if (p->value == number) {
            preNode->next = p->next;
            if (p == pList->head) {
                pList->head = p->next;
            }else if (p->next == NULL) {
                pList->tail = preNode;
            }
            free(p);
            break;
        }
        preNode = p;
    }
}


void  find(List *pList,int number) {
    Node *p;
    int isFound = 0;
    for (p = pList->head; p; p = p->next) {
        if (p->value == number) {
            printf("is found\n");
            isFound = 1;
            break;
        }
    }
    if (!isFound) {
        printf("not found\n");
    }
}

void printList(List *pList){
    Node *p;
    for (p = pList->head; p; p = p->next) {
        printf("%d\t", p->value);
    }
    printf("\n");

}

void add(List * pList, int number){
    // add to linked-list
    Node *p = (Node *) malloc(sizeof(Node));
    p->value = number;
    p->next = NULL;
    //            find the last

//it's better than next
    Node *last = pList->tail;
    if (last) {
        last->next = p;
        pList->tail = p;
    } else{
        pList->head = p;
        pList->tail = p;
    }
//    Node *last = pList->head;
//    if (last) {
//        while (last->next) {
//            last = last->next;
//        }
//        last->next = p;
//    } else {
//        pList->head = p;
//    }
}