#include "../telas/telasmenu.h"
#include "../telas/telaspaciente.h"
#include <stdio.h>
#include <stdlib.h>

void logic_menupaciente()
{
    char opcao;
    do
    {
        opcao = telaPacientes();
        switch (opcao)
        {
        case '1':
            criarPaciente();
            break;
        case '2':
            lerPaciente();
            break;
        case '3':
            editarPaciente();
            break;
        case '4':
            deletarPaciente();
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