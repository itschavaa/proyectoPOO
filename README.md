# Proyecto POO

Salvador Rodriguez Paredes A01704562

Dentro del main encontramos que se mandan a llamar tres clases distintas (Vuelos, Aeropuerto y Pasajero), creamos cada
uno de lo objetos con sus respectivos getters y setters, todas nuestras clases tienen sus atributos privados menos un
atributo de la clase Vuelo, dicho atributo es "asientosDisponibles".

Dentro de la clase Pasajero se encuentra una agregación, ya que la clase pasajero tiene como atributo la clase Vuelos, y
en la clase Vuelo se realiza otra agregación de la clase Aeropuerto, ya que lo tiene como atributo.

Clase Pasajero:
Cuenta con sus getters y setters, pero también cuenta con dos métodos extra, reservar_asiento y obtenerNumeroAsiento, el
primer metodo es un método void, con un parámetro, dicho parámetro es nuestro objeto Vuelo, lo que se hace es acceder al
vuelo y modidificar el parametro de asientos disponibles, restandole un numero a la cantidad de asientos que se tenga (
este es el motivo por el cual el atributo se quedo declarado de manera publica, para poder tener acceso a su
modificacion), el ultimo metodo de esta misma clase es obtenerNumeroAsiento, lo que hace este metodo es darnos un numero
aleatorio con un rango de 1 a x, donde x es el numero de asientos disponibles, esto se realizo con las funciones rand()
y srand() y se ocupo time() para que los numeros aleatorios no se repitieran, dicho numero random se estable como
atributo en la clase.

Clase Vuelo: Cuenta con sus respectivos getters and setters, y un metodo adicional obtenerNumeroVuelo, dicho metodo
funciona de manera identica al metodo de obtenerNumeroAsiento, donde tambien se obtiene un numero random y se establece
como atributo (ocuoando rand(), srand() y time()).

Clase Aeropuerto: Cuenta con sus getters y setters, asi mismo se cuenta con una herencia que desemboca en 3 subclases,
estas llevan por nombre tres lugares (Dinamarca, China y Texas), cada una de estas clases hijas hereda todos los
accessor methods y añade un metodo en cada una de estas clases, a grandes rasgos dicho metodo hace una convesion de la
moneda oficial de los tres lugares por los cuales se nombran las clases y realizan una conversion a pesos.

main: Dentro del main solo se hace una representacion del uso de getters y setters como en el avance pasado, pero aparte
de hace el uso de los nuevos metodos, que ya tienen relaciones de agragacion.