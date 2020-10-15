#include <iostream>
#include "suma.h"
#include "resta.h"


using namespace std;

int main() {
    
    system("cls");
    cout<<"\t\tOperacion Suma\n\n";

    suma s;  // objeto
    resta r;

    s.cargar1();
    s.cargar2();
    s.operar();
    s.mostrarResultado();

    cout<<"\n\t\tOperacion Resta\n\n";
    r.cargar1();
    r.cargar2();
    r.operar();
    r.mostrarResultado();
    

    return 0;
    
}
