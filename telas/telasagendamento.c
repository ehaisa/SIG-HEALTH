#include <stdio.h>
#include <stdlib.h>
#include "telasagendamento.h"

void criarAgendamento(void) {
    system("clear||cls");
    printf("\n");
    printf("|| ========================================================================= ||\n");
    printf("||                                                                           ||\n");
    printf("||               ===========================================                 ||\n");
    printf("||               =                                         =                 ||\n");
    printf("||               =             Clínica em Casa             =                 ||\n");
    printf("||               =                                         =                 ||\n");
    printf("||               ===========================================                 ||\n");
    printf("||              Desenvolvido por @ehaisa -- desde Março, 2024                ||\n");
    printf("||                                                                           ||\n");
    printf("|| ========================================================================= ||\n");
    printf("||                                                                           ||\n");
    printf("||                    = = = = Novo Agendamento = = = =                       ||\n");
    printf("||                                                                           ||\n");
    printf("||                                                                           ||\n");
    printf("||             CPF (SOMENTE NÚMEROS):                                        ||\n");
    printf("||             Data (SOMENTE NÚMEROS):                                       ||\n");
    printf("||             Horário (SOMENTE NÚMEROS):                                    ||\n");
    printf("||             Serviço(s):                                                   ||\n");
    printf("||                                                                           ||\n");
    printf("||                                                                           ||\n");
    printf("|| ========================================================================= ||\n");
    printf("\n");
    printf("\t      Aperte a tecla <ENTER> para continuar a operação. !! \n");
    getchar();
}

void lerAgenda(void) {
    system("clear||cls");
    printf("\n");
    printf("|| ========================================================================= ||\n");
    printf("||                                                                           ||\n");
    printf("||               ===========================================                 ||\n");
    printf("||               =                                         =                 ||\n");
    printf("||               =             Clínica em Casa             =                 ||\n");
    printf("||               =                                         =                 ||\n");
    printf("||               ===========================================                 ||\n");
    printf("||              Desenvolvido por @ehaisa -- desde Março, 2024                ||\n");
    printf("||                                                                           ||\n");
    printf("|| ========================================================================= ||\n");
    printf("||                                                                           ||\n");
    printf("||                   = = = = Visualizar Agenda = = = =                       ||\n");
    printf("||                                                                           ||\n");
    printf("||                                                                           ||\n");
    printf("||           Informe a DATA que deseja pesquisar (SOMENTE NÚMEROS):          ||\n");
    printf("||                                                                           ||\n");
    printf("||                                                                           ||\n");
    printf("|| ========================================================================= ||\n");
    printf("\n");
    printf("\t      Aperte a tecla <ENTER> para continuar a operação. !! \n");
    getchar();
}

void editarAgendamento(void) {
    system("clear||cls");
    printf("\n");
    printf("|| ========================================================================= ||\n");
    printf("||                                                                           ||\n");
    printf("||               ===========================================                 ||\n");
    printf("||               =                                         =                 ||\n");
    printf("||               =             Clínica em Casa             =                 ||\n");
    printf("||               =                                         =                 ||\n");
    printf("||               ===========================================                 ||\n");
    printf("||              Desenvolvido por @ehaisa -- desde Março, 2024                ||\n");
    printf("||                                                                           ||\n");
    printf("|| ========================================================================= ||\n");
    printf("||                                                                           ||\n");
    printf("||                   = = = = Editar Agendamento = = = =                      ||\n");
    printf("||                                                                           ||\n");
    printf("||             1. Data                                                       ||\n");
    printf("||             2. Horário                                                    ||\n");
    printf("||             3. Serviço                                                    ||\n");
    printf("||             0. Sair                                                       ||\n");
    printf("||                                                                           ||\n");
    printf("|| ========================================================================= ||\n");
    printf("\n");
    printf("\t      Informe a opção que deseja modificar ou adicionar. \n");
    printf("\t      Aperte a tecla <ENTER> para continuar a operação. !! \n");
    getchar();
}

void deletarAgendamento(void) {
    system("clear||cls");
    printf("\n");
    printf("|| ========================================================================= ||\n");
    printf("||                                                                           ||\n");
    printf("||               ===========================================                 ||\n");
    printf("||               =                                         =                 ||\n");
    printf("||               =             Clínica em Casa             =                 ||\n");
    printf("||               =                                         =                 ||\n");
    printf("||               ===========================================                 ||\n");
    printf("||              Desenvolvido por @ehaisa -- desde Março, 2024                ||\n");
    printf("||                                                                           ||\n");
    printf("|| ========================================================================= ||\n");
    printf("||                                                                           ||\n");
    printf("||                  = = = = Deletar Agendamento = = = =                      ||\n");
    printf("||                                                                           ||\n");
    printf("||                                                                           ||\n");
    printf("||           Informe o CPF do paciente agendado que deseja EXCLUIR:          ||\n");
    printf("||                                                                           ||\n");
    printf("||                                                                           ||\n");
    printf("|| ========================================================================= ||\n");
    printf("\n");
    printf("\t          ATENÇÃO! Essa ação NÃO poderá ser desfeita. \n");
    printf("\t\t      Tem certeza que deseja prosseguir? \n");
    printf("\n");
    printf("\t       Aperte a tecla <ENTER> para continuar a operação. !! \n");
    getchar();
}