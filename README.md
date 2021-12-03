# TC1033 Proyecto POO

Salvador Rodriguez Paredes A01704562

CONTEXTO

Necesitas crear un reservador de vuelos que tenga como opciones tres aeropuertos, dichos aeropuertos son de distintos
paises por lo que tienen su propia modena nacional, por esto mismo necesitas convertir esta moneda a pesos mexicanos. 

FUNCIONALIDAD 

Dentro del main encontramos que se mandan a
llamar tres clases distintas (Vuelos, Aeropuerto y Pasajero), creamos cada uno de los objetos con sus respectivos getters
y setters, todas nuestras clases tienen sus atributos privados menos un atributo de la clase Vuelo, dicho atributo es "
asientosDisponibles".

Dentro de la clase Pasajero se encuentra una agregación, ya que la clase pasajero tiene como atributo la clase Vuelos, y
en la clase Vuelo se realiza otra agregación de la clase Aeropuerto, ya que lo tiene como atributo.

Clase Pasajero:
Cuenta con sus getters y setters, pero también cuenta con dos métodos extra, reservar_asiento y obtenerNumeroAsiento, el
primer método es un método void, con un parámetro, dicho parámetro es nuestro objeto Vuelo, lo que se hace es acceder al
vuelo y modificar el parámetro de asientos disponibles, restándole un número a la cantidad de asientos que se tenga (
este es el motivo por el cual el atributo se quedó declarado de manera pública, para poder tener acceso a su
modificación), el último método de esta misma clase es obtenerNumeroAsiento, lo que hace este método es darnos un número
aleatorio con un rango de 1 a x, donde x es el número de asientos disponibles, esto se realizó con las funciones rand()
y srand() y se ocupó time() para que los números aleatorios no se repitieran, dicho número random sé estable como
atributo en la clase.

Clase Vuelo: Cuenta con sus respectivos getters and setters, y un método adicional obtenerNumeroVuelo, dicho método
funciona de manera identifica al método de obtenerNumeroAsiento, donde también se obtiene un número random y se establece
como atributo (ocupando rand(), srand() y time()).

Clase Aeropuerto: Cuenta con sus getters y setters, asi mismo se cuenta con una herencia que desemboca en 3 subclases,
estas llevan por nombre tres lugares (Dinamarca, China y Texas), cada una de estas clases hijas hereda todos los
accessor methods y añade un método en cada una de estas clases, a grandes rasgos dicho método hace una conversion de la
moneda oficial de los tres lugares por los cuales se nombran las clases y realizan una conversion a pesos.

main: Dentro del main solo se hace una representación del uso de getters y setters como en el avance pasado, pero aparte
de hace el uso de los nuevos métodos, que ya tienen relaciones de agregación.

CONSIDERACIONES
El programa solo corre en la consola y está hecho con c++ standard por lo que corre en todos los sistemas operativos
compilar con: "g++ Pasajero.h Vuelo.h Aeropuerto.h main.cpp"
correr en linux: "/a.out"
correr en windows: "a.exe"

CORRECCIONES
Para este programa se realizaron las siguientes correcciones:
-Competencia SICT0401A
1. Se siguieron estándares de código fuente: estilo, sangrías, comentarios, nombres, ect. (Se comentó todo el código 
explicando las funciones de cada parte del código detalladamente, y añadí mis datos a todas mis clases, mi main, mi uml 
y al readme respectivamente).
2. Cumplí con estándares en mi repositorio: tiene un readme claro que explica el proyecto (para qué sirve, para que no 
sirve y como se usa), no tiene archivos basura o versiones pasadas. (Se añadieron las consideraciones y el contexto al 
readme).
