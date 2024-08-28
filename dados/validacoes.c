#include "validacoes.h"
#include <unistd.h>

/// As funções foram retiradas ou feitas inspiradas no projeto de @Hildemberg986
/// que pode ser encontrado pelo link: https://github.com/Hildemberg986/projetoHotel.git
/// assim como foram feitas com o auxílio do chatGPT.

bool valida_cpf(const char *imputCPF)
{
    char cpf_format[12]; // Declare um array para armazenar o CPF formatado
    char cpf[12];        // Declare um array para armazenar o CPF sem formatação
    int i = 0;
    int j = 0;

    // Percorre o CPF com pontos e traço, copiando apenas os dígitos
    while (imputCPF[i])
    {
        if (isdigit(imputCPF[i]))
        {
            cpf_format[j++] = imputCPF[i];
        }
        i++;
    }
    cpf_format[j] = '\0'; // Adicione o caractere nulo ao final do array formatado

    strcpy(cpf, cpf_format); // Copie o CPF formatado para o CPF não formatado

    // Verifica se o CPF tem 11 dígitos
    if (strlen(cpf) != 11)
    {
        return false;
    }

    // Verifica se todos os dígitos são iguais, o que é inválido para um CPF válido
    for (i = 1; i < 11; i++)
    {
        if (cpf[i] != cpf[0])
        {
            break;
        }
    }
    if (i == 11)
    {
        return false;
    }

    // Calcula o primeiro dígito verificador
    int soma = 0;
    int peso = 10;
    for (i = 0; i < 9; i++)
    {
        soma += (cpf[i] - '0') * peso;
        peso--;
    }
    int digito1 = soma % 11;
    if (digito1 < 2)
    {
        digito1 = 0;
    }
    else
    {
        digito1 = 11 - digito1;
    }
    if (digito1 != cpf[9] - '0')
    {
        return false;
    }

    // Calcula o segundo dígito verificador
    soma = 0;
    peso = 11;
    for (i = 0; i < 10; i++)
    {
        soma += (cpf[i] - '0') * peso;
        peso--;
    }
    int digito2 = soma % 11;
    if (digito2 < 2)
    {
        digito2 = 0;
    }
    else
    {
        digito2 = 11 - digito2;
    }
    if (digito2 != cpf[10] - '0')
    {
        return false;
    }

    // Se passou por todas as verificações, o CPF é válido
    return true;
}

void clear_last_lines(int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\033[F\033[K"); // Move o cursor para cima e limpa a linha
    }
}

char read_cpf(char *cpf)
{
    bool first = true;
    int cpf_valido = false;
    do
    {
        printf("\t\t      Digite o CPF do PACIENTE (apenas números). \n");
        scanf("%12[^\n]", cpf);
        getchar();

        // Chama a função para validar o CPF
        cpf_valido = valida_cpf(cpf);

        if (!cpf_valido)
        {
            if (!first)
                clear_last_lines(2);
            else
                clear_last_lines(1);
            printf("\t\t\tCPF inválido. Por favor, digite novamente.\n");
        };
        first = false;
    } while (!cpf_valido);
    return *cpf;
}


#define ANO_MINIMO 1900  // define que o ano mais baixo que o paciente pode ter nascido

// Função para verificar se um ano é bissexto
bool anoBissexto(int ano) {
    return (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);
}

// Função para validar a data
bool validarData(int dia, int mes, int ano) {
    if (ano < ANO_MINIMO) return false;
    if (mes < 1 || mes > 12) return false;

    // Define a quantidade de dias de cada mês
    int diasDoMes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Ajusta a quantidade de dias de fevereiro no ano bissexto
    if (anoBissexto(ano)) {
        diasDoMes[1] = 29;
    }

    // Verifica o dia
    if (dia < 1 || dia > diasDoMes[mes - 1]) return false;

    return true;
}

// Função para validar data
void read_data(char *data) {
    int dia, mes, ano;
    bool data_valida = false;

    // Loop para continuar solicitando a data até que uma válida seja fornecida
    do {
        printf("\t\t   Digite a DATA (dd/mm/aaaa). \n");
        scanf("%10[^\n]", data);
        getchar();

        // Converte o formato da data
        if (sscanf(data, "%d/%d/%d", &dia, &mes, &ano) == 3) {
            data_valida = validarData(dia, mes, ano);
        }

        // Se a data não for válida, exibe uma mensagem de erro e repete o loop
        if (!data_valida) {
            printf("\t\t   Data inválida. Por favor, tente novamente.\n");
        }

    } while (!data_valida);
}