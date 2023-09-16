#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5];
    int somme = 0, moyenne;
    int i;

    printf("Entrer les notes et ne entrer pas des note hors linterval 0 ou 20\n");

    for(i = 0; i<5; i++){
        scanf("%d",&arr[i]);
        if (arr[i] < 0 || arr[i] > 20){
                printf("vous avez choisi une note hors linterval des notes");
            break;
        }
        int compte = 0;
        compte += i;
    }
    for(i = 0; i<5; i++){
        somme += arr[i];
    }
    moyenne = somme / 5;
    printf("%d\n", moyenne);
    for (i = 0; i<5; i++){
            printf("%d\n",arr[i]);
            if(moyenne<arr[i]){
                printf("superieur\n");
            }else if(moyenne>arr[i]){
                printf("inferieur\n");
            }else{
                printf("egal\n");
            }
    }
    int com = 0;
    for(i = 0; i<5; i++){
        if(arr[i]>moyenne){
          com  += 1;
        }
    }

    printf("le nombre de note superieur a la moyenne sont:%d\n", com);

    int pluspetit = arr[0];
    for(i = 1; i<5; i++){
        if(arr[i]<arr[pluspetit]){
            arr[pluspetit] = i;

        }
    }

    return 0;
}
