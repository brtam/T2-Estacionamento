#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>


#include "Carro.h"
//#include "Pagamento.h"
//#include "Vaga.h"

using namespace std;

int main()
{
    cout << "######################################" << endl;
    cout << "Programa de Controle de Estacionamento" << endl << endl;
    cout << "######################################" << endl;

    ifstream input;
    ofstream output;
    input.open("entrada.txt",ios::in);
    output.open("saida.txt",ios::out);

    if (!input.is_open()){
        cout << "Nao foi possivel abrir o arquivo" << endl;
		exit(1);
    }

    int ticket = 0;
    string p, m, c;
    int h_in, m_in, s_in, h_out, m_out, s_out;
	bool pag, pref;

    do
	{
        if(!input.fail()) {
			input >> p, m , c, h_in, m_in, s_in, h_out, m_out, s_out, pag, pref;

			Carro car(string p, string m, string c, int h_in, int m_in, int s_in, int h_out, int m_out, int s_out, bool pref);

            ticket = ticket++;
            output << "Ticket no: " << ticket << endl;
            output << car << endl;
		}
	} while(input.good());

    if(input.bad() || !input.eof()) {
		cout << "Erro fatal!" << endl;
		exit(1);
	}

	cout << "Fechando o arquivo..." << endl;
	input.close();
	output.close();

    return 0;
}
