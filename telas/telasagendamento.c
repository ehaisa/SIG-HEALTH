#include <stdio.h>
#include <stdlib.h>
#include "telasagendamento.h"

void criarAgendamento(void) {

    Agendamento agendamento;

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
    printf("|| ========================================================================= ||\n");
    printf("\n");
    read_cpf(agendamento.cpf_cadastrado);
    read_data(agendamento.data_agendada);

    printf("\t Digite o horário de preferência (hh:mm): \n");
    scanf("%5[^\n]", agendamento.horario);
    getchar();

    printf("\t Quais serviços serão prestados? \n");
    scanf("%98[^\n]", agendamento.servico_agendado);
    getchar();

    salvar_arq_agendamento(agendamento);
}

void lerAgenda(void) {
    
    char cpf_cadastrado[12];

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
    printf("|| ========================================================================= ||\n");
    printf("\n");
    read_cpf(cpf_cadastrado);
    pesquisar_arq_agendamento(cpf_cadastrado);
}

void editarAgendamento(void) {

    char cpf_cadastrado[12];

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
    printf("|| ========================================================================= ||\n");
    printf("\n");
    read_cpf(cpf_cadastrado);
    editar_arq_agendamento(cpf_cadastrado);

}

void deletarAgendamento(void) {

    char cpf_cadastrado[12];

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
    printf("|| ========================================================================= ||\n");
    printf("\n");
    read_cpf(cpf_cadastrado);
    deletar_arq_agendamento(cpf_cadastrado);
}