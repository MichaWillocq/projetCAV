#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct _personne{
    char* prenom;
    char sexe;
    struct _person* pere;
    struct _person* mere;
} Personne;

typedef _lc {
    Person* racine;
    struct _lc* suivant;
} ListeCh;

FILE* load(char* filename, FILE* f); // CHARGE EN MÉMOIRE L'ARBRE STOCKÉ DANS LE FICHIER
FILE* save(char* filename, FILE* f); // ECRIT DANS LE FICHIER L'ARBRE STOCKÉ EN MÉMOIRE
FILE* view(FILE* f); // AFFICHE L'ARBRE STOCKÉ EN MÉMOIRE
void exit(); // QUITTE LE PROGRAMME

new(prenom)

pere(char* prenom);
mere(char* prenom);
parents(char* prenom);

gdperes(char* prenom);
gdmeres(char* prenom);
gdparents(char* prenom);
ascendants(char* prenom);

enfants(char* prenom);
petitsenfants(char* prenom);
descendants(char* prenom);

partenaires(char* prenom);
freres(char* prenom);
soeurs(char* prenom);
demifreres(char* prenom);
demisoeurs(char* prenom);

oncles(char* prenom);
tantes(char* prenom);
cousins(char* prenom);


int main(){
    
}
