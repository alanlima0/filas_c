#include <stdio.h>
#include <stdlib.h>

//inicialização
#define MAX 10
int fila[MAX];
int fim=0;
int ini=0;


int main(){

}

void qstore(int i){
    if (fim==MAX){
        printf("Fila cheia.\n");
        return;
    }

    fila[fim]=i;
    fim++;
    printf("Enfileirado: %d\n",i);
}

int qretrieve(){
    if (ini==fim){
        printf("Fila vazia.\n");
        return NULL;
    }

    ini++;
    printf("Desenfileirado: %d\n",fila[ini-1]);
    return fila[ini-1];

}