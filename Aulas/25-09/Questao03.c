#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(int argc, char const *argv[])
{

    setlocale(LC_ALL, "Portuguese");

    int i=0, gato = 0, cachorro = 0, SC = 0, SG = 0, idade = 0;
    char animal;

    while(i<4) {
        printf("Digite a idade do animal: ");
        scanf("%d", &idade);
        printf("Digite o animal [C/G]: ");
        scanf(" %c", &animal);

        if(animal == 'C' || animal == 'c') {
            cachorro++;
            SC += idade;
        } else if(animal == 'G' || animal == 'g') {
            gato++;
            SG += idade;
        } else {
            printf("Animal inválido\n");
        }
                
        i++;
    }
    
    int mediaC = SC / cachorro;
    int mediaG = SG / gato;

    if (mediaC != 0) {
        printf("Média de idade dos cachorros: %d\n", mediaC);
    } else {
        printf("Não foram atendidos cachorros\n");
    }

    if (mediaG != 0) {
        printf("Média de idade dos gatos: %d\n", mediaG);
    } else {
        printf("Não foram atendidos gatos\n");
    }
    
    
    

    return 0;
}
