#include <stdio.h>
#include <stdlib.h>

typedef struct {
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
    if(list->next == NULL) {
        printf("%d\n",list->value);
        return;
    }
    afficher(list->next);
    printf("%d\n",list->value);
}

void liberer(StructureX *list){
    if(list->next == NULL) {
        free(list);
        return;
    }
    liberer(list->next);
    free(list);
}

int main() {

    StructureX *list = NULL;
    for (int i = 0; i < 10; ++i) {
        ajouter(&list,i);
    }

    afficher(list);
    liberer(list);
    return 0;
}

