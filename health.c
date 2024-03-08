// ESTE PROGRAMA ESTÁ SENDO FEITO INSPIRADO NO MATERIAL DE APOIO DISPONIBILIZADO PELO PROFESSOR FLAVIUS
// GORGÔNIO, disponível em @FlaviusGorgonio https://github.com/FlaviusGorgonio/LinguaSolta.git

#include <stdio.h>

// Assinatura das funções
void telaMain(void);
void telaSobre(void);

// Programa Principal
int main(void) {
    telaMain();
    telaSobre();
}

// Funções
void telaMain(void) {
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
}

void telaSobre(void) {
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
}