//
// Created by ESCINF on 19/03/2026.
//

#ifndef CLASE_10_HAWAIIANA_H
#define CLASE_10_HAWAIIANA_H
#include "decoradorPizza.h"


class Hawaiiana: public decoradorPizza {
public:
    Hawaiiana();
    Hawaiiana(Ingredientes* haw);
    double costo()const override;
    string descripcion()const override;
};


#endif //CLASE_10_HAWAIIANA_H