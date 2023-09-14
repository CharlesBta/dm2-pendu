#include <stdio.h>

char secretword [8] = {'G','U','I','T','A','R','E'};
char guessword [8] = {'_','_','_','_','_','_','_'};


int main () {
    int error=0;
    char letter;
    char found = 0;
    char tmp;
    printf("Mot a deviner : _ _ _ _ _ _ _ \n");

    while ( error < 6 ) {
        printf("Entrez une lettre : ");
        scanf(" %c",&letter);

        tmp = found;
        for (int i = 0; i < 8; ++i) {
            if (letter == secretword[i]) {
                guessword [i] = secretword[i] ;
                found += 1 ;
            }
        }
        if (tmp == found) {
            error += 1;
            printf("Erreur, plus que %d erreur(s). \n", 6 - error);
        } else {
            printf("Bonne lettre\n");
        }

        printf("Mot actuel : ");
        for (int i = 0; i < 8; ++i) {
            printf("%c", guessword[i]);
        }
        printf("\n");


        if (found == 7) {
            printf("Bravo! Le mot est : ");
            for (int i = 0; i < 8; ++i) {
                printf("%c", secretword[i]);
            }
            printf("\n");
            return 0;
        }
    }if (error==6){
        printf("Perdu le mot etait :");
        for (int i = 0; i < 8; ++i) {
            printf("%c", secretword[i]);
        }
        printf("\n");
        return 0;
    }

    return 0;
}