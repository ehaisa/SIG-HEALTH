// ESTE PROGRAMA ESTÁ SENDO FEITO INSPIRADO NO MATERIAL DE APOIO DISPONIBILIZADO PELO PROFESSOR FLAVIUS
// GORGÔNIO, disponível em @FlaviusGorgonio https://github.com/FlaviusGorgonio/LinguaSolta.git

#include <stdio.h>
#include <stdlib.h>

// Assinatura das funções
void telaMain(void);
void telaSobre(void);
void telaDev(void);
void telaPacientes(void);
void telaCalendario(void);
void telaServicos(void);
void criarPaciente(void);
void lerPaciente(void);
void editarPaciente(void);
void deletarPaciente(void);
void criarAgendamento(void);
void lerAgenda(void);
void editarAgendamento(void);
void deletarAgendamento(void);
void criarServico(void);
void lerServico(void);
void editarServico(void);
void deletarServico(void);

// Programa Principal
int main(void) {
    telaMain();
    telaPacientes();
    criarPaciente();
    lerPaciente();
    editarPaciente();
    deletarPaciente();
    telaCalendario();
    criarAgendamento();
    lerAgenda();
    editarAgendamento();
    deletarAgendamento();
    telaServicos();
    criarServico();
    lerServico();
    editarServico();
    deletarServico();
    telaSobre();
    telaDev();
    return 0;
}

// Funções
void telaMain(void) {
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
    printf("||                     = = = = Tela Principal = = = =                        ||\n");
    printf("||                                                                           ||\n");
    printf("||             1. Fichas de Pacientes                                        ||\n");
    printf("||             2. Calendário                                                 ||\n");
    printf("||             3. Serviços                                                   ||\n");
    printf("||             4. Relatórios                                                 ||\n");
    printf("||             0. Sair                                                       ||\n");
    printf("||                                                                           ||\n");
    printf("|| ========================================================================= ||\n");
    printf("\n");
    printf("\t      Aperte a tecla <ENTER> para continuar a operação. !! \n");
    getchar();
}

void criarPaciente(void) {
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
    printf("||             Nome Completo:                                                ||\n");
    printf("||             CPF:                                                          ||\n");
    printf("||             Data de Nascimento:                                           ||\n");
    printf("||             Sexo:                                                         ||\n");
    printf("||             Número de Contato:                                            ||\n");
    printf("||             Condições Médicas:                                            ||\n");
    printf("||                                                                           ||\n");
    printf("||                                                                           ||\n");
    printf("|| ========================================================================= ||\n");
    printf("\n");
    printf("\t\t      Insira as informações do PACIENTE. \n");
    printf("\t      Aperte a tecla <ENTER> para continuar a operação. !! \n");
    getchar();
}

void lerPaciente(void) {
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
    printf("||                                                                           ||\n");
    printf("||               Informe o CPF do paciente que deseja pesquisar:             ||\n");
    printf("||                                                                           ||\n");
    printf("||                                                                           ||\n");
    printf("|| ========================================================================= ||\n");
    printf("\n");
    printf("\t      Aperte a tecla <ENTER> para continuar a operação. !! \n");
    getchar();
}

void editarPaciente(void) {
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
    printf("||             1. Nome                                                       ||\n");
    printf("||             2. Data de Nascimento                                         ||\n");
    printf("||             3. Número de Contato                                          ||\n");
    printf("||             4. Condições Médicas                                          ||\n");
    printf("||             0. Sair                                                       ||\n");
    printf("||                                                                           ||\n");
    printf("|| ========================================================================= ||\n");
    printf("\n");
    printf("\t      Informe a opção que deseja modificar ou adicionar. \n");
    printf("\t      Aperte a tecla <ENTER> para continuar a operação. !! \n");
    getchar();
}

