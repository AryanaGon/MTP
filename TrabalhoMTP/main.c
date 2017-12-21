#include <stdio.h>
#include <stdlib.h>
#include "banco.h"

int main()
{
	int op=0, verificar;
	do{
		system("cls");
        printf("\n\nDigite o numero referente a ferramenta desejada: \n");
		printf("\n 1 - CRIAR CONTA \n 2 - MOSTRAR CONTA \n 3 - MOSTRAR SALDO \n 4 - INSERIR DINHEIRO \n 5 - RETIRAR DINHEIRO \n 6 - EXTRATO \n 7 - REMOVER CONTA \n 8 - SAIR \n");
        scanf("%d", &op);
		switch(op)
		{
		 	case 1:
                criar();
				system ("pause");
			    break;
            case 2:
				mostrarconta();
				system ("pause");
				break;
			case 3:
				mostrarsaldo();
				system ("pause");
				break;
            case 4:
				inserir();
				system ("pause");
				break;
            case 5:
				retirar();
				system ("pause");
				break;
            case 6:
				extrato();
				system ("pause");
				break;
            case 7:
				removerconta();
				system ("pause");
				break;
			case 8:
				exit(0);
		}
	}while(op != 8);
return 0; }
