#include <iostream>
using namespace std;
#include "Ingredientes.h"
#include"pizzaBase.h"
#include "Suprema.h"
#include "Peperoni.h"
#include "Hawaiiana.h"
#include "calzoneBase.h"
#include "Pollo.h"
#include "Escandalosos.h"
#include "supremaC.h"
#include "focacciaBase.h"
#include "FCebolla.h"
#include "FAceiteCarro.h"
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    Ingredientes* pizza1 = new Suprema((new Peperoni(new pizzaBase())));

    cout<<pizza1->costo()<<endl;
    cout<<pizza1->descripcion()<<endl;

    Ingredientes* pizza2 = new Hawaiiana((new Peperoni(new Suprema(new pizzaBase()))));
    cout<<pizza2->costo()<<endl;
    cout<<pizza2->descripcion()<<endl;

    delete pizza1;
    delete pizza2;

    Ingredientes* calzone1 = new supremaC((new Pollo(new calzoneBase())));
    cout<<calzone1->costo()<<endl;
    cout<<calzone1->descripcion()<<endl;

    Ingredientes* calzone2 = new Pollo(new Escandalosos(new calzoneBase()));
    cout<<calzone2->costo()<<endl;
    cout<<calzone2->descripcion()<<endl;

    delete calzone1;
    delete calzone2;

    Ingredientes* Focaccia1 = new FAceiteCarro(new focacciaBase());
    cout<<Focaccia1->costo()<<endl;
    cout<<Focaccia1->descripcion()<<endl;

    Ingredientes* Focaccia2 = new FCebolla(new focacciaBase());
    cout<<Focaccia2->costo()<<endl;
    cout<<Focaccia2->descripcion()<<endl;
    return 0;
}