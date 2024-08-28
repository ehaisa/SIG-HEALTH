#ifndef database_functions_H
#define database_functions_H
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "../telas/telaspaciente.h"
#include "../telas/telasagendamento.h"
typedef struct cadastrarPaciente
{
    char nome[99];
    char cpf[12];
    char data[11];
    char sexo[2];
    char contato[20];
    char condicoes[99];
    bool del;
} Paciente;

typedef struct cadastrarAgendamento {
    char cpf_cadastrado[12];
    char data_agendada[11];
    char horario[6];
    char servico_agendado[99];
    bool del;
} Agendamento;

void add_paciente(Paciente novo_paciente);
void salvar_arq_paciente(Paciente novo_paciente);
void pesquisar_arq_paciente();
void editar_arq_paciente();
void deletar_arq_paciente();
void salvar_arq_agendamento(Agendamento nova_agenda);
void pesquisar_arq_agendamento();
void editar_arq_agendamento();
void deletar_arq_agendamento();
#endif