#include <stdio.h>
#include <stdlib.h>

#include "lista.h"

int main()
{
    lista l1, l2, l3;
    data d = 0;
    init_lista(&l1, false);
    init_lista(&l2, false);
    init_lista(&l3, true);

    inserir(&l1, 0, 99);
    inserir(&l1, 0, 87);
    inserir(&l1, 0, 64);

    if(lst_procurar(l1, 64) != -1) {
        printf("\nValor encontrado! \n");
    }

    printf("\ninserir item seguindo a ordem.\n");

    lst_ins_ordenado(&l1, 70);

    lst_imprimir(l1);

    printf("\ninserir item posicao final.\n");

    lst_inserir_final(&l1, 129);

    lst_imprimir(l1);

    printf("\ninserir item posicao inicio.\n");

    lst_inserir_inicio(&l1, 10);

    lst_imprimir(l1);

    printf("\nremover item posicao final.\n");

    data r = 0;

    lst_remover_final(&l1, &r);

    lst_imprimir(l1);

    inserir(&l2, 0, 21412);
    inserir(&l2, 0, 353);
    inserir(&l2, 0, 64353);
    lst_imprimir(l2);

    lst_concatenar(l1, l2, &l3);
    lst_imprimir(l3);

    return 0;
}
