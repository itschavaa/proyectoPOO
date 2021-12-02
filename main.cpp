/* Proyecto Aviones
 * Salvador Rodriguez Paredes
 * A01704562
 * 12/30/2021
 */

/*Este es el proyecto para la materia Pensamiento Computacional Orientada a Objetos, en este proyecto se propone un
 * sistema para reservar vuelos en un aeropuerto. Nos permite establecer el número de asientos disponibles del vuelo y
 * la cantidad de vuelos en transcurso en los aeropuertos, con estos datos nos asigna un número de asiento y de vuelo
 * de manera aleatoria */

//Bibliotecas
#include <iostream>  //Para imprimir
#include <string>  //Para poder usar objetos de tipo string
#include "Pasajero.h" //Aquí se encuentran los objetos que necesite en mi proyecto

using namespace std;

//Procedimiento menu
void menu() {

    //Imprime las opciones que va a tener el sistema
    cout << "\nMenu:" << endl;
    cout << "1. Obtener numero de vuelo" << endl;
    cout << "2. Obtener numero de asiento" << endl;
    cout << "3. Pagar vuelo" << endl;
    cout << "4. Salir" << endl;

}

//Procedimiento menu aeropuerto
void menu_aeropuerto() {
    //Imprime las opciones de aeropuerto con las que se cuenta
    cout << "\nSelecciona tu aeropuerto:\n1. Dinamarca\n2. China\n3. Estados Unidos\n ";
}

