#include<iostream>

using namespace std;

class Vaga
{
    private:
        bool livre; //false (0) or true (1)
    public:
        vaga( int f, int o, int c, int d);
        void vaga();
//      float contador();
};

Vaga::vaga( int f, int o, int c, int d);
{
        livre = f;
        ocupado = o;
        coberto = c;
        descoberto = d;
}

void Vaga::vaga()
{
    cout << "Vaga livre" << endl;
        livre = true;
}

int main()
{

    cout<<"VAGA"<<endl;

}
