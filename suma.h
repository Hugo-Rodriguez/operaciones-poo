// #pragma once
// funcion preprocesador
#ifndef _SUMA
#define _SUMA

#include <iostream>
#include "Operacion.h"

using namespace std;

// declaracion de clases
class suma : public Operacion
{
private:
    /* data */
public:    
    void operar();
};


#endif