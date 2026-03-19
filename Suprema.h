//
// Created by ESCINF on 19/03/2026.
//

#ifndef CLASE_10_SUPREMA_H
#define CLASE_10_SUPREMA_H
#include "decoradorPizza.h"


class Suprema : public decoradorPizza {
public:
    Suprema();
    Suprema(Ingredientes* suprema);
    string descripcion()const override;
    double costo()const override;
};


#endif //CLASE_10_SUPREMA_H