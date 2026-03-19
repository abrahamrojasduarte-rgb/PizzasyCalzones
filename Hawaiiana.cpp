//
// Created by ESCINF on 19/03/2026.
//

#include "Hawaiiana.h"

Hawaiiana::Hawaiiana() {
    this->pizza = nullptr;
}

Hawaiiana::Hawaiiana(Ingredientes *haw) {
    this->pizza = haw;
}

double Hawaiiana::costo() const {
    return this->pizza->costo() + 800;
}
string Hawaiiana::descripcion() const {
    return this->pizza->descripcion()+ " hawaiiana";
}
