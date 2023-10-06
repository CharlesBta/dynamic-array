#include <stdio.h>

struct StructureX{
    int value;
    struct StructureX * pointeurX;
};
struct StructureX tab[];



int main() {
    for (int i = 0; i < 10; ++i) {
        tab[i].value = i*3;
        printf("i =%d, value =%d\n",i,tab[i].value);
        tab[i].pointeurX = &tab[i+1];
    }
    printf("here: ");
    int rang;
    scanf("%d",&rang);

    printf("Valeur de rang:%d : %d\n",rang, tab[rang].value);
    printf("Valeur de rang:%d à travers le pointeur : %d\n",rang, tab[rang-1].pointeurX->value);

    return 0;
}
