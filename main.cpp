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
    vector<Carro> carro;
    vector<Carro>::iterator iter;

    cout << "######################################" << endl;
    cout << "Programa de Controle de Estacionamento" << endl;
    cout << "######################################" << endl << endl;

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

    do{
        input >> p >> m >> c >> h_in >> m_in >> s_in >> h_out >> m_out >> s_out >> pag >> pref;
        if(!input.fail()) {
            ticket++;
            Carro car(p, m, c, h_in, m_in, s_in, h_out, m_out, s_out, pref);
			carro.push_back(car);

            output << "Ticket no: " << ticket << endl;
            output << car << endl;
		}
	} while(input.good());

    if(input.bad() || !input.eof()) {
		cout << "Erro fatal!" << endl;
		exit(1);
	}

	cout << "Fechando o arquivos..." << endl;
	input.close();
	output.close();

    return 0;
}
