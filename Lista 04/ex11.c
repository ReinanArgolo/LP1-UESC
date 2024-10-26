#include <stdio.h>

int imprimirHorario(int segundos);

int main(void) {

    int segundos;
    
    printf("Digite a quantidade de segundo do dia: ")
    scanf("%d", &segundos);
    imprimirHorario(3725);

}

int imprimirHorario(int segundos) {
    if ((segundos > 0) && (segundos < 86400)) {
        int horas = segundos / 3600;
        int minutos = (segundos % 3600) / 60;
        int segs = segundos % 60;
        printf("%02d:%02d:%02d\n", horas, minutos, segs);
        return 0;
        } else {
        printf("Segundos inválidos.\n");
        return -1;
        }

}
