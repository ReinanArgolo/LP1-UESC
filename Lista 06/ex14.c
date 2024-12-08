#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void construirAnoExtenso(int ano, char *anoExtenso);
int isValidDate(int d, int m, int a);
int isValidDate(int d, int m, int a);
void imprimirData(int d, int m, int a);

int main() {
    int d, m, a;
    printf("Digite o dia, mês e ano: ");
    scanf("%d %d %d", &d, &m, &a);

    if (isValidDate(d, m, a)) {
        imprimirData(d, m, a);
    } else {
        printf("Data inválida\n");
    }

    return 0;
}

const char *dias[] = {
    "primeiro", "dois", "três", "quatro", "cinco", "seis", "sete", "oito", "nove", "dez",
    "onze", "doze", "treze", "quatorze", "quinze", "dezesseis", "dezessete", "dezoito", "dezenove", "vinte",
    "vinte e um", "vinte e dois", "vinte e três", "vinte e quatro", "vinte e cinco", "vinte e seis", "vinte e sete", "vinte e oito", "vinte e nove", "trinta", "trinta e um"
};

const char *meses[] = {
    "janeiro", "fevereiro", "março", "abril", "maio", "junho",
    "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"
};

const char *unidades[] = {
    "", "um", "dois", "três", "quatro", "cinco", "seis", "sete", "oito", "nove"
};

const char *dezenas[] = {
    "", "dez", "vinte", "trinta", "quarenta", "cinquenta", "sessenta", "setenta", "oitenta", "noventa"
};

const char *centenas[] = {
    "", "cem", "cento", "duzentos", "trezentos", "quatrocentos", "quinhentos", "seiscentos", "setecentos", "oitocentos", "novecentos"
};

const char *milhares[] = {
    "", "mil", "dois mil", "três mil", "quatro mil", "cinco mil", "seis mil", "sete mil", "oito mil", "nove mil"
};

void construirAnoExtenso(int ano, char *anoExtenso) {
    int milhar = ano / 1000;
    int centena = (ano % 1000) / 100;
    int dezena = (ano % 100) / 10;
    int unidade = ano % 10;

    if (milhar > 0) {
        strcpy(anoExtenso, milhares[milhar]);
    }

    if (centena > 0) {
        if (strlen(anoExtenso) > 0) {
            strcat(anoExtenso, " e ");
        }
        if (centena == 1 && dezena == 0 && unidade == 0) {
            strcat(anoExtenso, "cem");
        } else {
            strcat(anoExtenso, centenas[centena]);
        }
    }

    if (dezena > 0) {
        if (strlen(anoExtenso) > 0) {
            strcat(anoExtenso, " e ");
        }
        strcat(anoExtenso, dezenas[dezena]);
    }

    if (unidade > 0) {
        if (strlen(anoExtenso) > 0) {
            strcat(anoExtenso, " e ");
        }
        strcat(anoExtenso, unidades[unidade]);
    }
}

int isValidDate(int d, int m, int a) {
    if (a < 1 || m < 1 || m > 12 || d < 1 || d > 31) {
        return 0;
    }
    if (m == 2) {
        if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0)) {
            return d <= 29;
        } else {
            return d <= 28;
        }
    }
    if (m == 4 || m == 6 || m == 9 || m == 11) {
        return d <= 30;
    }
    return 1;
}

void imprimirData(int d, int m, int a) {
    char anoExtenso[100] = "";
    construirAnoExtenso(a, anoExtenso);
    printf("%s de %s de %s\n", dias[d - 1], meses[m - 1], anoExtenso);
}