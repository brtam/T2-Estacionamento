#ifndef PAGAMENTO_H
#define PAGAMENTO_H

#include <iostream>

class Pagamento {

private:
    bool pago;

public:
    bool getPago();
    Pagamento(bool pag);
};

#endif // PAGAMENTO_H
