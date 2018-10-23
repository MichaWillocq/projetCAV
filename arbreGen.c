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

typedef struct _lc {
    Person* racine;
    struct _lc* suivant;
} ListeCh;

/////////////Structures / Fonctions prénoms
typedef struct _prenoms {
	char** prenoms;
	int taille;
} Prenoms;

char** init_tab_prenoms(); //Initialise le tableau
void ajout_prenom(char* prenom, Prenoms prenoms); //Ajoute un prénom dans le tableau(reste trié dans l'ordre alphabétique)
int prenom_existe(Prenoms prenoms); //vérifie si un prénom existe
void supprime_prenom(char* prenom, Prenoms prenoms); //Supprime un prénom si il existe (c'est toujours utile)

/////////////

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
