//
// Created by ESCINF on 19/03/2026.
//

#ifndef CLASE_10_CALZONE_H
#define CLASE_10_CALZONE_H
#include <iostream>
using namespace std;

class Calzone {
public:
    virtual string descripcion()const =0;
    virtual double costo()const =0;
    virtual ~Calzone(){}
};


#endif //CLASE_10_CALZONE_H