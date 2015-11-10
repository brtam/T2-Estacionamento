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
    void vaga ();
    int sit_livre (int s);
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
    for(i=0; i<=10; i++);
        s = i;
    return s;

}

void Vaga::vaga()
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

    //entrada de veículo Vaga ocupada -1 ; saída de veículo Vaga +1 livre; 	limite vagas 10.

}
