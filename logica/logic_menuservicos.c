#include "../telas/telasmenu.h"
#include "../telas/telaservicos.h"
#include <stdio.h>
#include <stdlib.h>

void logic_menuservicos()
{
    char opcao;
    do
    {
        opcao = telaServicos();
        switch (opcao)
        {
        case '1':
            criarServico();
            break;
        case '2':
            lerServico();
            break;
        case '3':
            editarServico();
            break;
        case '4':
            deletarServico();
            break;
        case '0':
            break;
        default:
            system("clear||cls");
            printf("\t    Opção inválida. Tente novamente. !! \n");
            break;
        }
    } while (opcao != '0');
}