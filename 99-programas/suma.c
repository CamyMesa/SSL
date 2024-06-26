#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>  
/*
 * Se incluyen las bibliotecas estándar stdlib.h y stdio.h. stdlib.h se utiliza para funciones como exit y atoi, 
 * mientras que stdio.h se utiliza para funciones de entrada y salida como printf y puts.
 * la biblioteca ctype.h incluye una función que permite determinar si un caracter
 * es un dígito o no.
 * Una cadena para la cuál todos sus caracteres son dígitos es Número.
 * 
 */
int esNumero(const char *nro) {
    while (*nro) {
        if (!isdigit(*nro)) {
            return 0;
        }
        nro++;
    }
    return 1;
}
/*
argc: Es un entero que representa el número de argumentos pasados al programa desde la línea de comandos, incluyendo el nombre del programa.
argv: Es un array de cadenas de caracteres (array de punteros a char) que contiene los argumentos pasados al programa.
*/
int main(int argc, char **argv) {
/*
*if (argc != 3): Verifica que el número de argumentos sea exactamente 3 (el nombre del programa y dos números). 
*Si no es así, imprime un mensaje de uso y termina el programa.
*/
     if (argc != 3) {
           puts("uso: suma nro1 nro2");
           exit(0);
     }
     if (!esNumero(argv[1]) || !esNumero(argv[2])) {
           puts("nro1 y nro2 deben ser constantes numericas");
           exit(-1);
     } 
     //argv[0] es el nombre del programa.
int sum1 = atoi(argv[1]); // Convierte el primer argumento de cadena a un entero.
int sum2 = atoi(argv[2]); // Convierte el segundo argumento de cadena a un entero.
printf("la suma de %d y %d es %d", sum1, sum2, sum1+sum2);
return 0;
}

//PS C:\Users\camy_> gcc suma.c -o magia
//PS C:\Users\camy_> .\magia 123 456
//la suma de 123 y 456 es 579

//PS C:\Users\camy_> .\magia 123 45s
//nro1 y nro2 deben ser constantes numericas