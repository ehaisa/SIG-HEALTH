#include "logic_telamain.h"
#include "../telas/telasmenu.h"
#include "logic_menupaciente.h"
#include "logic_menuagendamento.h"
#include "logic_menuservicos.h"
#include "logic_menuinfos.h"
#include <stdio.h>
#include <stdlib.h>

void logic_telamain(char opcao)
{
    switch (opcao)
    {
    case '1':
        logic_menupaciente();    
        break;
    case '2':
        logic_menuagendamento();
        break;
    case '3':
        logic_menuservicos();
        break;
    case '4':
        system("cls||clear");
        printf("\t    Opção em desenvolvimento. Tente novamente quando finalizado. !! \n");
        break;
    case '5':
        logic_menuinfos();
        break;
    case '0':
        system("clear||cls");
        printf("\t    PROGRAMA FINALIZADO. Agradecemos a preferência. !! \n");
        break;
    default:
        system("clear||cls");
        printf("\t    Opção inválida. Tente novamente. !! \n");
        break;
    }
}