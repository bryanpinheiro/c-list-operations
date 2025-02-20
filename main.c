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

    if(lst_procurar(l, 64) != -1) {
        printf("\nValor encontrado! \n");
    }

    printf("\ninserir item seguindo a ordem.\n");

    lst_ins_ordenado(&l, 70);

    lst_imprimir(l);

    printf("\ninserir item posicao final.\n");

    lst_inserir_final(&l, 129);

    lst_imprimir(l);

    printf("\ninserir item posicao inicio.\n");

    lst_inserir_inicio(&l, 10);

    lst_imprimir(l);

    printf("\nremover item posicao final.\n");

    data r = 0;

    lst_remover_final(&l, &r);

    lst_imprimir(l);


    return 0;
}
