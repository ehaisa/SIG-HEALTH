#include "../telas/telasmenu.h"
#include "../telas/telasagendamento.h"
#include <stdio.h>
#include <stdlib.h>

void logic_menuagendamento()
{
    char opcao;
    do
    {
        opcao = telaCalendario();
        switch (opcao)
        {
        case '1':
            criarAgendamento();
            break;
        case '2':
            lerAgenda();
            break;
        case '3':
            editarAgendamento();
            break;
        case '4':
            deletarAgendamento();
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
    } while (opcao != '0');
}