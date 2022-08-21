#include <stdio.h>
#include <stdlib.h>
#include "pilaEmpleado.h"



int main()
{
    PilaEmpleados p;
    inicPilaEmpleados(&p);
    PilaEmpleados otra;
    inicPilaEmpleados(&otra);
    stEmpleado e;
    int exit = 0;

    /// hacer una funcion que cargue la pila.
    while(exit != 27){

        apilarEmpleados(&p, cargarUnEmpleado(e));
        printf("\nSeguir cargando empleados?\nESC PARA SALIR/CUALQ. TECLA PARA CONTINUAR.");
        exit = getch();
        system("cls");

    }



    /// desapilar en otra pila para no perder los datos.
    while(!pilaVaciaEmpleados(&p)){
        mostrarUnEmpleado(topeEmpleados(&p));
        apilarEmpleados(&otra, desapilarEmplados(&p));
    }

    return 0;
}






/// hacer una funcion que muestre la pila.
