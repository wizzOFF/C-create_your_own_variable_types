/*
struct Coordonnees
{
    int x; // Abscisses
    int y; // Ordonnées
};
*/
/*
struct Personne
{
    char nom[100];
    char prenom[100];
    char adresse[1000];
    
    int age;
    int etudiant; // Booléen : 1 = etudiant, 0 = non etudiant
};
*/
/*
#include "main.h" // Inclusion du .h qui contient les prototypes et structures

int main(int argc, char *argv[])
{
    struct Coordonnees point; // Création d'une variable "point" de type Coordonnees

    return 0;
}
*/
/*
typedef struct Coordonnees Coordonnees;
struct Coordonnees
{
    int x;
    int y;
};

int main(int argc, char *argv[])
{
    Coordonnees point; // L'ordinateur comprend qu'il s'agit de "struct Coordonnees" grâce au typedef
    
    point.x = 10;
    point.y = 20;
    
    return 0;
}

Coordonnees point = {0, 0};


Coordonnees* point = NULL; // équivalent à Coordonnees *point = NULL;
Coordonnees *point1 = NULL, *point2 = NULL;
*/

/*
int main(int argc, char *argv[])
{
    Coordonnees monPoint;

    initialiserCoordonnees(&monPoint);

    return 0;
}

void initialiserCoordonnees(Coordonnees* point)
{
    (*point).x = 0;
    (*point).y = 0;
}
*/

int main(int argc, char *argv[])
{
    Coordonnees monPoint;
    Coordonnees *pointeur = &monPoint;

    monPoint.x = 10; // On travaille sur une variable, on utilise le "point"
    pointeur->x = 10; // On travaille sur un pointeur, on utilise la flèche

    return 0;
}