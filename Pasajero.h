/*Salvador Rodríguez Paredes
 * A01704562
 * Programación Orientada a Objetos */

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
    string nombrePasajero;
    Vuelo vuelo;
    int numeroAsiento;
public:
    Pasajero() : nombrePasajero(""), numeroAsiento(0) {};

    Pasajero(string nomPa, Vuelo vue) : nombrePasajero(std::move(nomPa)), vuelo(vue){};

    string get_nombrePasajero();

    int get_numeroAsiento();

    Vuelo get_vuelo();

    void set_nombrePasarejo(string);

    void set_numeroAsiento(int);

    void set_vuelo(Vuelo);

    void reservar_asiento(Vuelo &);

    int obtenerNumeroAsiento();
};

string Pasajero::get_nombrePasajero() {
    return nombrePasajero;
}

int Pasajero::get_numeroAsiento() {
    return numeroAsiento;
}

Vuelo Pasajero::get_vuelo() {
    return vuelo;
}

void Pasajero::set_nombrePasarejo(string nomPa) {
    nombrePasajero = nomPa;
}

void Pasajero::set_numeroAsiento(int numAs) {
    numeroAsiento = numAs;
}

void Pasajero::set_vuelo(Vuelo vue) {
    vuelo = vue;
}

void Pasajero::reservar_asiento(Vuelo &v) {
    v.asientosDisponible= v.asientosDisponible-1;
}
int Pasajero::obtenerNumeroAsiento() {
    srand(time(0));
    int x = vuelo.get_asientosDisponibles();
    int y =  1 + (rand() % x);
    numeroAsiento = y;
    return y;
}
#endif