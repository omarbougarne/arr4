#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5];

    printf("Entrer les notes et ne entrer pas des note hors linterval 0 ou 20\n");
    for(int i = 0; i<5;i++){
        scanf("%d",&arr[i]);
        if (arr[i] < 0 || arr[i] > 20){
                printf("vous avez choisi une note hors linterval des notes");
            break;
        }
    }
    return 0;
}
