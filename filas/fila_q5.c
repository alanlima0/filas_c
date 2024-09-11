/* 5.1.1 Suponha que, diferentemente da convenção adotada no texto, a parte do vetor
 ocupada pela fila é f[s..t]. Escrevaocomandoque removeumelementodafila.
 Escreva o comando que insere um objeto y na fila.*/

#include <stdio.h>
#include <stdlib.h>

#define N 6  

int f[N];  // Vetor que armazena a fila
int s = 0; // Índice do início da fila
int t = -1; // Índice do final da fila

int filaVazia() {
    return s > t;
}


int filaCheia() {
    return t == N - 1;
}


void inserirNaFila(int y) {
    if (filaCheia()) {
        printf("Erro: Fila cheia. Não é possível inserir o elemento %d.\n", y);
    } else {
        f[++t] = y;  // Incrementa t e insere o elemento
        printf("Elemento %d inserido na fila.\n", y);
    }
}


int removerDaFila() {
    if (filaVazia()) {
        printf("Erro: Fila vazia. Não há elementos para remover.\n");
        return -1; 
    } else {
        return f[s++];  
    }
}


void exibirFila() {
    if (filaVazia()) {
        printf("Fila vazia.\n");
    } else {
        printf("Fila: ");
        for (int i = s; i <= t; i++) {
            printf("%d ", f[i]);
        }
        printf("\n");
    }
}

int main() {

    inserirNaFila(1);
    inserirNaFila(2);
    inserirNaFila(3);
    inserirNaFila(4);
    inserirNaFila(5);


    exibirFila();


    printf("Elemento removido: %d\n", removerDaFila());
    printf("Elemento removido: %d\n", removerDaFila());

    
    exibirFila();


    inserirNaFila(6);
    inserirNaFila(7); 

   
    exibirFila();

    return 0;
}