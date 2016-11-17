#include "head.h"

void push(t_pilha ** pilha,t_elemento dado){
    t_pilha no;
    no.dado = dado;
    t_pilha * aux = malloc (sizeof(t_pilha));
    * aux = no;
    aux->prox = *pilha;
    * pilha = aux;
}
t_elemento pop(t_pilha ** pilha){
    t_elemento dado;
    t_pilha * aux = (*pilha)->prox;
    dado = (*pilha)->dado;
    free(*pilha);
    * pilha = aux;
    return dado;
}

pilha criaP(){
    pilha topo = (t_pilha *) malloc(sizeof(t_pilha));
    t_pilha no;
    no.prox = NULL;
    *topo = no;
    return topo;
}
