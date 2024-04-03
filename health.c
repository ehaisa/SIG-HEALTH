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