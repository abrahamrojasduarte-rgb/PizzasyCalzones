//
// Created by Abraham on 3/19/2026.
//

#include "decoradorFocaccia.h"

decoradorFocaccia::decoradorFocaccia() {
    this->ingre = nullptr;
}

decoradorFocaccia::decoradorFocaccia(Ingredientes *ingre) {
    this->ingre = ingre;
}

decoradorFocaccia::~decoradorFocaccia() {
    delete this->ingre;
}
