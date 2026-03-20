//
// Created by Abraham on 3/19/2026.
//

#include "Escandalosos.h"

double Escandalosos::costo() const {
    return this->ingre->costo() + 800;
}
string Escandalosos::descripcion()const {
    return this->ingre->descripcion() + " Escandaloso ";
}

Escandalosos::Escandalosos() {
    ingre = nullptr;
}

Escandalosos::Escandalosos(Ingredientes *esc) {
    this->ingre = esc;
}
