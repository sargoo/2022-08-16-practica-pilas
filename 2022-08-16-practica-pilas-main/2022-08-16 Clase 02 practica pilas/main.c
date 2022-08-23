#include <stdio.h>
#include <stdlib.h>
#include "pilaEmpleado.h"



int main()
{
    PilaEmpleados p;
    inicPilaEmpleados(&p);
    PilaEmpleados otra;
    inicPilaEmpleados(&otra);

    /// hacer una funcion que cargue la pila.
    cargarEmpleados(&p);



    /// desapilar en otra pila para no perder los datos.
    mostrarEmpleadosOrdenados(&p);

    return 0;
}






/// hacer una funcion que muestre la pila.
