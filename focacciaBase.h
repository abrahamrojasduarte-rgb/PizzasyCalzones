//
// Created by Abraham on 3/19/2026.
//

#ifndef CLASE_10_FOCACCIABASE_H
#define CLASE_10_FOCACCIABASE_H
#include "decoradorFocaccia.h"


class focacciaBase :public decoradorFocaccia{
public:
    string descripcion() const override;
    double costo() const override;

};


#endif //CLASE_10_FOCACCIABASE_H