void deletarPaciente(void) {
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
    printf("\t          ATENÇÃO! Essa ação NÃO poderá ser desfeita. \n");
    printf("\t\t      Tem certeza que deseja prosseguir? \n");
    printf("\n");
    printf("\t       Aperte a tecla <ENTER> para continuar a operação. !! \n");
    getchar();
}

void telaSobre(void) {
    system("clear||cls");
    printf("\n");
    printf("|| ========================================================================= ||\n");
    printf("||                                                                           ||\n");
    printf("||                Universidade Federal do Rio Grande do Norte                ||\n");
    printf("||                    Centro de Ensino Superior do Seridó                    ||\n");
    printf("||                 Departamento de Computação e Tecnologia                   ||\n");
    printf("||                     Disciplina DCT1106 -- Programação                     ||\n");
    printf("||           Sistema de Gestão para Atendimento de Saúde a Domicílio         ||\n");
    printf("||              Desenvolvido por @ehaisa -- desde Março, 2024                ||\n");
    printf("||                                                                           ||\n");
    printf("|| ========================================================================= ||\n");
    printf("||                                                                           ||\n");
    printf("||                  = = = = Propósito do Projeto = = = =                     ||\n");
    printf("||                                                                           ||\n");
    printf("||   Esse programa não foi feito para uso comercial, sendo desenvolvido      ||\n");
    printf("||   por uma aluna do curso Bacharelado em Sistemas da Informação, da        ||\n");
    printf("||   da UFRN, CERES - CAICÓ, e tendo uma natureza estritamente acadêmica     ||\n");
    printf("||   endo feito para a aplicação prática dos conceitos repassados e          ||\n");
    printf("||   discutidos em sala de aula. O programa também tem propósito avaliativo, ||\n");
    printf("||   sendo uma ferramenta para avaliar o desempenho da desenvolvedora e      ||\n");
    printf("||   a sua compreensão do assunto.                                           ||\n");
    printf("||                                                                           ||\n");
    printf("|| ========================================================================= ||\n");
    printf("\n");
    printf("\t      Aperte a tecla <ENTER> para continuar a operação. !! \n");
    getchar();
}

void telaDev(void) {
    system("clear||cls");
    printf("\n");
    printf("|| ========================================================================= ||\n");
    printf("||                                                                           ||\n");
    printf("||                Universidade Federal do Rio Grande do Norte                ||\n");
    printf("||                    Centro de Ensino Superior do Seridó                    ||\n");
    printf("||                 Departamento de Computação e Tecnologia                   ||\n");
    printf("||                     Disciplina DCT1106 -- Programação                     ||\n");
    printf("||           Sistema de Gestão para Atendimento de Saúde a Domicílio         ||\n");
    printf("||              Desenvolvido por @ehaisa -- desde Março, 2024                ||\n");
    printf("||                                                                           ||\n");
    printf("|| ========================================================================= ||\n");
    printf("||                                                                           ||\n");
    printf("||                 = = = = Sobre a Desenvolvedora = = = =                    ||\n");
    printf("||                                                                           ||\n");
    printf("||            Discente: Isa Laura D. Araújo                                  ||\n");
    printf("||            E-mail: isalaura1304@gmail.com                                 ||\n");
    printf("||            Instagram: @ehaisau                                            ||\n");
    printf("||            Git: https://github.com/ehaisa/SIG-HEALTH.git                  ||\n");
    printf("||                                                                           ||\n");
    printf("|| ========================================================================= ||\n");
    printf("\n");
    printf("\t      Aperte a tecla <ENTER> para continuar a operação. !! \n");
    getchar();
}

void telaPacientes(void) {
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
    printf("||                      = = = = Meu Fichário = = = =                         ||\n");
    printf("||                                                                           ||\n");
    printf("||             1. Cadastrar Paciente                                         ||\n");
    printf("||             2. Pesquisar Paciente                                         ||\n");
    printf("||             3. Modificar Ficha                                            ||\n");
    printf("||             4. Excluir Ficha                                              ||\n");
    printf("||             0. Retornar ao Menu Principal                                 ||\n");
    printf("||                                                                           ||\n");
    printf("|| ========================================================================= ||\n");
    printf("\n");
    printf("\t      Aperte a tecla <ENTER> para continuar a operação. !! \n");
    getchar();
}

