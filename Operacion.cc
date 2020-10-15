#include <iostream>
#include "Operacion.h"


using namespace std; 

void Operacion::cargar1(){      
    cout<<"Introduce valor 1: " ;
    cin >> valor1;
}

void Operacion::cargar2(){ 
    cout<<"Introduce valor 2: ";
    cin >> valor2;    
}


void Operacion::mostrarResultado(){
    cout<<"Resultado Operacion: " << resultado << endl;
}
