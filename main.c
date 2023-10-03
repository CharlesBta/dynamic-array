#include <stdio.h>

struct list{
    int value;
    int pointer;
};

int main() {
    struct list list1;
    struct list list2;
    list2.pointer = 0;
    list1.value = 0;
    list2.value = 1;
    struct list * pList = &list2;
    list1.pointer = (int) pList;
    printf("liste 2 %d\n",list2);
    printf("pointeur vers list2 : %d",list1.pointer);
    return 0;
}