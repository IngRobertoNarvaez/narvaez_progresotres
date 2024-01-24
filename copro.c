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

        int numerodeproductos;
        printf("Ingrese el numero de productos que va a ingresar : ");
        scanf("%d", &numerodeproductos);
        for (int i = 0; i < numerodeproductos; i++)
        {
            /*Implementacion de archivos*/
            FILE *archivo;
            archivo = fopen("datosproductos.txt", "a");
            printf("\n");
            printf("Ingrese codigo del producto: ");
            scanf("%s", datosproductos.codigo);
            printf("Ingrese Nombre del producto: ");
            scanf("%s", datosproductos.nombreproducto);
            printf("Ingrese descripcion del producto: ");
            scanf("%s", datosproductos.descripcion);
            printf("Ingrese cantidad del producto: ");
            scanf("%d", &datosproductos.cantidadproducto);
            printf("Ingrese precio del producto: ");
            scanf("%f", &datosproductos.preciodecompra);
            fprintf(archivo, " %s, %s, %s, %d, %f", datosproductos.codigo, datosproductos.nombreproducto, datosproductos.descripcion, datosproductos.cantidadproducto, datosproductos.preciodecompra);
            fclose(archivo);
        }

        break;
    case 2:
        /*Implementacion de archivos para leer lo que este dentro */
        FILE *archivo;
        archivo = fopen("datosproductos.txt", "r");
        if (archivo == NULL)
        {
            printf("Error al abrir el archivo.\n");
            return 1;
        }

        printf("\n");
        printf("Codigo,  Nombre, Descripcion, Cantidad, Precio\n");
        while (fscanf(archivo, "%s %s %s %d %f ", datosproductos.codigo, datosproductos.nombreproducto, datosproductos.descripcion, &datosproductos.cantidadproducto, &datosproductos.preciodecompra) != EOF)
        {
            printf("\n");
            /* \t sirve para tabular de forma horizontal y no vertical como el \n */
            printf("%s \t %s\t  %s\t  %d\t  %f \n", datosproductos.codigo, datosproductos.nombreproducto, datosproductos.descripcion, datosproductos.cantidadproducto, datosproductos.preciodecompra);
        }

        fclose(archivo);
        break;

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
