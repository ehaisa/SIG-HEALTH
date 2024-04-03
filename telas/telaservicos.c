#include <stdio.h>
#include <stdlib.h>
#include "telaservicos.h"

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