#include <stdio.h>

int main() {
    char text[50];
    int ncaracteres=0, npalabras=0, maxpalabra=0, minpalabra=50, num=0;

    printf("Ingrese una frase: ");
    fgets(text, 50, stdin);

    for (int i = 0; i < 50; i++) {
        if (text[i]!='\n')
        {
           printf("%c\n",text[i]);
        }else{
            break;
        }
    }

    for (int i = 0; i < 50; i++) {

        if (text[i] == '\n') {
        break;
        }
ncaracteres++;

        if (text[i] != ' ') {
            num++;
        } else if (num > 0) {
            npalabras++;
            if (num > maxpalabra) {
            maxpalabra = num;
            }
            if (num < minpalabra) {
            minpalabra = num;
            }
            num = 0;
        }
    }

    if (num > 0) {
        npalabras++;
        if (num > maxpalabra) {
        maxpalabra = num;
        }
        if (num < minpalabra) {
        minpalabra = num;
        }
    }

    if (ncaracteres==0) {
        printf("No se ingreso ninguna palabra\n");
        return 0;
    }

    printf("El numero de caracteres es: %d\n", ncaracteres);
    printf("El numero de palabras es: %d\n", npalabras);
    printf("La palabra mas larga tiene: %d caracteres\n", maxpalabra);
    printf("La palabra mas corta tiene: %d caracteres\n", minpalabra);

    return 0;
}
