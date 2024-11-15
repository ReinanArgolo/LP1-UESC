#include <stdio.h>
#define SIZE 20

void preencherVetor(int vetor1[], int vetor2[]);
void reorganizarVetor(int vetor1[], int vetor2[], int vetor3[]);
void imprimirVetor(int vetor[]);

int main(void) {

    int vetor1[SIZE], vetor2[SIZE], vetor3[SIZE*2];

    preencherVetor(vetor1, vetor2);
    reorganizarVetor(vetor1, vetor2, vetor3);
    imprimirVetor(vetor3);

}

void preencherVetor(int vetor1[], int vetor2[]) {

    for (int i = 0; i < SIZE; i++) {
        vetor1[i] = i + 1;
    }

    for (int i = 0; i < SIZE; i++) {
        vetor2[i] = i + 21;
    }

}

void reorganizarVetor(int vetor1[], int vetor2[], int vetor3[]) {

   for(int i = 0; i < SIZE*2; i++) {
        vetor3[i] = vetor1[(int)(i*0.5)] * (1 - i%2) + vetor2[(int)(i*0.5)] * (i%2);
   }

   // Nesta função, se o meu i for par i%2 será 0, logo 1 - 0 = 1, inserindo o vetor i na posição [i/2] (pois é necessário corrigir por conta de percorrer 40 posições sendo que há apenas 20 nos vetores "base"), para impar a lógica inversa

}

void imprimirVetor(int vetor[]) {
    for(int i = 0; i < SIZE*2; i++) {
       printf("%d ", vetor[i]);
    }
}