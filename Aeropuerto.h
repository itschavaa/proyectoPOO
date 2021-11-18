/*Salvador Rodríguez Paredes
 * A01704562
 * Programación Orientada a Objetos */
#ifndef PROYECTOPOO_AEROPUERTO_H
#define PROYECTOPOO_AEROPUERTO_H

#include <string>
#include <utility>

using namespace std;

class Aeropuerto {
private:
    string nombreAeropuerto;
    string pais;
    int numeroVuelos;
public:
    Aeropuerto() : nombreAeropuerto(""), pais(""), numeroVuelos(0) {};

    Aeropuerto(string nomAe, string pai, int numVu) : nombreAeropuerto(nomAe), pais(pai), numeroVuelos(numVu) {};

    string get_nombreAeropuerto();

    string get_pais();

    int get_numeroVuelos();

    void set_nombreAeropuerto(string);

    void set_pais(string);

    void set_numeroVuelos(int);
};

string Aeropuerto::get_nombreAeropuerto() {
    return nombreAeropuerto;
}

string Aeropuerto::get_pais() {
    return pais;
}

int Aeropuerto::get_numeroVuelos() {
    return numeroVuelos;
}

void Aeropuerto::set_nombreAeropuerto(string nomAe) {
    nombreAeropuerto = nomAe;
}

void Aeropuerto::set_numeroVuelos(int numVu) {
    numeroVuelos = numVu;
}

void Aeropuerto::set_pais(string pai) {
    pais = pai;
}

#endif
