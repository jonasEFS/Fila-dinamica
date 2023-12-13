#include <stdio.h>
#include "biblioteca.h"

int main() {
    T_Lista lista;
    T_Item item;

    iniciarLista(&lista);
    int e;

    while (true) {
    printf("Elementos na lista: %i\n\n", lista.qtdeAtual);
        printf("1 - Adicionar\n");
        printf("2 - Exibir lista\n");
        printf("3 - Excluir do fim\n");
        printf("4 - Excluir do inicio\n");
        printf("5 - Inserir numa posicao\n");
		printf("6 - Remover numa posicao\n");
		printf("7 - Sair\n\n");
        printf("Opcao: ");
        scanf("%d", &e);

        switch (e) {
            case 1:
                printf("Digite o numero que quer adicionar: ");
                scanf("%d", &item.campo);

                inserir(&lista, item);
                break;
            case 2:
                exibir(&lista);
                break;
            case 3:
                excluirFinal(&lista);
                break;
            case 4:
                excluirInicio(&lista);
                break;
            case 5:
                int pos;
        
                printf("Digite a posicao onde deseja adicionar um elemento: ");
                scanf("%i", &pos);
                printf("Digite o numero que quer adicionar: ");
                scanf("%i", &item.campo);
				
                inserirPorPosicao(&lista, pos, item);
    			break;
    		case 6:
                int pos2;
                printf("Digite a posicao onde deseja remover um elemento: ");
                scanf("%i", &pos2);

                removerPorPosicao(&lista, pos2);
                break;
            case 7:
            	printf("Tchau Tchau...");
            	exit(0);
            	break;
            	
            default:
            	printf("Opcao invalida parceiro");
        }

    printf("\n\n*********************************\n\n");

    }

    return 0;
}
