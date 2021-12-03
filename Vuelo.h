/* Proyecto Aviones
 * Salvador Rodriguez Paredes
 * A01704562
 * 12/30/2021
 */
/*
 * Clase Vuelo, maneja el número de vuelo, duración del vuelo, precio y una agregación con el objeto Aeropuerto
 *
 */
#ifndef PROYECTOPOO_VUELO_H
#define PROYECTOPOO_VUELO_H

#include <string>
#include <cstdlib>
#include <ctime>
#include "Aeropuerto.h"

using namespace std;

class Vuelo {
private:
    //Declaro variables de instancia
    int numeroVuelo;
    int duracionVuelo;
    Aeropuerto aeropuerto;
    float precio;

public:
    //Se declaran los métodos que tiene el objeto asi como su constructor

    //Se declara este atributo como público, ya que va a ser modificado por la clase Pasajero
    int asientosDisponible;
    //Constructor default
    Vuelo() : numeroVuelo(0), duracionVuelo(0), asientosDisponible(0), precio(0) {};
    //Constructor que recibe parámetros para llenar las variables
    Vuelo(int durVu, int asiDu, Aeropuerto aero, float pre) : duracionVuelo(durVu),
                                                   asientosDisponible(asiDu), aeropuerto(aero), precio(pre) {};
    //Getters de las variables número vuelo, duration vuelo, asientos disponibles, aeropuerto y precio
    int get_numeroVuelo();

    int get_duracionVuelo();

    int get_asientosDisponibles();

    Aeropuerto get_aeropuerto();

    float get_precio();

    //Setters de las variables nombre aeropuerto, pais y numero de vuelo

    void set_numeroVuelo(int);

    void set_duracionVuelo(int);

    void set_asientosDisponibles(int);

    void set_aeropuerto(Aeropuerto);

    void set_precio(float);

    //  Regresa un numero aleatoria y lo asigna como numero de vuelo
    int obtenerNumeroVuelo();
};


//Método que regresa el valor de número vuelo
int Vuelo::get_numeroVuelo() {
    return numeroVuelo;
}

//Método que regresa el valor de duración de vuelo
int Vuelo::get_duracionVuelo() {
    return duracionVuelo;
}

//Método que regresa el valor de asientos disponibles
int Vuelo::get_asientosDisponibles() {
    return asientosDisponible;
}

//Método que regresa el valor de aeropuerto
Aeropuerto Vuelo::get_aeropuerto() {
    return aeropuerto;
}

//Método que regresa el valor de precio
float Vuelo::get_precio() {
    return precio;
}

//Método que regresa valor de numero vuelos
void Vuelo::set_numeroVuelo(int numVu) {
    numeroVuelo = numVu;
}

//Método que regresa valor de asientos disponibles
void Vuelo::set_asientosDisponibles(int asiDu) {
    asientosDisponible = asiDu;
}

//Método que regresa valor de duracion de vuelo
void Vuelo::set_duracionVuelo(int durVu) {
    duracionVuelo = durVu;
}

//Método que regresa valor de aeropuerto
void Vuelo::set_aeropuerto(Aeropuerto aero) {
    aeropuerto = aero;
}

//Método que regresa valor de precia
void Vuelo ::set_precio(float pre) {
    precio = pre;
}
//Este método regresa un número aleatorio usando las funciones rand y srand asi como time para que el número que
// regresen las funciones anteriores nunca sea el mismo
int Vuelo::obtenerNumeroVuelo() {
    srand(time(0));
    int x = aeropuerto.get_numeroVuelos();
    int y = 1 + (rand() % x);
    numeroVuelo = y;
    return y;
}

#endif //PROYECTOPOO_VUELO_H
