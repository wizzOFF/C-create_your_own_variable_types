/*
struct Coordonnees
{
    int x; // Abscisses
    int y; // Ordonnées
};
*/

struct Personne
{
    char nom[100];
    char prenom[100];
    char adresse[1000];
    
    int age;
    int etudiant; // Booléen : 1 = etudiant, 0 = non etudiant
};