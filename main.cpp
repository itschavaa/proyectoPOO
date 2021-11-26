/*Salvador Rodriguez Paredes
 * A01704562
 * Programación Orientada a Objetos */
#include <iostream>
#include <string>
#include "Pasajero.h"

using namespace std;

int main() {
    Pasajero pasajero;
    Vuelo vuelo;
    Texas aeropuerto;
    China aeropuerto2;
    Dinamarca aeropuerto3;

    aeropuerto.set_nombreAeropuerto("Houston George Bush");
    aeropuerto.set_pais("USA");
    aeropuerto.set_numeroVuelos(300);

    vuelo.set_asientosDisponibles(56);
    vuelo.set_duracionVuelo(200);
    vuelo.set_precio(5360.61);
    vuelo.set_aeropuerto(aeropuerto);

    pasajero.set_vuelo(vuelo);
    pasajero.set_nombrePasarejo("Salvador Rodriguez");

    cout << "Bienvenidx " << pasajero.get_nombrePasajero() << endl;
    vuelo.obtenerNumeroVuelo();
    cout << "Tu numero de vuelo es: " << vuelo.get_numeroVuelo() << endl;
    cout << "El numero de asientos en total es de: " << vuelo.get_asientosDisponibles() << endl;
    cout << "El precio de tu vuelo en dolares es de: " << vuelo.get_precio() << endl;
    cout << "Haciendo la conversion de dolares a pesos el precio seria de: "
         << aeropuerto.dolarEua_peso(vuelo.get_precio()) << endl;
    pasajero.obtenerNumeroAsiento();
    pasajero.reservar_asiento(vuelo);
    cout << "Tu numero de asiento es: " << pasajero.get_numeroAsiento();
    cout << endl;
    cout << "Tu vuelo con destino al aeropuerto de " << aeropuerto.get_nombreAeropuerto() << ", "
         << aeropuerto.get_pais() << " (con " << aeropuerto.get_numeroVuelos()
         << " vuelos en este momento)" << endl << "tiene una duracion de " << vuelo.get_duracionVuelo()
         << " minutos aproximadamente." << endl;
    cout << vuelo.get_asientosDisponibles() << " asientos disponibles." << endl;
    cout << "Si el precio se encontrara en yuanes chinos, la conversion a pesos seria: "
         << aeropuerto2.yuanChino_peso(vuelo.get_precio()) << endl;
    cout << "Si el precio se encontrara en coronas danesas, la conversion a pesos seria: "
         << aeropuerto3.coronaDanesa_peso(vuelo.get_precio()) << endl;
}

