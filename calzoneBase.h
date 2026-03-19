//
// Created by ESCINF on 19/03/2026.
//

#ifndef CLASE_10_CALZONEBASE_H
#define CLASE_10_CALZONEBASE_H
#include "decoradorCalzone.h"


class calzoneBase : public decoradorCalzone{
public:
    string descripcion() const override;
    double costo() const override;
};


#endif //CLASE_10_CALZONEBASE_H