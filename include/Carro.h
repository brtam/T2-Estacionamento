#ifndef CARRO_H
#define CARRO_H

#include <iostream>
#include <string>

using namespace std;

class Carro {
    friend ostream& operator<<(ostream&, const Carro&);

    private:
        string placa;
        string modelo;
        string cor;
        int h_in, m_in, s_in, h_out, m_out, s_out;
        bool pag, preferencial;   ///Idoso, Cadeirante....

    public:
        Carro(string p, string m, string c, int h_in, int m_in, int s_in, int h_out, int m_out, int s_out, bool pag, bool pref);
};

#endif // CARRO_H
