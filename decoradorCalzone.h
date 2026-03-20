//
// Created by ESCINF on 19/03/2026.
//

#ifndef CLASE_10_DECORADORCALZONE_H
#define CLASE_10_DECORADORCALZONE_H
#include "Ingredientes.h"


class decoradorCalzone : public Ingredientes {
protected:
    Ingredientes* ingre;
public:
    decoradorCalzone();
    explicit decoradorCalzone(Ingredientes* ingre);
    ~decoradorCalzone() override;
};


#endif //CLASE_10_DECORADORCALZONE_H
