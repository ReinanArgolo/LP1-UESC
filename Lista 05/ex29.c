#include <stdio.h>
#define LIN 6
#define COL 6

void calcularTrajeto(int m[][COL], int rota[],  int *soma);

int main(void) {
    int soma = 0;

    int matriz[LIN][COL] = {
        {0, 63, 210, 190, 95, 190},
        {63, 0, 160, 150, 95, 0},
        {210, 160, 0, 10, 0, 0},
        {190, 150, 10, 0, 0, 0},
        {0, 95, 0, 0, 0, 80},
        {190, 0, 0, 0, 80, 0}
    };

    int vetor[LIN] = {3,4,2,5,6,1};
    calcularTrajeto(matriz, vetor, &soma); 
    printf("soma: %d \n", soma);

}

void calcularTrajeto(int m[][COL], int rota[], int *soma) {
    *soma = 0;
    for(int i = 0; i <LIN - 1; i++) {
       *soma += m[rota[i]-1][rota[i+1] - 1]; 
       printf("a %d\n", rota[i]-1);
       printf("b %d\n", rota[i+1]-1);
    }
}
