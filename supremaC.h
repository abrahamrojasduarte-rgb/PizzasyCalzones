//
// Created by Abraham on 3/19/2026.
//

#ifndef CLASE_10_SUPREMAC_H
#define CLASE_10_SUPREMAC_H
#include "decoradorCalzone.h"
#include "Ingredientes.h"


class supremaC : public decoradorCalzone{
public:
    supremaC();
    supremaC(Ingredientes* ingre);
    double costo()const override;
    string descripcion()const override;
};


#endif //CLASE_10_SUPREMAC_H