#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "empleado.h"
#include "pilaEmpleado.h"



stEmpleado rrrcargarUnEmpleado(){

    stEmpleado e;


    strcpy(e.nombre, "Pepe");
    strcpy(e.apellido, "Argento");
    e.edad = 45;

    return e;
}

void mostrarUnEmpleado(stEmpleado e){
    printf("\n Id:..................: %i", e.id);
    printf("\n Nombre:..................: %s", e.nombre);
    printf("\n Apellido:..................: %s", e.apellido);
    printf("\n Edad:..................: %i", e.edad);
    printf("\n ______________________________________________________");
}

stEmpleado cargarUnEmpleado(stEmpleado e){
    static int id = 0;
    id ++;

    e.id = id;

    printf("\nIngrese nombre del empleado: ");
    fflush(stdin);
    gets(&e.nombre);
    printf("\nIngrese apellido del empleado: ");
    fflush(stdin);
    gets(&e.apellido);
    printf("\nIngrese edad del empleado: ");
    scanf("%i", &e.edad);

    return e;
}
