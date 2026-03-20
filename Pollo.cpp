//
// Created by Abraham on 3/19/2026.
//

#include "Pollo.h"

double Pollo::costo() const {
    return this->ingre->costo() + 300;
}

string Pollo::descripcion() const {
    return this->ingre->descripcion() + " con pollo ";
}

Pollo::Pollo() {
    this->ingre = nullptr;
}

Pollo::Pollo(Ingredientes *pollo) {
    this->ingre = pollo;
}
