//
// Created by ESCINF on 19/03/2026.
//

#ifndef CLASE_10_PIZZA_H
#define CLASE_10_PIZZA_H
#include <iostream>
using namespace std;

class Ingredientes {
public:
    virtual string descripcion()const =0;
    virtual double costo()const =0;
    virtual ~Ingredientes(){}
};


#endif //CLASE_10_PIZZA_H