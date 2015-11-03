#ifndef CARRO_H
#define CARRO_H

#include <iostream>
#include <string>
#include <vector>

class Carro {
    friend ostream& operator<<(ostream& c, Carro& car);
    private:
        vector<int> veiculos;
        string placa;
        string modelo;
        string cor;
        int h_in, m_in, s_in, h_out, m_out, s_out,
        int h_total;
        int saldo;

    public:
        Carro(string placa, string modelo, string cor, int h_in, int m_in, int s_in, int h_out, int m_out, int s_out);
        void getInfo(string placa);
};

#endif // CARRO_H
