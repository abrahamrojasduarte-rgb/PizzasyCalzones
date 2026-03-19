//
// Created by ESCINF on 19/03/2026.
//

#ifndef CLASE_10_PEPERONI_H
#define CLASE_10_PEPERONI_H
#include "decoradorPizza.h"


class Peperoni : public decoradorPizza {
public:
    Peperoni();
    Peperoni(Ingredientes* pep);
    string descripcion()const override;
    double costo()const override;
};


#endif //CLASE_10_PEPERONI_H