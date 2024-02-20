#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Pilha
{
    int *elements;
    int topo;

} Pilha;

bool stackEmpty(Pilha *pilha){
    if(pilha->topo == 0){
        return true;
    }
    return false;
}

void push(Pilha *pilha, int element){
    pilha->topo = pilha->topo + 1;
    pilha->elements[pilha->topo] = element;
}

int pop(Pilha *pilha){
    if(stackEmpty(pilha)){
        return 0;
    }

    pilha->topo = pilha->topo - 1;
    return pilha->elements[pilha->topo + 1];
}

void imprimirElementos(Pilha *pilha){

    if(stackEmpty(pilha)) {
        printf("A pilha está vazia!");
        return;
    }

    for(int i = 0; i < pilha->topo; i++){
        printf("%d\n", pilha->elements[i + 1]);
    }
}

int main(){

    Pilha* pilha = (Pilha*)malloc(sizeof(Pilha));
    pilha->elements = (int*)malloc(sizeof(int) * 3);
    pilha->topo = 0;
    
    return 0;
}
