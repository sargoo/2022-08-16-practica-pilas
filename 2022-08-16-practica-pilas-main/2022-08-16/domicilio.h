#ifndef DOMICILIO_H_INCLUDED
#define DOMICILIO_H_INCLUDED

typedef struct{
    int id;
    char calleNombre [25];
    char calleNumero [6];
    char localidad [25];
    char cpos [10];
    char provincia [25];
}stDomicilio;


stDomicilio getDomicilio ();
void muestraUnDomicilio(stDomicilio d);
stDomicilio cargarManual();
void domicilioToString(stDomicilio d, char s[]);
char* domicilioToString2(stDomicilio d);

#endif // DOMICILIO_H_INCLUDED
