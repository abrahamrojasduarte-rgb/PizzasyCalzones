//
// Created by Abraham on 3/19/2026.
//

#ifndef CLASE_10_FCEBOLLA_H
#define CLASE_10_FCEBOLLA_H
#include "decoradorFocaccia.h"


class FCebolla : public decoradorFocaccia{
public:
    FCebolla();
    FCebolla(Ingredientes* ingre);
    double costo()const override;
    string descripcion()const override;
};


#endif //CLASE_10_FCEBOLLA_H