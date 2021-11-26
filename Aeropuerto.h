/*Salvador Rodriguez Paredes
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

class Dinamarca  : public Aeropuerto {
public:
    Dinamarca (string nomAe, string pai, int numVu) : Aeropuerto(nomAe, pai, numVu) {};
    Dinamarca():Aeropuerto("","",0){};

    float coronaDanesa_peso(float);
};

float Dinamarca ::coronaDanesa_peso(float coro_dan) {
    float peso = coro_dan * 3.27;
    return peso;
}

class China : public Aeropuerto {
public:
    China(string nomAe, string pai, int numVu) : Aeropuerto(nomAe, pai, numVu) {};
    China():Aeropuerto("","",0){};
    float yuanChino_peso(float);
};

float China::yuanChino_peso(float yuan_chino) {
    float peso = yuan_chino * 3.40;
    return  peso;
}

class Texas : public Aeropuerto{
public:
    Texas(string nomAe, string pai,int numVu): Aeropuerto(nomAe,pai,numVu){};
    Texas():Aeropuerto("","",0){};
    double dolarEua_peso(float);
};

double Texas::dolarEua_peso(float dolar) {
    float peso = dolar * 21.72;
    return peso;
}
#endif
