//
// Created by Abraham on 3/19/2026.
//

#ifndef CLASE_10_ESCANDALOSOS_H
#define CLASE_10_ESCANDALOSOS_H
#include "decoradorCalzone.h"


class Escandalosos : public decoradorCalzone{
public:
    Escandalosos();
    Escandalosos(Ingredientes* esc);
    string descripcion()const override;
    double costo()const override;
};


#endif //CLASE_10_ESCANDALOSOS_H