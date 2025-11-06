
#include "Carta.h"

// CONSTRUCTOR
Carta :: Carta(std::string valor, std::string palo){
    this-> valor = valor;
    this-> palo = palo;
}

// DESTTRUCTOR
Carta :: ~Carta() {}


// SETTERS
void Carta :: setValor(std::string valor){
    this-> valor = valor;
}
void Carta :: setPalo(std::string palo){
    this-> palo = palo;
}

// GETTERS
std::string Carta :: getValor(){
    return valor;
}
std::string Carta :: getPalo(){
    return palo;
}