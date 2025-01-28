#include <stdio.h>
#include "libry.h"
// Exercice 1 : Afficher "Bonjour"
void afficherBonjour() {
    printf("Bonjour\n");
}

// Exercice 2 : Inverser un entier � trois chiffres
int inverserEntier(int n) {
    int centaine = n / 100;
    int dizaine = (n / 10) % 10;
    int unite = n % 10;
    return unite * 100 + dizaine * 10 + centaine;
}

// Exercice 3 : Produit de deux nombres r�els
float produitDeuxReels(float a, float b) {
    return a * b;
}

// Exercice 4 : V�rifier si un entier est pair ou impair
int estPair(int n) {
    return n % 2 == 0;
}

// Exercice 5 : Comparer deux entiers
const char* comparerEntiers(int a, int b) {
    if (a == b) return "a = b";
    else if (a > b) return "a > b";
    else return "a < b";
}

// Exercice 6 : Trier trois entiers
void trierTroisEntiers(int *a, int *b, int *c) {
    if (*a > *b) { int temp = *a; *a = *b; *b = temp; }
    if (*a > *c) { int temp = *a; *a = *c; *c = temp; }
    if (*b > *c) { int temp = *b; *b = *c; *c = temp; }
}


// Exercice 16 : Permutation
void permuterChar(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}
// Exercice 17 : Somme
int somme(int a, int b) {
    return a + b;
}
