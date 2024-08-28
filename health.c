// ESTE PROGRAMA ESTÁ SENDO FEITO INSPIRADO NO MATERIAL DE APOIO DISPONIBILIZADO PELO PROFESSOR FLAVIUS
// GORGÔNIO, disponível em @FlaviusGorgonio https://github.com/FlaviusGorgonio/LinguaSolta.git
// ASSIM COMO ESTÁ SENDO PRODUZIDO COM INSPIRAÇÃO E O AUXÍLIO DE HILDEMBERG ELING DE ARAUJO LUCENA @Hildemberg986 
// disponível em https://github.com/Hildemberg986/projetoHotel.git
// UTILIZAÇÃO DO CONTEÚDO E MATERIAIS VISTOS E DADOS EM SALA DE AULA, E AUXÍLIO DO CHATGPT

#include "./telas/telasmenu.h"
#include "./logica/logic_telamain.h"

int main(void)
{
    char option;
    do
    {
        option = telaMain();
        logic_telamain(option);

    } while (option != '0');
    return 0;
}