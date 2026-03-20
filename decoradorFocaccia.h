//
// Created by Abraham on 3/19/2026.
//

#ifndef CLASE_10_DECORADORFOCACCIA_H
#define CLASE_10_DECORADORFOCACCIA_H
#include "Ingredientes.h"

class decoradorFocaccia: public Ingredientes {
protected:
    Ingredientes* ingre;
public:
    explicit decoradorFocaccia(Ingredientes* ingre);
    decoradorFocaccia();
    ~decoradorFocaccia() override;
};


#endif //CLASE_10_DECORADORFOCACCIA_H