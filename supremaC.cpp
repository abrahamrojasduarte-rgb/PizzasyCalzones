//
// Created by Abraham on 3/19/2026.
//

#include "supremaC.h"

double supremaC::costo() const {
    return this->ingre->costo() + 500;
}

string supremaC::descripcion() const {
    return this->ingre->descripcion()+" supremo";
}

supremaC::supremaC() {
    this ->ingre = nullptr;
}

supremaC::supremaC(Ingredientes *ingre) {
    this->ingre = ingre;
}
