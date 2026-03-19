//
// Created by ESCINF on 19/03/2026.
//

#include "decoradorPizza.h"

decoradorPizza::decoradorPizza() {
    this->pizza = nullptr;
}

decoradorPizza::decoradorPizza(Ingredientes *pizza) {
    this->pizza = pizza;
}

decoradorPizza::~decoradorPizza() {
    delete this->pizza;
}
