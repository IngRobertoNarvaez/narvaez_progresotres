#include <stdio.h>
/*Definir la estructura*/
struct productos
{
    char codigo[25];
    char nombreproducto[50];
    char descripcion[50];
    int cantidadproducto;
    float preciodecompra;
};
int main(int argc, char const *argv[])
{
    /*Estructura incio del menu*/
    int seleccion;
    printf("Menu de la Tienda UPLO\n");
    printf("  1) Ingreso de Datos nuevos \n");
    printf("  2) Mostrar datos \n");
    printf("  3) Salir \n");
    switch (seleccion)
    {
    case 1:
        /* code */
        break;
    case 2:
        /* code */
        break;
    case 3:
        /* code */
        break;
    default:
        printf("Opción invalida.\n");
        break;
    }
    return 0;
}
