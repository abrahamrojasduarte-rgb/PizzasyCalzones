//
// Created by ESCINF on 19/03/2026.
//

#ifndef CLASE_10_PIZZABASE_H
#define CLASE_10_PIZZABASE_H
#include "Ingredientes.h"


class pizzaBase : public Ingredientes {
public:
    string descripcion() const override;
    double costo() const override;
};


#endif //CLASE_10_PIZZABASE_H