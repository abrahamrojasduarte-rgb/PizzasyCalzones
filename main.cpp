#include <iostream>
using namespace std;
#include "Ingredientes.h"
#include"pizzaBase.h"
#include "Suprema.h"
#include "Peperoni.h"
#include "Hawaiiana.h"
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    Ingredientes* pizza1 = new Suprema((new Peperoni(new pizzaBase())));

    cout<<pizza1->costo()<<endl;
    cout<<pizza1->descripcion()<<endl;
    return 0;
}