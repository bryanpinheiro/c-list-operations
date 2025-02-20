#include <stdio.h>
#include "lista.h"

bool is_full(lista l){
    return (l.qt_elementos == TAMANHO_LISTA);
}

void init_lista(lista * l){
    l->qt_elementos = 0;
    int i;
    for (i = 0; i < TAMANHO_LISTA; i++){
        l->dados[i] = 0;
    }
}

//Alterar o valor do k-ésimo nó da lista;
bool alterar(lista* l, int k, data val) {
    if (k < 0 || k > l->qt_elementos)
        return false;

    l->dados[k] = val;
    return true;

}


///Determinar o número de nós de uma lista;
int tamanho_lista(lista l){
    return l.qt_elementos;
}

//Acessar o k-ésimo nó da lista;
bool acessar(lista l, int k, data* val) {
    if (k < 0 || k > l.qt_elementos)
        return false;

    (*val) = l.dados[k];
    return true;
}

//Localizar um nó que contém um determinado valor
int localizar(lista l, data val) {
    int i;
    for (i = 0; i < l.qt_elementos; i++) {
        if (val == l.dados[i]) {
            return i;
        }
    }
    return -1;
}

//Insere um valor na posição e move todos para a direita
bool inserir(lista * l, int k, data val) {
    if (k < 0 || k > l->qt_elementos)
        return false;

    if (l->qt_elementos == TAMANHO_LISTA)
        return false;

    int i;
    for (i = l->qt_elementos; i > k; i--) {
        // ate um determinado nó K,
        // move todos os itens da lista para a esquerda
        l->dados[i] = l->dados[i-1];
    }

    l->dados[k] = val;
    l->qt_elementos++;

    return true;
}

bool remover(lista* l, int k, data * val) {
    if (k < 0 || k > l->qt_elementos)
        return false;

    if (l->qt_elementos == 0)
        return false;

    (*val) = l->dados[k];

    int i;
    for (i = k; i < l->qt_elementos; i++) {
        l->dados[i] = l->dados[i + 1];
    }

    l->qt_elementos--;

    return true;
}

//Concatenar duas listas;
bool concat(lista l1, lista l2, lista* l3){
    /// mudar estrutura da lista para utilizar nós
}

//
// To-do
//

void lst_imprimir(lista l) {
    int i;
    printf("\nlist: ");
    for(i = 0; i < l.qt_elementos; i++) {
        printf("%d, ", l.dados[i]);
    }
    printf("\n");
}

int lst_procurar(lista l, data val) {
    return localizar(l, val);
}

bool lst_ins_ordenado(lista *l, data val) {

    int i;
    for (i = 0; i < l->qt_elementos; i++) {
        if (l->dados[i] > val) {
            break;
        }
    }

    inserir(l, i, val);
}

bool lst_inserir_final(lista * l, data x) {
    inserir(l, l->qt_elementos, x);
}

bool lst_inserir_inicio(lista * l, data x) {
    inserir(l, 0, x);
}

bool lst_remover_final(lista * l, data * x) {
    remover(l, l->qt_elementos - 1, x);
}

bool lst_remover_inicio(lista * l, data * x) {
    remover(l, 0, x);
}

bool lst_concatenar(lista lst1, lista lst2, lista * lst3) {
    //chamar função concat acima
}
