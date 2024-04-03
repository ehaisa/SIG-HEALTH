#include "../telas/telasmenu.h"
#include <stdio.h>
#include <stdlib.h>

void logic_menuinfos()
{
    char opcao;
    do
    {
        opcao = telaInfos();
        switch (opcao)
        {
        case '1':
            telaSobre();
            break;
        case '2':
            telaDev();
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