//
// Created by ESCINF on 19/03/2026.
//

#include "decoradorCalzone.h"
 decoradorCalzone::decoradorCalzone() {
  this-> ingre = nullptr;
}

 decoradorCalzone::decoradorCalzone(Ingredientes *calzone) {
  this-> ingre = calzone;
}

 decoradorCalzone::~decoradorCalzone() {
  delete ingre;
}