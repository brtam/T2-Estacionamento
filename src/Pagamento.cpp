#include <iostream>

class Pagamento {

private:
    bool pago;

public:
    bool getPago();
    Pagamento(bool pag);

};

Pagamento::Pagamento(bool pag)
{
    pago=pag;
}

bool Pagamento::getPago()
{
    return pago;
}

