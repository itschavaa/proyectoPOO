# Proyecto POO

Salvador Rodriguez Paredes

Dentro del main encontramos que se mandan a llamar tres clases distintas (Vuelos, Aeropuerto y Pasajero), creamos cada
uno de lo objetos con sus respectivos getters y setters, todas nuestras clases tienen sus atributos privados menos un
atributo de la clase Vuelo, dicho atributo es "asientosDisponibles".

Dentro de la clase Pasajero se encuentra una agregacion ya que la clase pasajero tiene como atributo la clase Vuelos, y
en la clase Vuelo se realiza otra agregacion de la clase Aeropuerto, ya que lo tiene como atributo.

Clase Pasajero:
Cuenta con sus getters y setters, pero tambien cuenta con dos metodos extra, reservar_asiento y obtenerNumeroAsiento, el
primer metodo es un metodo void, con un parametro, dicho parametro es nuestro objeto Vuelo, lo que se hace es acceder al
vuelo y modidificar el parametro de asientos disponibles, restandole un numero a la cantidad de asientos que se tenga (
este es el motivo por el cual el atributo se quedo declarado de manera publica, para poder tener acceso a su
modificacion), el ultimo metodo de esta misma clase es obtenerNumeroAsiento, lo que hace este metodo es darnos un numero
aleatorio con un rango de 1 a x, donde x es el numero de asientos disponibles, esto se realizo con las funciones rand()
y srand() y se ocupo time() para que los numeros aleatorios no se repitieran, dicho numero random se estable como
atributo en la clase.

Clase Vuelo: Cuenta con sus respectivos getters and setters, y un metodo adicional obtenerNumeroVuelo, dicho metodo
funciona de manera identica al metodo de obtenerNumeroAsiento, donde tambien se obtiene un numero random y se establece
como atributo (ocuoando rand(), srand() y time()).

Clase Aeropuerto: Hasta el momento solo cuenta con sus getters y setters pero en el UML se muestra que apartir de esta
clase habra una relacion de tipo herencia con otras subclases y estas 3 subclases tendran un metodo respectivo.

main: Dentro del main solo se hace una representacion del uso de getters y setters como en el avance pasado, pero aparte
de hace el uso de los nuevos metodos, que ya tienen relaciones de agragacion.