#include "Carro.h"
#include <iostream>
#include <string>

using namespace std;

ostream& operator<<(ostream& v, const Carro& car) {
	v << "Placa: " << car.placa << "  Modelo: " << car.modelo << "  Cor: " << car.cor <<
	"  Entrada: " << car.h_in << ":" << car.m_in << ":" << car.s_in <<
	"  Saída: " << car.h_out << ":" << car.m_out << ":" << car.s_out <<
	"Pago: " << car.pag << " Preferencial: " << car.preferencial  << endl;
	return v;
}

Carro::Carro(string p, string m, string c, int hIN, int mIN, int sIN, int hOUT, int mOUT, int sOUT, bool pag, bool pref)
{
    placa = p;
    modelo = m;
    cor = c;
    h_in = hIN;
    m_in = mIN;
    s_in = sIN;
    h_out = hOUT;
    m_out = mOUT;
    s_out = sOUT;
    preferencial = pref;
}
