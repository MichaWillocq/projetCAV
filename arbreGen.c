#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100


typedef struct _personne{
    char* prenom;
    char sexe;
    struct _person* pere;
    struct _person* mere;
} Personne;

FILE* load(char* filename, FILE* f); // CHARGE EN MÉMOIRE L'ARBRE STOCKÉ DANS LE FICHIER
FILE* save(char* filename, FILE* f); // ECRIT DANS LE FICHIER L'ARBRE STOCKÉ EN MÉMOIRE
FILE* view(FILE* f); // AFFICHE L'ARBRE STOCKÉ EN MÉMOIRE
void exit(); // QUITTE LE PROGRAMME

void affichePersonne(Personne p){
    printf("%s:%c,%s,%s", p.prenom, p.sexe, (p.pere)->prenom, (p.mere)->prenom);
}

int hash(char* prenom) {
    int id=0;
    for(;*prenom;prenom++)
        id+=*prenom;
    return id%MAX;
}

void new(char* prenom, char sexe, char* pere, char* mere){
    Personne p;
    strcpy(p.prenom, prenom);
    p.sexe = sexe;


}

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