int main() {
    //Creación de las variables de iniciación
    int opcion_aeropuerto, numero_asientos, numero_vuelos, menu_opcion, opcion;
    float precio;

    string nombre, apellido1, apellido2, completo;
    Pasajero pasajero;
    Vuelo vuelo;
    Dinamarca aeropuerto1;
    China aeropuerto2;
    Texas aeropuerto3;

    //Le pide al usuario que ingrese su nombre y apellidos, los concatena en un solo string y hace el set al objeto
    // pasajero
    cout << "Ingrese tu nombre: " << endl;
    cin >> nombre;
    cout << "Ingrese su primer apellido: " << endl;
    cin >> apellido1;
    cout << "Ingrese su segundo apellido: " << endl;
    cin >> apellido2;
    completo = nombre + " " + apellido1 + " " + apellido2;
    pasajero.set_nombrePasarejo(completo);
    cout << endl;

    //Se le pide al usuario que ponga la cantidad de asientos con los que va a contar el avión, para que después
    // con este dato se pueda hacer un request aleatoria de un número hasta ese rango.
    cout << "\nIngrese la cantidad de asientos disponibles para su vuelo:\n";
    cin >> numero_asientos;
    vuelo.set_asientosDisponibles(numero_asientos);

    // Se le pide al usuario que ponga la cantidad de vuelos con los que va a contar el aeropuerto, para que después
    // con este dato se pueda hacer un request aleatoria de un número hasta ese rango.
    cout << "\nIngrese el numero de vuelos que ocurren el su aeropuerto:\n";
    cin >> numero_vuelos;

    //  Impresión del menu
    menu_aeropuerto();
    //  Selección del aeropuerto con el que vamos a trabajar
    cin >> opcion_aeropuerto;

    //  Setteamos las variables número de vuelo, nombre del aeropuerto, el pais de este, la duración del vuelo y
    //  hacemos la agregación de la clase aeropuerto dentro de la clase vuelo, todo esto dependiendo de la opción de
    //  aeropuerto que se escogió en el paso anterior. En caso de que se ponga una opción que no esta en el menu
    //  el programa termina.
    if (opcion_aeropuerto == 1) {
        aeropuerto1.set_numeroVuelos(numero_vuelos);
        aeropuerto1.set_nombreAeropuerto("Copenhague-Kastrup");
        aeropuerto1.set_pais("Dinamarca");
        vuelo.set_duracionVuelo(13);
        vuelo.set_aeropuerto(aeropuerto1);
    } else if (opcion_aeropuerto == 2) {
        aeropuerto2.set_numeroVuelos(numero_vuelos);
        aeropuerto2.set_nombreAeropuerto("Chengdu Tianfu");
        aeropuerto2.set_pais("China");
        vuelo.set_duracionVuelo(26);
        vuelo.set_aeropuerto(aeropuerto2);
    } else if (opcion_aeropuerto == 3) {
        aeropuerto3.set_numeroVuelos(numero_vuelos);
        aeropuerto3.set_nombreAeropuerto("Houston George Bush");
        aeropuerto3.set_pais("Estados Unidos de America");
        vuelo.set_duracionVuelo(4);
        vuelo.set_aeropuerto(aeropuerto3);
    } else {
        cout << "Opcion incorrecta.\nAdios.";
        exit(1);
    }

    // Se le pide al usuario que ponga la el precio de su vuelo, para que después
    // con este dato se pueda hacer una conversion de la moneda nacional del pais a pesos mexicanos.
    cout << "\nIngrese el precio de su boleto:\n";
    cin >> precio;

    //Setteamos el precio dentro del objeto Vuelo
    vuelo.set_precio(precio);

    //Se le pregunta al usuario si quiere reservar un vuelo para continuar con el código
    cout << "\nDesea reservar un vuelo?\n1. Si\n2. No" << endl;
    cin >> menu_opcion;

    //En caso de que se seleccione sí a la clase Pasajero se le va a agregar la clase Vuelo.
    //Si la respuesta es no, el programa se cierra y si se escoge una opción que no esté el programa se cierra.
    if (menu_opcion == 1) {
        cout << "Vuelo Reservado" << endl;
        pasajero.set_vuelo(vuelo);
    } else if (menu_opcion == 2) {
        cout << "Adios";
        exit(1);
    } else {
        cout << "Opcion incorrecta\nAdios";
        exit(1);
    }

  // Se imprime la bienvenida al usuario con su respectivo nombre, para este momento se reserva un asiento y obtenemos
  // los números de vuelo y asientos, estos números se obtienen de manera aleatoria de un rango de 1 al
  // número que el usuario ingrese.
    cout << "\nBienvenidx " << pasajero.get_nombrePasajero() << endl;
    pasajero.reservar_asiento(vuelo);
    vuelo.obtenerNumeroVuelo();
    pasajero.obtenerNumeroAsiento();

    // Iniciamos un loop como true para que el menu y las respectivas acciones
    // se impriman/realicen hasta que el usuario decida terminar el programa o ponga una opinion que no
    // está en las opciones, esto también terminará el programa.
    while (true) {
        // Se imprime el menu de opciones
        menu();
        cout << "\nSeleccione una opcion:\n";
        // Se selecciona una opción
        cin >> opcion;
        if (opcion == 1) {
            //Hace una llamada a la variable número de vuelo de la clase Vuelo
            cout << "Tu numero de vuelo es: " << vuelo.get_numeroVuelo() << endl;
        } else if (opcion == 2) {
            //Hace una llama a las variables asientos disponibles y número de asiento
            cout << "El numero de asientos en total es de: " << vuelo.get_asientosDisponibles() + 1 << endl;
            cout << "El numero de asientos disponibles es de: " << vuelo.get_asientosDisponibles() << endl;
            cout << "Tu numero de asiento es: " << pasajero.get_numeroAsiento();
        } else if (opcion == 3) {
            //Dependiendo del aeropuerto que el usuario escogío, se hace una llamada al método correspondiente encargado
            // de hacer la conversión del precio establecido hace unos momentos a pesos mexicanos
            if (opcion_aeropuerto == 1) {
                //Se imprime el precio antes de ser convertido y después de hacer uso del método correspondiente.
                cout << "El precio se encuentra en coronas danesas (" << vuelo.get_precio()
                     << "), la conversion a pesos "
                     << "seria: " << aeropuerto1.coronaDanesa_peso(vuelo.get_precio()) << endl;
            } else if (opcion_aeropuerto == 2) {
                //Se imprime el precio antes de ser convertido y después de hacer uso del método correspondiente.
                cout << "El precio se encuentra en yuanes chinos (" << vuelo.get_precio() << "), la conversion a pesos "
                     << "seria: " << aeropuerto2.yuanChino_peso(vuelo.get_precio()) << endl;
            } else if (opcion_aeropuerto == 3) {
                //Se imprime el precio antes de ser convertido y después de hacer uso del método correspondiente.
                cout << "El precio se encuentra en dolares estadunidenses (" << vuelo.get_precio()
                     << "), la conversion a pesos "
                     << "seria: " << aeropuerto3.dolarEua_peso(vuelo.get_precio()) << endl;
            }
        } else if (opcion == 4) {
            //Dependiendo el aeropuerto escogío se hace una impresión de las variables nombre del aeropuerto, pais,
            // número de vuelos y la duración del vuelo, para asi concluir con la finalización del programa.
            if (opcion_aeropuerto == 1) {
                cout << "\nTu vuelo con destino al aeropuerto de " << aeropuerto1.get_nombreAeropuerto() << ", "
                     << aeropuerto1.get_pais() << " (con " << aeropuerto1.get_numeroVuelos()
                     << " vuelos en este momento)" << endl << "tiene una duracion de " << vuelo.get_duracionVuelo()
                     << " horas aproximadamente." << endl;
                cout << "Adios (:";
                exit(1);
            } else if (opcion_aeropuerto == 2) {
                cout << "\nTu vuelo con destino al aeropuerto de " << aeropuerto2.get_nombreAeropuerto() << ", "
                     << aeropuerto2.get_pais() << " (con " << aeropuerto2.get_numeroVuelos()
                     << " vuelos en este momento)" << endl << "tiene una duracion de " << vuelo.get_duracionVuelo()
                     << " horas aproximadamente." << endl;
                cout << "Adios (:";
                exit(1);
            } else if (opcion_aeropuerto == 3) {
                cout << "\nTu vuelo con destino al aeropuerto de " << aeropuerto3.get_nombreAeropuerto() << ", "
                     << aeropuerto3.get_pais() << " (con " << aeropuerto3.get_numeroVuelos()
                     << " vuelos en este momento)" << endl << "tiene una duracion de " << vuelo.get_duracionVuelo()
                     << " horas aproximadamente." << endl;
                cout << "Adios (:";
                exit(1);
            }
            //Si se selecciona una opción que no está en el menu el programa imprime que fue incorrecta la opción
            // y terminará

        } else {
            cout << "Opcion incorrecta\nAdios\n";
            exit(1);
        }
    }
}