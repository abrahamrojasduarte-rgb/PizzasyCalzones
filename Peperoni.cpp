//
// Created by ESCINF on 19/03/2026.
//

#include "Peperoni.h"

Peperoni::Peperoni() {
    this->pizza = nullptr;
}

Peperoni::Peperoni(Ingredientes* pizza ) {
    this->pizza = pizza;
}

double Peperoni::costo() const {
    return this->pizza->costo()+500;
}
string Peperoni::descripcion() const {
    return this->pizza->descripcion() + " con peperoni";
}