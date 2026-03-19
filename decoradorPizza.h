//
// Created by ESCINF on 19/03/2026.
//

#ifndef CLASE_10_DECORADORPIZZA_H
#define CLASE_10_DECORADORPIZZA_H
#include "Ingredientes.h"


class decoradorPizza : public Ingredientes{
protected:
    Ingredientes* pizza;
public:
    decoradorPizza();
    explicit decoradorPizza(Ingredientes* pizza);
    ~decoradorPizza() override;
};


#endif //CLASE_10_DECORADORPIZZA_H