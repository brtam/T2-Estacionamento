#include<iostream>

using namespace std;

class Vaga
{
private:
    bool situacao; //false (0) or true (1)
    int numero;
//    vector<int> vagas;
public:

    Vaga(int n);
    void livre();
    int sit_livre(int s);
    bool getsituacao();
//      float contador();
};

Vaga::Vaga(int n)
{
    situacao = 0;
    numero = n;
}

int sit_livre (int s)
{
    int i;
    for(i=0; i<10; i++);
        s = i;
    return s;

}

void Vaga::livre()
{
    cout << "Vaga livre" << endl;
    situacao = true;
}

bool Vaga::getsituacao()
{
    return situacao;
}


int main()
{
    Vaga vaga1(1), vaga2(1);

    vaga1.livre();

        cout << "vaga livre" << vaga1.getsituacao() << endl;   
         
        cout << "vaga livre" << vaga2.getsituacao() << endl;
    

    //entrada de veículo Vaga ocupada -1 ; saída de veículo Vaga +1 livre; 	limite vagas 10.

}
