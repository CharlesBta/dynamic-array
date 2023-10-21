#include <stdlib.h>
#include <stdio.h>

void incremente(int value){
    value ++;
}

void newincrement(int *value){
    (*value)++;
}

int main(void){
    int a = 0;
    printf("%d\n",a);
    incremente(a);
    printf("%d\n",a);
    newincrement(&a);
    printf("%d",a);
    return 0;
}