/* Proyecto Aviones
 * Salvador Rodriguez Paredes
 * A01704562
 * 12/30/2021
 */

/*
 * Clase Pasajero, maneja el nombre del pasajero, número de asiento y una agregación con el objeto Vuelo
 *
 */

#ifndef PROYECTOPOO_PASAJERO_H
#define PROYECTOPOO_PASAJERO_H

#include <string>
#include <utility>
#include <cstdlib>
#include <ctime>
#include "Vuelo.h"

using namespace std;

class Pasajero {
private:
    //Declaro variables de instancia
    string nombrePasajero;
    Vuelo vuelo;
    int numeroAsiento;
public:
    //Se declaran los métodos que tiene el objeto asi como su constructor

    // Constructor default
    Pasajero() : nombrePasajero(""), numeroAsiento(0) {};

    //Constructor que recibe parámetros para llenar las variables
    Pasajero(string nomPa, Vuelo vue) : nombrePasajero(std::move(nomPa)), vuelo(vue){};

    //Getters de las variables nombre pasajero, número asientos y vuelo
    string get_nombrePasajero();

    int get_numeroAsiento();

    Vuelo get_vuelo();

    //Setters de las variables nombre pasajero, número asientos y vuelo
    void set_nombrePasarejo(string);

    void set_numeroAsiento(int);

    void set_vuelo(Vuelo);

    //  Reserva un asiento y afecta de manera directa a la varia asientos disponibles de la clase Vuelo
    void reservar_asiento(Vuelo &);

    //  Regresa un numero aleatoria y lo asigna como numero de vuelo
    int obtenerNumeroAsiento();
};

//Método que regresa el valor de nombre pasajero
string Pasajero::get_nombrePasajero() {
    return nombrePasajero;
}

//Método que regresa el valor de número asiento
int Pasajero::get_numeroAsiento() {
    return numeroAsiento;
}

//Método que regresa el valor de vuelo
Vuelo Pasajero::get_vuelo() {
    return vuelo;
}

//Método que asigna un valor a nombre pasajero
void Pasajero::set_nombrePasarejo(string nomPa) {
    nombrePasajero = nomPa;
}

//Método que asigna un valor a numero asiento
void Pasajero::set_numeroAsiento(int numAs) {
    numeroAsiento = numAs;
}

//Método que asigna un valor a Vuelo
void Pasajero::set_vuelo(Vuelo vue) {
    vuelo = vue;
}

//Método encargado de restar un asiento al numero de asientos disponibles todo esto aplicando al valor de la memoria
// directamente
void Pasajero::reservar_asiento(Vuelo &v) {
    v.asientosDisponible= v.asientosDisponible-1;
}
//Este método regresa un número aleatorio usando las funciones rand y srand asi como time para que el número que
// regresen las funciones anteriores nunca sea el mismo
int Pasajero::obtenerNumeroAsiento() {
    srand(time(0));
    int x = vuelo.get_asientosDisponibles();
    int y =  1 + (rand() % x);
    numeroAsiento = y;
    return y;
}
#endif