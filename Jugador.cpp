
#include <iostream>
#include "Jugador.h"


// CONSTRUCTOR
Jugador :: Jugador(std::string nombre, double apuesta, double saldo){
    this -> nombre = nombre;
    this -> apuesta = apuesta;
    this -> saldo = saldo;
}


// DESTRUCTOR
Jugador :: ~Jugador(){}


// SETTERS & GETTERS
void Jugador :: setNombre(std::string nombre){
    this -> nombre = nombre;
}
void Jugador :: setApuesta(double apuesta){
    this-> apuesta = apuesta;
}
void Jugador :: setSaldo(double saldo){
    this -> saldo = saldo;
}

std::string Jugador :: getNombre(){
    return nombre;
}
double Jugador :: getApuesta(){
    return apuesta;
}
double Jugador :: getSaldo(){
    return saldo;
}