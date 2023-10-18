#include <iostream>
#include <string>
#include "Piloto.h"
#include "Amplificador.h"
#include "Sinal.h"
#include "Integrador.h"
#include "ModuloRealimentado.h"

#define vInicial 0;

ModuloRealimentado::ModuloRealimentado(double ganho){
    this -> ganho =  ganho;
}

ModuloRealimentado::~ModuloRealimentado(){

}

 Sinal* ModuloRealimentado::processar(Sinal* sinalIN){
    
    double sequenciaSinalInvertido[sinalIN->getComprimento()]; // vetor com o mesmo ntamanho que o sinalIn que vai alocar a seq da saidaInvertida

    sequenciaSinalInvertido[0] = vInicial;

    Sinal* diferenca = new Sinal((sinalIn->getSequencia)[0] ,1);

    
 }
