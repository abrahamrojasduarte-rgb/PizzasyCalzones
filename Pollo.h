//
// Created by Abraham on 3/19/2026.
//

#ifndef CLASE_10_POLLO_H
#define CLASE_10_POLLO_H
#include "decoradorCalzone.h"


class Pollo : public decoradorCalzone{
public:
    string descripcion() const override;
    double costo() const override;
    Pollo( Ingredientes* pollo);
    Pollo();
};


#endif //CLASE_10_POLLO_H