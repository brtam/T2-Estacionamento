#include <iostream>

class Pagamento {

private:
    bool pago;

public:
    bool getPago();
    pagamento(bool pag);

};

Pagamento::Pagamento(bool pag)
{
    pago=pag;
}

void pagamento::getPago()
{
    return pago;
}

