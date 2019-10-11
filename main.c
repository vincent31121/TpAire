#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.142

double airerect (float longeur, float largeur, float Aire)
{
     Aire= longeur* largeur;
    return Aire;
}

double perirectangle (float longeur, float largeur , float perim )
{
    perim= 2*longeur+ 2*largeur;
    return perim;
}

double Aircerle (float rayon , float Air)
{
    Air = PI*pow(rayon, 2);
    return Air;
}

double pericercle (float rayon, float perim)
{
    perim = 2* PI * rayon;
    return perim;
}

double main()
{
    float perim =0;
    float largeur=0;
    float longeur=0;
    float rayon=0;
    float aire=0;
    int choix=0;




    printf("chosir entre, 1:Aire rectangle\carre  2:Perimetre rectangle\carre 3:Perimetre du cercle 4:Aire cercle \n");
    scanf("%d", &choix);
    if (choix == 1)
    {
        printf("entrez la longeur du rectangle\carre \n");
        scanf("%f", &longeur);
        printf("entrez la largeur du rectangle\carre \n");
        scanf("%f", &largeur);
        aire= airerect(longeur,largeur, aire);

        printf("aire du rectangle\carre est de %f" ,aire);
    }


    else if (choix == 2)
    {
        printf("entrez la longeur du rectangle\carre \n");
        scanf("%f", &longeur);
        printf("entrez la largeur du rectangle\carre \n");
        scanf("%f", &largeur);
        perim = perirectangle(longeur, largeur, perim);

        printf("le périmetre du rectangle\carre est de %f" ,perim);
    }

    else if (choix == 3)
    {
        printf("entrez le rayon \n");
        scanf("%f", &rayon);
        perim = pericercle(rayon, perim);

        printf("le périmetre du cercle est de %f" ,aire);
    }
    else if (choix == 4)
    {
        printf("entrez le rayon \n");
        scanf("%f", &rayon);
        aire = Aircerle(rayon,aire);

        printf("l'aire du cercle est de %f" ,aire);
    }

}
