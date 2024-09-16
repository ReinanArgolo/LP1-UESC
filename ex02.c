int main(void) {

    int n1, n2;

    printf("digite um numero: ");
    scanf("%d", &n1);

    printf("Digite outro numero: ");
    scanf("%d", &n2);

    if(n1 < n2) {
        printf("%d e maior", n2);
    } else if (n1 > n2) {
        printf("%d e maior", n1);
    } else {
        printf("Os valores sao iguais!");
    }

}
