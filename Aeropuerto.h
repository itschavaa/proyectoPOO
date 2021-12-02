/* Proyecto Aviones
 * Salvador Rodriguez Paredes
 * A01704562
 * 12/30/2021
 */

/*
 * Clase Aeropuerto contiene los métodos genéricos para el manejo de aeropuerto
 * y tiene 3 clases hijas que son especializaciones de aeropuerto:
 * Dinamarca, China y Texas
 *
 */

#ifndef PROYECTOPOO_AEROPUERTO_H
#define PROYECTOPOO_AEROPUERTO_H

#include <string>
#include <utility>

using namespace std;

//Declaración de la clase aeropuerto que es abstracta
class Aeropuerto {
private:
    //Declaro variables de instancia
    string nombreAeropuerto;
    string pais;
    int numeroVuelos;
public:
    //Se declaran los métodos que tiene el objeto asi como su constructor

    //Constructor default
    Aeropuerto() : nombreAeropuerto(""), pais(""), numeroVuelos(0) {};

    //Constructor que recibe parámetros para llenar las variables
    Aeropuerto(string nomAe, string pai, int numVu) : nombreAeropuerto(nomAe), pais(pai), numeroVuelos(numVu) {};

    //Getters de las variables nombre aeropuerto, pais y numero de vuelo
    string get_nombreAeropuerto();

    string get_pais();

    int get_numeroVuelos();

    //Setters de las variables nombre aeropuerto, pais y numero de vuelo

    void set_nombreAeropuerto(string);

    void set_pais(string);

    void set_numeroVuelos(int);
};

//Método que regresa el valor de nombre aeropuerto
string Aeropuerto::get_nombreAeropuerto() {
    return nombreAeropuerto;
}

//Método que regresa el valor de pais
string Aeropuerto::get_pais() {
    return pais;
}

//Método que regresa el valor de número de vuelos
int Aeropuerto::get_numeroVuelos() {
    return numeroVuelos;
}

//Método que asigna un valor a nombre aeropuerto
void Aeropuerto::set_nombreAeropuerto(string nomAe) {
    nombreAeropuerto = nomAe;
}

//Método que asigna un valor a numero vuelos
void Aeropuerto::set_numeroVuelos(int numVu) {
    numeroVuelos = numVu;
}

//Método que asigna un valor a pais
void Aeropuerto::set_pais(string pai) {
    pais = pai;
}

//Declaración de la clase Dinamarca que hereda de Aeropuerto
class Dinamarca  : public Aeropuerto {
public:
    //Métodos y constructores del objeto

    //Constructor default
    Dinamarca (string nomAe, string pai, int numVu) : Aeropuerto(nomAe, pai, numVu) {};
    //Constructor que recibe parámetros para llenar las variables
    Dinamarca():Aeropuerto("","",0){};

    float coronaDanesa_peso(float);
};

//Método que hace la conversion de la variable precio a pesos mexicanos, haciendo una multiplicación por 3.27
float Dinamarca ::coronaDanesa_peso(float coro_dan) {
    float peso = coro_dan * 3.27;
    return peso;
}

//Declaración de la clase China que hereda de Aeropuerto
class China : public Aeropuerto {
public:
    //Métodos y constructores del objeto

    //Constructor default
    China(string nomAe, string pai, int numVu) : Aeropuerto(nomAe, pai, numVu) {};
    //Constructor que recibe parámetros para llenar las variables
    China():Aeropuerto("","",0){};
    float yuanChino_peso(float);
};

//Método que hace la conversion de la variable precio a pesos mexicanos, haciendo una multiplicación por 3.40
float China::yuanChino_peso(float yuan_chino) {
    float peso = yuan_chino * 3.40;
    return  peso;
}

//Declaración de la clase Texas que hereda de Aeropuerto
class Texas : public Aeropuerto{
public:
    //Métodos y constructores del objeto

    //Constructor default
    Texas(string nomAe, string pai,int numVu): Aeropuerto(nomAe,pai,numVu){};
    //Constructor que recibe parámetros para llenar las variables
    Texas():Aeropuerto("","",0){};
    double dolarEua_peso(float);
};

//Método que hace la conversion de la variable precio a pesos mexicanos, haciendo una multiplicación por 21.72
double Texas::dolarEua_peso(float dolar) {
    float peso = dolar * 21.72;
    return peso;
}
#endif
