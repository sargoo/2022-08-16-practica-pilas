#include <stdio.h>
#include <stdlib.h>
#include "pilaEmpleado.h"
#include <malloc.h>


void inicPilaEmpleados(PilaEmpleados *p){
    p->dim = 50;
    p->v = 0;
    p->e = (stEmpleado *) malloc(sizeof(stEmpleado) * p->dim);

}

void apilarEmpleados(PilaEmpleados *p, stEmpleado e){
    if(p->v == p->dim){
        p->dim += 50;
        p->e = (stEmpleado *)realloc(p->e, sizeof(stEmpleado) * p->dim);
    }
    p->e[p->v] = e;
    p->v ++;
}

stEmpleado desapilarEmplados(PilaEmpleados *p){
    stEmpleado empleado = p->e[p->v - 1];
    p->v--;

    return empleado;
}

stEmpleado topeEmpleados(PilaEmpleados *p){

    return p->e[p->v -1];

}

int pilaVaciaEmpleados(PilaEmpleados *p){
    int i;

    if(p->v == 0){
        i = 1;
    }
    else{
        i = 0;
    }
    return i;

}

int pilaVaciaEmpleadosTernario(PilaEmpleados *p){
    return(p-> v == 0) ? 1 : 0;

}

void cargarEmpleados(PilaEmpleados *p){
    int exit = 0;
    while(exit != 27){
        apilarEmpleados(p, cargarUnEmpleado());
        printf("\nSeguir cargando empleados?\nESC PARA SALIR/CUALQ. TECLA PARA CONTINUAR.");
        exit = getch();
        system("cls");
    }
}

void mostrarEmpleadosOrdenados( PilaEmpleados *p){
    PilaEmpleados aux;
    inicPilaEmpleados(&aux);
        /// desapilar en otra pila para no perder los datos.
    while(!pilaVaciaEmpleados(p)){
        ///mostrarUnEmpleado(topeEmpleados(&p));
        apilarEmpleados(&aux, desapilarEmplados(p));
    }

    while(!pilaVaciaEmpleados(&aux)){
        mostrarUnEmpleado(topeEmpleados(&aux));
        apilarEmpleados(p, desapilarEmplados(&aux));
    }

}
