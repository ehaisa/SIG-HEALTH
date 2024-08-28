#include "dadosArquivos.h"

/// As funções foram retiradas ou feitas inspiradas no projeto de @Hildemberg986
/// que pode ser encontrado pelo link: https://github.com/Hildemberg986/projetoHotel.git
/// assim como foram feitas com o auxílio do chatGPT.

void salvar_arq_paciente(Paciente novo_paciente) {
    //Abre o arquivo e define um ponteiro para o mesmo
    FILE *arquivo = fopen("pacientes.db", "ab");

    if (arquivo != NULL)
    {
        //Escreve o valor novo_paciente do tamanho do tipo Paciente uma vez no arquivo
        fwrite(&novo_paciente, sizeof(Paciente), 1, arquivo);
        //Fecha o arquivo aberto
        fclose(arquivo);
    }
    else
    {
        printf("Erro ao abrir o arquivo para escrita.\n");
    }
}

void pesquisar_arq_paciente(const char *cpfProcurado) {
    //Abre o arquivo e define um ponteiro para o mesmo
    FILE *arquivo = fopen("pacientes.db", "rb"); 
    if (arquivo != NULL)
    {
        Paciente paciente;

        // Vai ler todos os pacientes que tiver no arquivo
        while (fread(&paciente, sizeof(Paciente), 1, arquivo) == 1)
        {
            // Verifica se há algum CPF igual ao pesquisado no arquivo
            if (strcmp(paciente.cpf, cpfProcurado) == 0) {
                
                // Exibe a ficha do paciente
                system("clear||cls");
                printf("||     =====================================     ||\n");
                printf("||     =                                   =     ||\n");
                printf("||     =         Ficha do Paciente         =     ||\n");
                printf("||     =                                   =     ||\n");
                printf("||     =====================================     ||\n");
                printf("\n");
                printf("     - Nome: %s\n", paciente.nome);
                printf("     - CPF: %s\n", paciente.cpf);
                printf("     - Data de Nascimento: %s\n", paciente.data);
                printf("     - Sexo: %s\n", paciente.sexo);
                printf("     - Contato: %s\n", paciente.contato);
                printf("     - Condições Médicas: %s\n", paciente.condicoes);
                printf("\n");
                printf("||     =====================================     ||\n");
                break;  // Encerra a busca

            }

            else {
                printf("\t Paciente com CPF %s não encontrado! Tente novamente.\n", cpfProcurado);
            }
        }

        //Fecha o arquivo aberto
        fclose(arquivo);

        // Segura a tela da ficha
        printf("\t      Aperte a tecla <ENTER> para continuar a operação. !! \n");
        getchar();
    }
    else
    {
        printf("\t Erro ao abrir o arquivo. Tente novamente mais tarde. \n");
    }
}

void editar_arq_paciente(const char *cpfProcurado) {
    FILE *arquivo = fopen("pacientes.db", "rb");
    FILE *arquivo_temp = fopen("pacientes_temp.db", "wb"); // Abre um arquivo temporário para escrever os novos dados
    
    if (arquivo != NULL || arquivo_temp != NULL) {
        Paciente paciente;

        while (fread(&paciente, sizeof(Paciente), 1, arquivo) == 1) {
            if (strcmp(paciente.cpf, cpfProcurado) == 0) {
                
                // Campo de preenchimento dos novos dados
                printf("Nome: ");
                scanf("%98[^\n]", paciente.nome);
                getchar();
                
                printf("Data de Nascimento (dd/mm/aaaa): ");
                scanf("%10[^\n]", paciente.data);
                getchar();
                
                printf("Sexo (F ou M): ");
                scanf("%1s", paciente.sexo);
                getchar();
                
                printf("Contato: ");
                scanf("%19[^\n]", paciente.contato);
                getchar();
                
                printf("Condições Médicas: ");
                scanf("%98[^\n]", paciente.condicoes);
                getchar();
                
                // Escreve o paciente atualizado no arquivo temporário
                fwrite(&paciente, sizeof(Paciente), 1, arquivo_temp);
            } else {
                // Copia o paciente inalterado para o arquivo temporário
                fwrite(&paciente, sizeof(Paciente), 1, arquivo_temp);
            }
    }

    } else {
        printf("\t Paciente com CPF %s não encontrado! Tente novamente.\n", cpfProcurado);
    }
    
    // Fecha os arquivos abertos
    fclose(arquivo);
    fclose(arquivo_temp);

    // Exclui o arquivo original e o substitui pelo arquivo temporário
    remove("pacientes.db");
    rename("pacientes_temp.db", "pacientes.db");

    printf("\t      Informações do paciente atualizadas com sucesso.\n");
    printf("\t      Aperte a tecla <ENTER> para continuar a operação. !! \n");
    getchar();

}

