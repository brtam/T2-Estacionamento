#ifndef VAGA_H
#define VAGA_H

#include <iostream>

using namespace std;

class Vaga
{
private:
    int normais = 10;
    int preferenciais = 3;
//    int normais, preferenciais;
    bool tipo;

public:
    Vaga();
    void ocupa(bool tipo);
    int VagasN();
    int VagasPref();
};

#endif // VAGA_H
