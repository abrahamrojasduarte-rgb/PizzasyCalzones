//
// Created by Abraham on 3/19/2026.
//

#ifndef CLASE_10_FACEITECARRO_H
#define CLASE_10_FACEITECARRO_H
#include "decoradorFocaccia.h"


class FAceiteCarro : public decoradorFocaccia{
public:
    FAceiteCarro();
    FAceiteCarro( Ingredientes* ingredientes);
    double costo()const override;
    string descripcion()const override;
};


#endif //CLASE_10_FACEITECARRO_H