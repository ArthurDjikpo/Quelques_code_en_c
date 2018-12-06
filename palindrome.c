//
//  palindrome.c
//  Algo
//
//  Created by Arthur Djikpo on 30/06/2018.
//  Copyright © 2018 Arthur Djikpo. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define Taille 100


//fontion du palindrome
int palindrome(char *chaine, int longueur){
    
    //affiche la longueur du mot
    printf("longueur : %d\n", longueur);

    for (int y=0; y<longueur; y++) {
        //affiche chaque caractère
        printf("carac :%c\n", chaine[y]);
    }
    
    //nouvelle chaine qui prend la chaine 1
    char *chaine2 = chaine + strlen(chaine)-1;
    
    while (chaine<chaine2){
        
            //vérifie si les cases sont différentes et si elles le sont il y a un return 0 qui arrête la fonction
            if(*chaine != *chaine2) return 0;
        
            //on avance dans la chaine 1 et on descend dans la chaine 2
            chaine++;
            chaine2--;
        
    
    }
    printf("Ok palindrome\n");
    return 1;
}
    



int main(int argc, const char * argv[]) {
    // saisie de la chaine de caractere
    char chaine[Taille];

    printf ("Tapez votre chaine : \n");
    scanf ("%s", chaine);
    printf ("Vous avez tapé : %s\n", chaine);
    
    int longueur =  strlen(chaine);
    printf("longueur : %d\n", longueur);
    palindrome(chaine, longueur);
    
    

    
    printf("Ok fin!\n");
    return 0;
}
