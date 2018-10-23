#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct _personne{
    char* prenom;
    char sexe;
    struct _person* pere;
    struct _person* mere;
} Personne;

typedef struct _lc {
    Person* racine;
    struct _lc* suivant;
} ListeCh;

FILE* load(char* filename, FILE* f); // CHARGE EN MÉMOIRE L'ARBRE STOCKÉ DANS LE FICHIER
FILE* save(char* filename, FILE* f); // ECRIT DANS LE FICHIER L'ARBRE STOCKÉ EN MÉMOIRE
FILE* view(FILE* f); // AFFICHE L'ARBRE STOCKÉ EN MÉMOIRE
void exit(); // QUITTE LE PROGRAMME

void new(prenom);

char* pere(char* prenom);
char* mere(char* prenom);
char* parents(char* prenom);

char* gdperes(char* prenom);
char* gdmeres(char* prenom);
char* gdparents(char* prenom);
char* ascendants(char* prenom);

char* enfants(char* prenom);
char* petitsenfants(char* prenom);
char* descendants(char* prenom);

char* partenaires(char* prenom);
char* freres(char* prenom);
char* soeurs(char* prenom);
char* demifreres(char* prenom);
char* demisoeurs(char* prenom);

char* oncles(char* prenom);
char* tantes(char* prenom);
char* cousins(char* prenom);


int main(){
    
}
