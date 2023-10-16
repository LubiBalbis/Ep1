#include <iostream>
#include <string>
#include "Sinal.h"
#include "Somador.h"



Somador::Somador(){
};

Somador::~Somador(){
};

Somador::processar(Sinal* sinalIN1, Sinal* sinalIN2){

    int i=0;

    if (sinalIN1->getComprimento() > sinalIN2->getComprimento()){ //decide qual sinal é menor para usar o comprimento de referencia
        Sinal** somado = new Sinal*[sinalIN2getComprimento()];
    }

    else
        Sinal** somado = new Sinal*[sinalIN1getComprimento()];



    while ( i < sinalIN1->getComprimento() && i < sinalIN2->getComprimento() ){
        somado[i] = sinalIN1[i]->getSequencia() + sinalIN1[i]->getSequencia();
    }

    return somado;
    
}
