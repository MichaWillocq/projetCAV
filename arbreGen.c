#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct _person{
    char* name;
    char genre;
    struct _person* father;
    struct _person* mother;
} Person;

typedef _lc {
    Person* root;
    struct _lc* suiv;
} List;

FILE* load(char* filename, FILE* f); // CHARGE EN MÉMOIRE L'ARBRE STOCKÉ DANS LE FICHIER
FILE* save(char* filename, FILE* f); // ECRIT DANS LE FICHIER L'ARBRE STOCKÉ EN MÉMOIRE
FILE* view(FILE* f); // AFFICHE L'ARBRE STOCKÉ EN MÉMOIRE
void exit(); // QUITTE LE PROGRAMME


int main(){
    
}