void telaCalendario(void) {
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
    printf("||                     = = = = Meu Calendário = = = =                        ||\n");
    printf("||                                                                           ||\n");
    printf("||             1. Novo Agendamento                                           ||\n");
    printf("||             2. Visualizar Horários                                        ||\n");
    printf("||             3. Editar Agendamentos                                        ||\n");
    printf("||             4. Excluir Horários                                           ||\n");
    printf("||             0. Retornar ao Menu Principal                                 ||\n");
    printf("||                                                                           ||\n");
    printf("|| ========================================================================= ||\n");
    printf("\n");
    printf("\t      Aperte a tecla <ENTER> para continuar a operação. !! \n");
    getchar();
}

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

void telaServicos(void) {
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
    printf("||                   = = = = Serviços Prestados = = = =                      ||\n");
    printf("||                                                                           ||\n");
    printf("||             1. Novo Serviço                                               ||\n");
    printf("||             2. Visualizar Serviços                                        ||\n");
    printf("||             3. Editar Serviços                                            ||\n");
    printf("||             4. Excluir Serviço                                            ||\n");
    printf("||             0. Retornar ao Menu Principal                                 ||\n");
    printf("||                                                                           ||\n");
    printf("|| ========================================================================= ||\n");
    printf("\n");
    printf("\t      Aperte a tecla <ENTER> para continuar a operação. !! \n");
    getchar();   
}

void criarServico(void) {
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
    printf("||                   = = = = Adicionar Serviço = = = =                       ||\n");
    printf("||                                                                           ||\n");
    printf("||                                                                           ||\n");
    printf("||             Título:                                                       ||\n");
    printf("||             Valor:                                                        ||\n");
    printf("||             Descrição:                                                    ||\n");
    printf("||                                                                           ||\n");
    printf("||                                                                           ||\n");
    printf("|| ========================================================================= ||\n");
    printf("\n");
    printf("\t\t      Insira as informações do SERVIÇO. \n");
    printf("\t      Aperte a tecla <ENTER> para continuar a operação. !! \n");
    getchar();
}

void lerServico(void) {
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
    printf("||                  = = = = Visualizar Serviços = = = =                      ||\n");
    printf("||                                                                           ||\n");
    printf("||                                                                           ||\n");
    printf("||     Informe o ID do serviço que deseja pesquisar (SOMENTE NÚMEROS):       ||\n");
    printf("||                                                                           ||\n");
    printf("||                                                                           ||\n");
    printf("|| ========================================================================= ||\n");
    printf("\n");
    printf("\t      Aperte a tecla <ENTER> para continuar a operação. !! \n");
    getchar();
}

void editarServico(void) {
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
    printf("||                     = = = = Editar Serviço = = = =                        ||\n");
    printf("||                                                                           ||\n");
    printf("||             1. Título                                                     ||\n");
    printf("||             2. Valor                                                      ||\n");
    printf("||             3. Descrição                                                  ||\n");
    printf("||             0. Sair                                                       ||\n");
    printf("||                                                                           ||\n");
    printf("|| ========================================================================= ||\n");
    printf("\n");
    printf("\t      Informe a opção que deseja modificar ou adicionar. \n");
    printf("\t      Aperte a tecla <ENTER> para continuar a operação. !! \n");
    getchar();
}

void deletarServico(void) {
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
    printf("||                    = = = = Deletar Serviços = = = =                       ||\n");
    printf("||                                                                           ||\n");
    printf("||                                                                           ||\n");
    printf("||     Informe o ID do serviço que deseja EXCLUIR (SOMENTE NÚMEROS):         ||\n");
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