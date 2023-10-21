#include <stdio.h>
#include <stdlib.h>

typedef struct StructureX{
    int value;
    struct StructureX* next;
}StructureX;


void ajouter(StructureX** list, int value){
    StructureX* item = malloc(sizeof(StructureX));
    item->value = value;
    item->next = *list;
    *list = item;
}

void afficher(StructureX *list){
    if(list == NULL)return;
    if(list->next == NULL) {
        printf("%d\n",list->value);
        return;
    }
    afficher(list->next);
    printf("%d\n",list->value);
}

void liberer(StructureX *list){
    if(list == NULL)return;
    if(list->next == NULL) {
        free(list);
        return;
    }
    liberer(list->next);
    free(list);
}

void pop_back(StructureX **list){
    if(*list == NULL)return;
    StructureX *item = *list;
    if(item->next == NULL){
        free(*list);
        *list = NULL;
        return;
    }
    while (item->next->next != NULL){
        item = item->next;
    }
    free(item->next);
    item->next = NULL;
}

StructureX last(StructureX *list){
    if(list == NULL)return *list;
    StructureX *item = list;
    while(item->next != NULL){
        item = item->next;
    }
    return *item;
}

int main() {

    StructureX *list = NULL;
    for (int i = 0; i < 10; ++i) {
        ajouter(&list,i);
    }

//    afficher(list);
//    pop_back(&list);
//    printf("\n");
//    afficher(list);
//   liberer(list);
    return 0;
}

