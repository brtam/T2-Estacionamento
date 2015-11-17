#include <iostream>
#include "Vaga.h"

using namespace std;

void Vaga::ocupa(bool tipo)
{
//    cout << tipo << endl;
    if(tipo == 1)
        preferenciais--;
    else
       normais--;
}

Vaga::Vaga()
{
//    normais = 10;
//    preferenciais = 3;
}

int Vaga::VagasN()
{
    return normais;
}

int Vaga::VagasPref()
{
    return preferenciais;
}
