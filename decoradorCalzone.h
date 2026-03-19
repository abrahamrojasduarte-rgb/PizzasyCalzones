//
// Created by ESCINF on 19/03/2026.
//

#ifndef CLASE_10_DECORADORCALZONE_H
#define CLASE_10_DECORADORCALZONE_H
#include "Calzone.h"


class decoradorCalzone : public Calzone {
protected:
    Calzone* calzone;
public:
    decoradorCalzone();
    explicit decoradorCalzone(Calzone* calzone);
    ~decoradorCalzone() override;
};


#endif //CLASE_10_DECORADORCALZONE_H
