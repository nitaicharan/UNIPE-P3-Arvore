#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct dado{
    int n;
}t_elemento;

typedef struct noA{
    struct noA * esq;
    t_elemento dado;
    struct noA * dir;
}t_arvore;

typedef struct noP{
    t_elemento dado;
    struct noP * prox;
}t_pilha;


typedef t_arvore * arvore;
typedef t_pilha * pilha;

void preordem_(arvore arv);
void inordem_(arvore arv);
void posordem_(arvore arv);
int pop(t_pilha ** pilha);
void push(t_pilha ** pilha,int dado);

pilha criaP();
t_arvore * criaA();