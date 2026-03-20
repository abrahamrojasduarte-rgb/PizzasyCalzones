//
// Created by Abraham on 3/19/2026.
//

#include "FAceiteCarro.h"

double FAceiteCarro::costo() const {
    return this->ingre->costo() + 100;
}
string FAceiteCarro::descripcion() const {
    return this->ingre->descripcion() + " con aceite";
}

FAceiteCarro::FAceiteCarro() {
    this->ingre = nullptr;
}

FAceiteCarro::FAceiteCarro(Ingredientes *ingredientes) {
    this->ingre = ingredientes;
}
