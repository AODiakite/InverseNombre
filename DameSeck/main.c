//
//  main.c
//  DameSeck
//
//  Created by Diakite on 10/11/2021.
//

#include <stdio.h>
#include <math.h>
int main(int argc, const char * argv[]) {
    // insert code here...
    int N,temp,a;
    int T[4];
    
    printf("Donnez un nombre de 4 chiffres :");
    scanf("%d",&N);
    a=N;
    for (int i=3; i>=0; i--) {
        temp=N/pow(10,i);
        T[i]=temp;
        N-=temp*pow(10, i);
    }
    printf("L'ecriture inverse du nombre %d est :\n",a);
    for (int i=0; i<4; i++) {
        printf("%d",T[i]);
    }
    printf("\n");
    
    return 0;
}
