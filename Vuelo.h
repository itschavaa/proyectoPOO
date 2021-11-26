/*Salvador Rodriguez Paredes
 * A01704562
 * Programación Orientada a Objetos */
#ifndef PROYECTOPOO_VUELO_H
#define PROYECTOPOO_VUELO_H

#include <string>
#include <cstdlib>
#include <ctime>
#include "Aeropuerto.h"

using namespace std;

class Vuelo {
private:
    int numeroVuelo;
    int duracionVuelo;
    Aeropuerto aeropuerto;
    float precio;

public:
    int asientosDisponible;

    Vuelo() : numeroVuelo(0), duracionVuelo(0), asientosDisponible(0), precio(0) {};

    Vuelo(int durVu, int asiDu, Aeropuerto aero, float pre) : duracionVuelo(durVu),
                                                   asientosDisponible(asiDu), aeropuerto(aero), precio(pre) {};

    int get_numeroVuelo();

    int get_duracionVuelo();

    int get_asientosDisponibles();

    Aeropuerto get_aeropuerto();

    float get_precio();

    void set_numeroVuelo(int);

    void set_duracionVuelo(int);

    void set_asientosDisponibles(int);

    void set_aeropuerto(Aeropuerto);

    void set_precio(float);

    int obtenerNumeroVuelo();
};

int Vuelo::get_numeroVuelo() {
    return numeroVuelo;
}

int Vuelo::get_duracionVuelo() {
    return duracionVuelo;
}

int Vuelo::get_asientosDisponibles() {
    return asientosDisponible;
}

Aeropuerto Vuelo::get_aeropuerto() {
    return aeropuerto;
}

float Vuelo::get_precio() {
    return precio;
}

void Vuelo::set_numeroVuelo(int numVu) {
    numeroVuelo = numVu;
}

void Vuelo::set_asientosDisponibles(int asiDu) {
    asientosDisponible = asiDu;
}

void Vuelo::set_duracionVuelo(int durVu) {
    duracionVuelo = durVu;
}

void Vuelo::set_aeropuerto(Aeropuerto aero) {
    aeropuerto = aero;
}

void Vuelo ::set_precio(float pre) {
    precio = pre;
}

int Vuelo::obtenerNumeroVuelo() {
    srand(time(0));
    int x = aeropuerto.get_numeroVuelos();
    int y = 1 + (rand() % x);
    numeroVuelo = y;
    return y;
}

#endif //PROYECTOPOO_VUELO_H
