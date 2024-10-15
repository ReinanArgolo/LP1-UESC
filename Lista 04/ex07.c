#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int jogada();
void somarJogada();

int main() {

    int cara = 0;
    int coroa = 0;

    srand(time(NULL));
    for(int i=0;i<100;i++) {
        if(jogada()) {
            cara++;
        } else {
            coroa++;
    }
    }

    printf("CARA: %d\n", cara);
    printf("COROA: %d", coroa);

}

int jogada() {
    return rand()  % 2;
}

