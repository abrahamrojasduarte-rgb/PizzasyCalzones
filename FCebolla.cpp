//
// Created by Abraham on 3/19/2026.
//

#include "FCebolla.h"

double FCebolla::costo() const {
    return this->ingre->costo() + 450;
}
string FCebolla::descripcion() const {
    return this->ingre->descripcion() + " de cebolla";
}

FCebolla::FCebolla() {
    this->ingre = nullptr;
}

FCebolla::FCebolla(Ingredientes *ingre) {
    this->ingre = ingre;
}
