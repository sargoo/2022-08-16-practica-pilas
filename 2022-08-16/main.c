#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "domicilio.h"




int main()
{
    /*char name [25];
    printf("Ingrese su nombre: \n");
    fflush(stdin);
    scanf("%s", name);
    saludo(&name);
    */
    char toString [200];
    char* toString2 = malloc(200);
    printf("\n peso de la estuctura domicilio: %i",sizeof(stDomicilio));
    stDomicilio domicilio;
    domicilio = getDomicilio();
    muestraUnDomicilio(domicilio);
    domicilioToString(domicilio, toString);
    toString2 = domicilioToString2(domicilio);
    printf("%s", toString);
    printf("%s", toString2);
    return 0;
}

void saludo (char name [])
{
    printf("Hello %s\n", name);
}

