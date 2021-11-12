#include <iostream>
#include <string>
#include "aeropuerto.h"

using namespace std;

int main() {
    Pasajero pasajero1("Salvador Rodriguez Paredes", 4352, 13);
    Vuelo vuelo1(4352, 120, "San Antonio,TX", "Texas", 30);
    Aeropuerto aeropuero1("San Antonio,TX", "Estados Unidos de America", 5);
    cout << "Bienvenide " << pasajero1.get_nombrePasajero() << endl;
    cout << "Tu numero de vuelo es: " << pasajero1.get_numeroVuelo() << endl;
    cout << "Tu numero de asiento es: " << pasajero1.get_numeroAsiento() << endl;
    cout << endl;
    cout << "El vuelo " << vuelo1.get_numeroVuelo() << " con destino a " << vuelo1.get_destino() << " aterrizara al"
         << endl
         << "aeropuerto de " << vuelo1.get_aeropuertoLlegada() << " y tiene una duracion de "
         << vuelo1.get_duracionVuelo()
         << " min" << endl << "(" << vuelo1.get_asientosDisponibles() << " asientos disponibles)" << endl;
    cout << endl;
    cout << "Nombre del Aeropuerto: " << aeropuero1.get_nombreAeropuerto() << endl;
    cout << "Pais de ubicacion del Aeropuerto: " << aeropuero1.get_pais() << endl;
    cout << "Vuelos en transcurso: " << aeropuero1.get_numeroVuelos() << endl;

    pasajero1.set_nombrePasarejo("Ernesto Guillen"), pasajero1.set_numeroVuelo(5261),
            pasajero1.set_numeroAsiento(15),vuelo1.set_numeroVuelo(5261),vuelo1.set_aeropuertoLlegada("Sheremetyevo, Mou"),
            vuelo1.set_asientosDisponibles(50),vuelo1.set_destino("Moscu"),vuelo1.set_duracionVuelo(960),
            aeropuero1.set_nombreAeropuerto("Sheremetyvo, Mou"),aeropuero1.set_numeroVuelos(15),aeropuero1.set_pais("Russia");
    cout << endl;
    cout << "Bienvenide " << pasajero1.get_nombrePasajero() << endl;
    cout << "Tu numero de vuelo es: " << pasajero1.get_numeroVuelo() << endl;
    cout << "Tu numero de asiento es: " << pasajero1.get_numeroAsiento() << endl;
    cout << endl;
    cout << "El vuelo " << vuelo1.get_numeroVuelo() << " con destino a " << vuelo1.get_destino() << " aterrizara al"
         << endl
         << "aeropuerto de " << vuelo1.get_aeropuertoLlegada() << " y tiene una duracion de "
         << vuelo1.get_duracionVuelo()
         << " min" << endl << "(" << vuelo1.get_asientosDisponibles() << " asientos disponibles)" << endl;
    cout << endl;
    cout << "Nombre del Aeropuerto: " << aeropuero1.get_nombreAeropuerto() << endl;
    cout << "Pais de ubicacion del Aeropuerto: " << aeropuero1.get_pais() << endl;
    cout << "Vuelos en transcurso: " << aeropuero1.get_numeroVuelos() << endl;
    return 0;
}

