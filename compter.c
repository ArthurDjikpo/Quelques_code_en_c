//
//  main.c
//  Algo 2
//
//  Created by Arthur Djikpo on 05/07/2018.
//  Copyright © 2018 Arthur Djikpo. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define Taille 1000

void  nbrVoyellesConsonnesMots(char * chaine){
    //les compteurs
    int cptv = 0;
    int cptc = 0;
    int cptm = 0;
    
    //Lorque l'utilisatueur saisie un seul mot
    if (chaine[0]!=' '){
        cptm++;
    }
    
    // Dans la chaine il y a un espace en trop, voilà pourquoi je fais un -1
    int longueur = strlen(chaine)-1;
    
    for (int x=0; x<longueur; x++){
        switch (chaine[x]) {
                
            //les minuscules
            case 'a':
                cptv++;
                break;
            case 'e':
                cptv++;
                break;
            case 'i':
                cptv++;
                break;
            case 'o':
                cptv++;
                break;
            case 'u':
                cptv++;
                break;
            case 'y':
                cptv++;
                break;
                
            // les majuscules
            case 'A':
                cptv++;
                break;
            case 'E':
                cptv++;
                break;
            case 'I':
                cptv++;
                break;
            case 'O':
                cptv++;
                break;
            case 'U':
                cptv++;
                break;
            case 'Y':
                cptv++;
                break;
                
            case ' ':
                cptm++;
                break;
            case '\0':
                cptm++;
                break;
                
            default:
                cptc++;
                
                break;
        }
    }
 
    printf("voyelles: %d, consonnes: %d\n Mots: %d\n ",cptv, cptc, cptm);
}


int main(int argc, const char * argv[]) {
    // insert code here...
    char chaine [Taille];
    
    printf("saisissez votre mot/phrase: \n");
    fgets(chaine, Taille, stdin);
    
    while (chaine[0]==' '){
        printf("Resaisissez votre mot/phrase: \n");
        fgets(chaine, Taille, stdin);
    }
    
    printf("La chaine est : %s \n", chaine);
    
    nbrVoyellesConsonnesMots(chaine);
    printf("Ok fin!\n");
    return 0;
}
