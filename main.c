#include <stdio.h>
#include <stdlib.h>

#include "lista.h"

int main()
{

    lista l;
    data d = 0;
    init_lista(&l);

    inserir(&l, 0, 99); // Insere 1 na posição 0
    inserir(&l, 0, 87); // Insere 2 na posição 0
    inserir(&l, 0, 64); // Insere 3 na posição 0

    if(lst_procurar(l, 2) != -1) {
        printf("\nValor encontrado!");
    }

    lst_ins_ordenado(&l, 70);

    lst_imprimir(l);

    return 0;
}