void deletar_arq_paciente(const char *cpfProcurado) {
    FILE *arquivo = fopen("pacientes.db", "rb");
    FILE *arquivo_temp = fopen("pacientes_temp.db", "wb"); // Faz o mesmo processo que o editar
    
    if (arquivo != NULL || arquivo_temp != NULL) {
        Paciente paciente;
        char delConfirm;

        while (fread(&paciente, sizeof(Paciente), 1, arquivo) == 1) {
            if (strcmp(paciente.cpf, cpfProcurado) == 0) {
                // Exibe a ficha do paciente resumida
                system("clear||cls");
                printf("||     =====================================     ||\n");
                printf("||     =                                   =     ||\n");
                printf("||     =         Ficha do Paciente         =     ||\n");
                printf("||     =                                   =     ||\n");
                printf("||     =====================================     ||\n");
                printf("\n");
                printf("     - Nome: %s\n", paciente.nome);
                printf("     - CPF: %s\n", paciente.cpf);
                printf("\n");
                printf("||     =====================================     ||\n");
                printf("\t  ATENÇÃO! Essa ação NÃO poderá ser desfeita. \n");
                printf("\t   Tem certeza que deseja prosseguir? (s/n) \n");
                scanf(" %c", &delConfirm);
                getchar();

                if(delConfirm == 's' || delConfirm == 'S') {
                    paciente.del = true;

                    fwrite(&paciente, sizeof(Paciente), 1, arquivo_temp);
                    printf("\t   Paciente EXCLUÍDO com sucesso! \n");
                } else {
                    // Se o usuário não confirmar, copia o paciente para o arquivo temporário
                    fwrite(&paciente, sizeof(Paciente), 1, arquivo_temp);
                    printf("\t   Operação CANCELADA com sucesso! \n");
                }
            } else {
            // Copia o paciente inalterado para o arquivo temporário
            fwrite(&paciente, sizeof(Paciente), 1, arquivo_temp);

            printf("\t Paciente com CPF %s não encontrado! Tente novamente.\n", cpfProcurado);
            }
        }
    
        fclose(arquivo);
        fclose(arquivo_temp);

        // Substitui o arquivo original pelo arquivo temporário, assim como o editar
        remove("pacientes.db");
        rename("pacientes_temp.db", "pacientes.db");

        printf("\t   Aperte a tecla <ENTER> para continuar a operação. !! \n");
        getchar();
    } else {
            printf("\t Erro ao abrir o arquivo. Tente novamente mais tarde. \n");
        }
}


 ////// A PARTIR DAQUI, OS PROCESSOS SE REPETEM, MAS DESSA VEZ COM OS AGENDAMENTOS

void salvar_arq_agendamento(Agendamento nova_agenda) {
    FILE *arquivo = fopen("agendamentos.db", "ab");

    if (arquivo != NULL)
    {
        fwrite(&nova_agenda, sizeof(Agendamento), 1, arquivo);
        fclose(arquivo);
    }
    else
    {
        printf("Erro ao abrir o arquivo para escrita.\n");
    }
}

void pesquisar_arq_agendamento(const char *cpfProcurado) {
    FILE *arquivo = fopen("agendamentos.db", "rb"); 
    if (arquivo != NULL)
    {
        Agendamento agenda;

        while (fread(&agenda, sizeof(Agendamento), 1, arquivo) == 1)
        {
            if (strcmp(agenda.cpf_cadastrado, cpfProcurado) == 0) {
                
                system("clear||cls");
                printf("||     =====================================     ||\n");
                printf("||     =                                   =     ||\n");
                printf("||     =        Detalhes da Agenda         =     ||\n");
                printf("||     =                                   =     ||\n");
                printf("||     =====================================     ||\n");
                printf("\n");
                printf("     - CPF: %s\n", agenda.cpf_cadastrado);
                printf("     - Data: %s\n", agenda.data_agendada);
                printf("     - Horário: %s\n", agenda.horario);
                printf("     - Serviço(s): %s\n", agenda.servico_agendado);
                printf("\n");
                printf("||     =====================================     ||\n");
                break;

            }

            else {
                printf("\t Paciente com CPF %s não encontrado! Tente novamente.\n", cpfProcurado);
            }
        }

        fclose(arquivo);

        printf("\t      Aperte a tecla <ENTER> para continuar a operação. !! \n");
        getchar();
    }
    else
    {
        printf("\t Erro ao abrir o arquivo. Tente novamente mais tarde. \n");
    }
}


