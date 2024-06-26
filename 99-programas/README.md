# BNF

## Consignas

Construir una tabla con las siguientes columnas: número de línea, lexema y token.


| Nro de linea  |    Lexema     |       Token       |
| ------------- | ------------- | ----------------- |
| 12            | int           | palabraReservada  |
| 12            | esNumero      | identificador     |
| 12            | (             | caracterPuntuacion|
| 12            | const char *  | palabraReservada  |
| 12            | nro           | identificador     |
| 12            | )             | caracterPuntuacion|
| 12            | {             | caracterPuntuacion|
| 13            | while         | palabraReservada  |
| 13            | (             | caracterPuntuacion|
| 13            | *nro          | operador???       |
| 13            | )             | caracterPuntuacion|
| 13            | {             | caracterPuntuacion|
| 14            | if            | palabraReservada  |
| 14            | (             | caracterPuntuacion|
| 14            | !             | operador          |
| 14            | isdigit       | identificador     |
| 14            | (             | caracterPuntuacion|
| 14            | *nro          | operador          |
| 14            | )             | caracterPuntuacion|
| 14            | )             | caracterPuntuacion|
| 14            | {             | caracterPuntuacion|
| 15            | return        | palabraReservada  |
| 15            | 0             | constante         |
| 15            | ;             | caracterPuntuacion|
| 16            | }             | caracterPuntuacion|
| 17            | nro           | identificador     |
| 17            | ++            | operador          |
| 17            | ;             | caracterPuntuacion|
| 18            | }             | caracterPuntuacion|
| 19            | return        | palabraReservada  |
| 19            | 1             | constante         |
| 19            | ;             | caracterPuntuacion|
| 20            | }             | caracterPuntuacion|
| 25            | int           | palabraReservada  |
| 25            | main          | identificador     |
| 25            | (             | caracterPuntuacion|
| 25            | int           | palabraReservada  |
| 25            | argc          | identificador     |
| 25            | ,             | caracterPuntuacion|
| 25            | char **       | palabraReservada  |
| 25            | argv          | identificador     |
| 25            | )             | caracterPuntuacion|
| 25            | {             | caracterPuntuacion|
| 30            | if            | palabraReservada  |
| 30            | (             | caracterPuntuacion|
| 30            | argc          | identificador     |
| 30            | !=            | operador          |
| 30            | 3             | constante         |
| 30            | )             | caracterPuntuacion|
| 30            | {             | caracterPuntuacion|
| 31            | puts          | palabraReservada  |
| 31            | (             | caracterPuntuacion|
| 31            |"uso: suma nro1 nro2"| literalCadena     |
| 31            | )             | caracterPuntuacion|
| 31            | ;             | caracterPuntuacion|
| 32            | exit          | palabraReservada  |
| 32            | (             | caracterPuntuacion|
| 32            | 0             | constante         |
| 32            | )             | caracterPuntuacion|
| 32            | ;             | caracterPuntuacion|
| 33            | }             | caracterPuntuacion|
| 34            | if            | palabraReservada  |
| 34            | (             | caracterPuntuacion|
| 34            | !             | operador          |
| 34            | esNumero      | identificador     |
| 34            | (             | caracterPuntuacion|
| 34            | argv[1]       | identificador     |
| 34            | )             | caracterPuntuacion|
| 34            | ||            | operador          |
| 34            | !             | operador          |
| 34            | esNumero      | identificador     |
| 34            | (             | caracterPuntuacion|
| 34            | argv[2]       | identificador     |
| 34            | )             | caracterPuntuacion|
| 34            | )             | caracterPuntuacion|
| 34            | {             | caracterPuntuacion|
| 35            | puts          | palabraReservada  |
| 35            | (             | caracterPuntuacion|
| 35            | "nro1 y nro2 deben ser constantes numericas" | literalCadena |
| 35            | )             | caracterPuntuacion|
| 35            | ;             | caracterPuntuacion|
| 36            | exit          | palabraReservada  |
| 36            | (             | caracterPuntuacion|
| 36            | -1            | constante         |
| 36            | )             | caracterPuntuacion|
| 36            | ;             | caracterPuntuacion|
| 37            | }             | caracterPuntuacion|
| 39            | int           | palabraReservada  |
| 39            | sum1          | identificador     |
| 39            | =             | operador          |
| 39            | atoi          | palabraReservada  |
| 39            | (             | caracterPuntuacion|
| 39            | argv[1]       | identificador     |
| 39            | )             | caracterPuntuacion|
| 39            | ;             | caracterPuntuacion|
| 40            | int           | palabraReservada  |
| 40            | sum2          | identificador     |
| 40            | =             | operador          |
| 40            | atoi          | palabraReservada  |
| 40            | (             | caracterPuntuacion|
| 40            | argv[2]       | identificador     |
| 40            | )             | caracterPuntuacion|
| 40            | ;             | caracterPuntuacion|
| 41            | printf        | palabraReservada  |
| 41            | (             | caracterPuntuacion|
| 41            | "la suma de %d y %d es %d" | literalCadena       |
| 41            | ,             | caracterPuntuacion|
| 41            | sum1          | identificador     |
| 41            | ,             | caracterPuntuacion|
| 41            | sum2          | identificador     |
| 41            | ,             | caracterPuntuacion|
| 41            | +             | operador          |
| 41            | )             | caracterPuntuacion|
| 41            | ;             | caracterPuntuacion|
| 42            | return        | palabraReservada  |
| 42            | 0             | constante         |
| 42            | ;             | caracterPuntuacion|
| 43            | }             | caracterPuntuacion|
