# C-practices
## Arreglos multidimensionales, estructuras y punteros

###  Arreglos multidimensionales   

• array_helpers.h: contiene descripciones de funciones para cargar y volcar al disco los
datos climáticos.

• array_helpers.c: contiene implementaciones de dichas funciones.

• main.c : contiene al programa principal que invoca al procedimiento de carga de los datos
climáticos e inmediatamente procede a volcarlos por la salida estándard.

- Compilación:
```
gcc -Wall -Werror -Wextra -pedantic -std=c99 -c array_helpers.c weather.c
gcc -Wall -Werror -Wextra -pedantic -std=c99 -o weather *.o main.c
```
- Ejecución:
```
./weather ../input/weather_cordoba.in
```

### Ordenar un arreglo de estructuras

• helpers.h : contiene descripciones de funciones para cargar y volcar al disco datos de los
jugadores del tenis profesional.

• helpers.c : contiene implementaciones de dichas funciones.

• sort.h : descripciones de algoritmo de ordenación.

• sort.c : su implementación incompleta.

• main.c : contiene al programa principal que por ahora invoca al procedimiento de carga de
los datos y los vuelve a volcar por la salida estándard.
- Compilación:
```
gcc -Wall -Werror -Wextra -pedantic -std=c99 -c helpers.c sort.c
gcc -Wall -Werror -Wextra -pedantic -std=c99 -o mysort *.o main.c
```
- Ejecución:
```
./mysort ../input/atpplayers.in
```

### Punteros en C:
Un puntero en C es una variable que contiene la dirección de memoria de otra variable del mismo
tipo. 
La sintaxis de declaración de un puntero es la siguiente:
data_type *pointer_name;
Cuando se define una variable, se asigna una dirección de memoria para esta variable, en el cual
se guardara un valor.  
El   lenguaje   C   provee   dos   operadores   de   punteros:   operador   de   dirección   (&)   y   operador   de
indirección (*).
Si x es el nombre de variable, entonces &x será su dirección de memoria.
Si p es la variable puntero, entonces *p será el valor del objeto al cual apunta p.

- Compilación:
```
gcc -Wall -Werror -Wextra -pedantic -std=c99 -o operator operator.c
```
- Ejecución:
```
./operator
```
- Compilación:
```
gcc -Wall -Werror -Wextra -pedantic -std=c99 -o swap main.c
```
- Ejecución:
```
./swap
```
- Compilación:
```
gcc -Wall -Werror -Wextra -pedantic -std=c99 -o pointers pointers.c
```
- Ejecución:
```
./pointers
```
