//
// Created by ESCINF on 19/03/2026.
//

#include "Suprema.h"

#include "Peperoni.h"

double Suprema::costo() const {
    return this->pizza->costo()+1200;
}
string Suprema::descripcion()const {
    return this->pizza->descripcion() + " suprema";
}
Suprema::Suprema( Ingredientes* sup) {
    this->pizza = sup;
}

Suprema::Suprema() {
    this->pizza = nullptr;
}
