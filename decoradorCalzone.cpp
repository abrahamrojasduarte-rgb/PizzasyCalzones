//
// Created by ESCINF on 19/03/2026.
//

#include "decoradorCalzone.h"
 decoradorCalzone::decoradorCalzone() {
  this-> calzone = nullptr;
}

 decoradorCalzone::decoradorCalzone(Calzone *calzone) {
  this-> calzone = calzone;
}

 decoradorCalzone::~decoradorCalzone() {
  delete calzone;
}