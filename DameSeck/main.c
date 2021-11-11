//
//  main.c
//  DameSeck
//
//  Created by Diakite on 10/11/2021.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//allocation Dynamique de tableau
int * TabEntier(int N)
{
    
     int *T;
    T=(int*)malloc(sizeof(int)*N);
    if(T==NULL)
          {
        printf("tableau : erreur l'espace est insuffisant pour louer la memoire ");
        exit(-1);
      }
    return T-1;
}

//Nombre de chiffre d'un nombre quelconque
int nombreChiffres ( int nombre )
{
    int i = 1;
    if (nombre < 0)
    {
        nombre = -nombre;
    }
    while (nombre >= 10)
    {
        nombre /= 10;
        i++;
    }

    return i;
}

//Fonction principale
int main(int argc, const char * argv[]) {
    // insert code here...
    int N,temp,a,n;
    int*T;
    
    printf("Donnez un nombre N = ");
    scanf("%d",&N);
    T=TabEntier(N);
    n=nombreChiffres(N);
    a=N;
    
    //Separation des chiffres de N et stockage dans un tableau
    for (int i=n; i>=0; i--) {
        temp=N/pow(10,i);
        T[i]=temp;
        N-=temp*pow(10, i);
    }
    printf("L'ecriture inverse du nombre %d est :\n",a);
    //Affichage du resultat
    for (int i=0; i<n; i++) {
        printf("%d",T[i]);
    }
    printf("\n");
    
    return 0;
}
