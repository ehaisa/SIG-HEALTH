#include <stdio.h>
#include <stdlib.h>
#include "telaspaciente.h"

void criarPaciente(void) {
    Paciente pessoa;

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
    printf("||                    = = = = Criar Nova Ficha = = = =                       ||\n");
    printf("||                                                                           ||\n");
    printf("||                                                                           ||\n");
    printf("||           - Nome Completo                                                 ||\n");
    printf("||           - CPF                                                           ||\n");
    printf("||           - Data de Nascimento                                            ||\n");
    printf("||           - Sexo                                                          ||\n");
    printf("||           - Número de Contato                                             ||\n");
    printf("||           - Condições Médicas                                             ||\n");
    printf("||                                                                           ||\n");
    printf("||                                                                           ||\n");
    printf("|| ========================================================================= ||\n");
    printf("\n");
    printf("\t\t      Digite o NOME do PACIENTE. \n");
    scanf("%99[^\n]", pessoa.nome);
    getchar();

    read_cpf(pessoa.cpf);
    getchar();

    read_data(pessoa.data);
    getchar();
    
    printf("\t\t      Digite o SEXO do PACIENTE (F/M). \n");
    scanf("%1s", pessoa.sexo);
    getchar();
    printf("\t\t      Digite o NÚMERO DE CONTATO do PACIENTE. \n");
    scanf("%19[^\n]", pessoa.contato);
    getchar();
    printf("\t\t      Digite CONDIÇÕES MÉDICAS do PACIENTE. \n");
    scanf("%98[^\n]", pessoa.condicoes);
    getchar();

    salvar_arq_paciente(pessoa);
}

void lerPaciente(void) {

    char cpf[12];

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
    printf("||                     = = = = Pesquisar Ficha = = = =                       ||\n");
    printf("||                                                                           ||\n");
    printf("|| ========================================================================= ||\n");
    printf("\n");
    read_cpf(cpf);
    pesquisar_arq_paciente(cpf);

}

void editarPaciente(void) {

    char cpf[12];

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
    printf("||                      = = = = Editar Ficha = = = =                         ||\n");
    printf("||                                                                           ||\n");
    printf("|| ========================================================================= ||\n");
    printf("\n");
    read_cpf(cpf);
    editar_arq_paciente(cpf);
}

void deletarPaciente(void) {
    
    char cpf[12];
    
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
    printf("||                      = = = = Deletar Ficha = = = =                        ||\n");
    printf("||                                                                           ||\n");
    printf("||                                                                           ||\n");
    printf("||               Informe o CPF do paciente que deseja EXCLUIR:               ||\n");
    printf("||                                                                           ||\n");
    printf("||                                                                           ||\n");
    printf("|| ========================================================================= ||\n");
    printf("\n");
    read_cpf(cpf);
    deletar_arq_paciente(cpf);
}