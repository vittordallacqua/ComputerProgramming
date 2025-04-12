#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ler_aposta(int *aposta, int n) {
    printf("Digite os %d números da sua aposta (entre 0 e 100):\n", n);
    for (int i = 0; i < n; i++) {
        do {
            scanf("%d", &aposta[i]);
        } while (aposta[i] < 0 || aposta[i] > 100);
    }
}

void sorteia_valores(int *sorteio, int n) {
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        sorteio[i] = rand() % 101; // Números de 0 a 100
    }
}

int *compara_aposta(int *aposta, int *sorteio, int qtdacertos, int na, int ns) {
    int *acertos = (int*)malloc(qtdacertos * sizeof(int));
    int j = 0;
    for (int i = 0; i < na; i++) {
        for (int k = 0; k < ns; k++) {
            if (aposta[i] == sorteio[k]) {
                acertos[j++] = aposta[i];
            }
        }
    }
    return acertos;
}

int main() {
    int n_apostas;
    int *aposta, *sorteio, *acertos;
    int qtd_acertos = 0;

    printf("Quantos números você quer apostar? (1-20): ");
    scanf("%d", &n_apostas);

    aposta = (int*)malloc(n_apostas * sizeof(int));
    sorteio = (int*)malloc(20 * sizeof(int)); // Sempre sorteia 20 números

    ler_aposta(aposta, n_apostas);
    sorteia_valores(sorteio, 20);

    acertos = compara_aposta(aposta, sorteio, qtd_acertos, n_apostas, 20);

    printf("Você acertou %d números:\n", qtdacertos);
    for (int i = 0; i < qtdacertos; i++) {
        printf("%d ", acertos[i]);
    }
    printf("\n");

    free(aposta);
    free(sorteio);
    free(acertos);

    return 0;
}
