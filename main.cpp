#include <iostream>
#include <fstream>
#include <vector>

#include "Carro.h"
#include "Pagamento.h"
#include "Vaga.h"

using namespace std;

int main()
{
    cout << "######################################" << endl;
    cout << "Programa de Controle de Estacionamento" << endl << endl;
    cout << "######################################" << endl;

    ifstream input
    input.open("entrada.txt");

    if (!arq.is_open()){
        cout << "Nao foi possivel abrir o arquivo" << endl;
		exit(1);
    }

    int ticket = 0;
    do
	{
		string p, m, c;
		int h_in, m_in, s_in, h_out, m_out, s_out;
		bool pag, pref;

		if(!input.fail()) {
			input >> p, m , c, h_in, m_in, s_in, h_out, m_out, s_out, pag, pref;
            Carro(string p, string m, string c, int h_in, int m_in, int s_in, int h_out, int m_out, int s_out, bool pref);
            ticket = ticket++;
            cout << car << endl;
		}
	} while(input.good());

    if(input.bad() || !input.eof()) {
		cout << "Erro fatal!" << endl;
		exit(1);		// Aborta programa
	}

	cout << "Fechando o arquivo..." << endl;
	input.close();


    return 0;
}
