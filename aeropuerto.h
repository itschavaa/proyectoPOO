#include <string>
#include <utility>

using namespace std;

class Pasajero {
private:
    string nombrePasajero;
    int numeroVuelo;
    int numeroAsiento;
public:
    Pasajero() : nombrePasajero(""), numeroVuelo(0), numeroAsiento(0) {};

    Pasajero(string nomPa, int numVu, int numAs) : nombrePasajero(std::move(nomPa)), numeroVuelo(numVu),
                                                   numeroAsiento(numAs) {};

    string get_nombrePasajero();

    int get_numeroVuelo();

    int get_numeroAsiento();

    void set_nombrePasarejo(string);

    void set_numeroVuelo(int);

    void set_numeroAsiento(int);
};

string Pasajero::get_nombrePasajero() {
    return nombrePasajero;
}

int Pasajero::get_numeroVuelo() {
    return numeroVuelo;
}

int Pasajero::get_numeroAsiento() {
    return numeroAsiento;
}

void Pasajero::set_nombrePasarejo(string nomPa) {
    nombrePasajero = nomPa;
}

void Pasajero::set_numeroVuelo(int numVu) {
    numeroVuelo = numVu;
}

void Pasajero::set_numeroAsiento(int numAs) {
    numeroAsiento = numAs;
}

class Vuelo {
private:
    int numeroVuelo;
    int duracionVuelo;
    string aeropuertoLlegada;
    string destino;
    int asientosDisponible;

public:
    Vuelo() : numeroVuelo(0), duracionVuelo(0), aeropuertoLlegada(""), destino(""), asientosDisponible(0) {};

    Vuelo(int numVu, int durVu, string aerLl, string des, int asiDu) : numeroVuelo(numVu), duracionVuelo(durVu),
                                                                       aeropuertoLlegada(aerLl), destino(des),
                                                                       asientosDisponible(asiDu) {};

    int get_numeroVuelo();

    int get_duracionVuelo();

    string get_aeropuertoLlegada();

    string get_destino();

    int get_asientosDisponibles();

    void set_numeroVuelo(int);

    void set_duracionVuelo(int);

    void set_aeropuertoLlegada(string);

    void set_destino(string);

    void set_asientosDisponibles(int);
};

int Vuelo::get_numeroVuelo() {
    return numeroVuelo;
}

int Vuelo::get_duracionVuelo() {
    return duracionVuelo;
}

string Vuelo::get_aeropuertoLlegada() {
    return aeropuertoLlegada;
}

string Vuelo::get_destino() {
    return destino;
}

int Vuelo::get_asientosDisponibles() {
    return asientosDisponible;
}

void Vuelo::set_numeroVuelo(int numVu) {
    numeroVuelo = numVu;
}

void Vuelo::set_aeropuertoLlegada(string aerLl) {
    aeropuertoLlegada = aerLl;
}

void Vuelo::set_asientosDisponibles(int asiDu) {
    asientosDisponible = asiDu;
}

void Vuelo::set_destino(string des) {
    destino = des;
}

void Vuelo::set_duracionVuelo(int durVu) {
    duracionVuelo = durVu;
}

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