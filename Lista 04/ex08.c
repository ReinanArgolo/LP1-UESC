#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sortearNumero();
int jogar();

int main(void) {

    int continuar = 1;
    srand(time(NULL));

    printf("Bem vindo ao Jogo da multiplicacao! Vamos testar e aprimorar suas habilidades: \n");

    while (continuar) {
        jogar();

        printf("Vamos novamente? \n 1 - Jogar\n 0 - Encerrar");
        scanf("%d", &continuar);
    }
    
    
}

int sortearNumero() {
    return 1 + (rand() % 9);
}

int jogar() {
    int n1 = sortearNumero();
    int n2 = sortearNumero();
    int resposta;

    int resultado = n1 * n2;

    printf("QUANTO E %d X %d?", n1, n2 );
    scanf("%d", &resposta);

    if (resposta == resultado) {
        printf("Muito bem!! Voce ACERTOU! \n");
    }

    while (resposta != resultado) {
       printf("Bem, nao e isso, vamos tentar novamente!!\n");

       printf("QUANTO E %d X %d?", n1, n2);
       scanf("%d", &resposta);

       if (resposta == resultado) {
            printf("Muito bem!! Voce ACERTOU! \n");
       }
       
    }
    
}