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
struct productos datosproductos;
int main(int argc, char const *argv[])
{
    /*Estructura incio del menu*/
    int opcion;
    printf("Menu de la Tienda UPLO\n");
    printf("  1) Ingreso de Datos nuevos \n");
    printf("  2) Mostrar datos \n");
    printf("  3) Salir \n");
    scanf("%d", &opcion);

    switch (opcion)
    {
    case 1:
        printf("Ingrese codigo del producto: ");
        scanf("%s", datosproductos.codigo);
        printf("Ingrese Nombre del producto: ");
        scanf("%s", datosproductos.nombreproducto);
        printf("Ingrese descripcion del producto: ");
        scanf("%s", datosproductos.descripcion);
        printf("Ingrese codigo del producto: ");
        scanf("%f", datosproductos.cantidadproducto);
        break;
    case 2:
        /* code */
        break;
    case 3:
        printf("Saliendo de tienda UPLO...\n");
        break;
    default:
        printf("Opcion invalida.\n");
        break;
    }
    return 0;
}