void editar_arq_agendamento(const char *cpfProcurado) {
    FILE *arquivo = fopen("agendamentos.db", "rb");
    FILE *arquivo_temp = fopen("agendamentos_temp.db", "wb");
    
    if (arquivo != NULL || arquivo_temp != NULL) {
        Agendamento agenda;

        while (fread(&agenda, sizeof(Agendamento), 1, arquivo) == 1) {
            if (strcmp(agenda.cpf_cadastrado, cpfProcurado) == 0) {
                
                printf("Data (dd/mm/aaaa): ");
                scanf("%10[^\n]", agenda.data_agendada);
                getchar();
                
                printf("Horário (hh:mm): ");
                scanf("%5s", agenda.horario);
                getchar();
                
                printf("Serviço(s): ");
                scanf("%98[^\n]", agenda.servico_agendado);
                getchar();
                
                fwrite(&agenda, sizeof(Agendamento), 1, arquivo_temp);
            } else {

                fwrite(&agenda, sizeof(Agendamento), 1, arquivo_temp);
            }
    }

    } else {
        printf("\t Agendamento com CPF %s não encontrado! Tente novamente.\n", cpfProcurado);
    }

    fclose(arquivo);
    fclose(arquivo_temp);

    remove("agendamentos.db");
    rename("agendamentos_temp.db", "agendamentos.db");

    printf("\t      Informações do agendamento atualizadas com sucesso.\n");
    printf("\t      Aperte a tecla <ENTER> para continuar a operação. !! \n");
    getchar();

}

// A versão feita anteriormente estava com problema, então invés do else, foi colocado uma flag 'encontrado'
// para poder mostrar a mensagem de erro, caso o programa não encontrasse nenhum CPF cadastrado
// mas de resto, segue a mesma lógica

void deletar_arq_agendamento(const char *cpfProcurado) {
    FILE *arquivo = fopen("agendamentos.db", "rb");
    FILE *arquivo_temp = fopen("agendamentos_temp.db", "wb");

    if (arquivo != NULL && arquivo_temp != NULL) {
        Agendamento agenda;
        char delConfirm;
        int encontrado = 0;  // Flag para verificar se o agendamento foi encontrado

        while (fread(&agenda, sizeof(Agendamento), 1, arquivo) == 1) {
            if (strcmp(agenda.cpf_cadastrado, cpfProcurado) == 0) {

                // Exibe a ficha do agendamento resumida
                system("clear||cls");
                printf("||     =====================================     ||\n");
                printf("||     =                                   =     ||\n");
                printf("||     =        Detalhes da Agenda         =     ||\n");
                printf("||     =                                   =     ||\n");
                printf("||     =====================================     ||\n");
                printf("\n");
                printf("     - Data: %s\n", agenda.data_agendada);
                printf("     - Horário: %s\n", agenda.horario);
                printf("\n");
                printf("||     =====================================     ||\n");
                printf("\t  ATENÇÃO! Essa ação NÃO poderá ser desfeita. \n");
                printf("\t   Tem certeza que deseja prosseguir? (s/n) \n");
                scanf(" %c", &delConfirm);
                getchar();

                if(delConfirm == 's' || delConfirm == 'S') {
                    printf("\t   Agendamento EXCLUÍDO com sucesso! \n");
                    encontrado = 1;  // Marca que o agendamento foi encontrado e excluído
                } else {

                    fwrite(&agenda, sizeof(Agendamento), 1, arquivo_temp);
                    printf("\t   Operação CANCELADA com sucesso! \n");
                }
            } else {

                fwrite(&agenda, sizeof(Agendamento), 1, arquivo_temp);
            }
        }

        if (!encontrado) {
            printf("\t   Agendamento com CPF %s não encontrado! Tente novamente.\n", cpfProcurado);
        }
    
        fclose(arquivo);
        fclose(arquivo_temp);

        remove("agendamentos.db");
        rename("agendamentos_temp.db", "agendamentos.db");

        printf("\t   Aperte a tecla <ENTER> para continuar a operação. !! \n");
        getchar();
    } else {
        printf("\t Erro ao abrir o arquivo. Tente novamente mais tarde. \n");
    }
}