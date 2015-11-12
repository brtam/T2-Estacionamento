#include <iostream>
#include "Pagamento.h"

using namespace std;

Pagamento::Pagamento(bool pag)
{
    pago=pag;
}

bool Pagamento::getPago()
{
    return pago;
}

