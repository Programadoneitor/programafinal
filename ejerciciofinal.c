# include <stdio.h>
# include <string.h>
#include <stdlib.h>

#define USUARIO "Lenin"
#define CONTRASENIA "123"
#define MAXSALANORMAL 20
#define MAXSALAVIP 10
#define MAXSALA3D 15

int main (){
    char usuario[20], contrasenia[20];
    int intentos=0, menu;
    float preciopagar, ventas=0;  
    int nEntradas, entradasvendidas=0;
    do
    {
        printf ("Ingrese el usuario:\n");
        scanf ("%s", usuario);
        printf ("Ingrese la contrasenia:\n");
        scanf ("%s", contrasenia);
        if ((strcmp(USUARIO, usuario)==0)&&(strcmp(CONTRASENIA, contrasenia)==0))
        {
            do
            {
                printf ("Menu\n");
                printf ("1.- Venta de entradas:\n");
                printf ("2.- Estadisticas de ventas:\n");
                printf ("3.- Salir\n");
                scanf ("%d", &menu);
                switch (menu)
                {
                case 1:
                    int peliculas, salascine;
                    do
                    {
                        printf ("Peliculas.\n");
                        printf ("1.-Insidious: la puerta del infierno\n");
                        printf ("2.-Barbie.\n");
                        printf ("3.- salir\n");
                        scanf ("%d", &peliculas);
                        switch (peliculas)
                        {
                        case 1:
                            do
                            {
                                printf ("Elija la sala.\n");
                                printf ("1.- Normal $8\n");
                                printf ("2.- VIP $15\n");
                                printf ("3.- 3D $12\n");
                                printf ("4.- Salir\n");
                                scanf ("%d", &salascine);
                                switch (salascine)
                                {
                                case 1:
                                    printf ("Cuantas entradas desea comprar:\n");
                                    scanf ("%d", &nEntradas);
                                    entradasvendidas+=nEntradas;
                                    if (nEntradas>MAXSALANORMAL||nEntradas<=0)
                                    {
                                        printf ("Cupos no disponibles.\n");
                                        break;
                                    }
                                    else
                                    {
                                        preciopagar=nEntradas*8;
                                        if (preciopagar<40)
                                        {
                                            preciopagar=preciopagar;
                                        }
                                        else if (preciopagar >= 40 && preciopagar <= 80)
                                        {
                                            preciopagar=preciopagar*0.95;
                                        }
                                        else if (preciopagar > 80 && preciopagar <= 120)
                                        {
                                            preciopagar= preciopagar*0.90;
                                        }
                                        else if (preciopagar>120)
                                        {
                                            preciopagar=preciopagar*0.85;
                                        }
                                    }
                                    ventas+=preciopagar;
                                    printf ("El total a pagar por %d entradas es %.2f\n", nEntradas, preciopagar);
                                    break;
                                case 2:
                                    printf ("Cuantas entradas desea comprar:\n");
                                    scanf ("%d", &nEntradas);
                                    entradasvendidas+=nEntradas;
                                    if (nEntradas>MAXSALAVIP||nEntradas<=0)
                                    {
                                        printf ("Cupos no disponibles.\n");
                                        break;
                                    }
                                    else
                                    {
                                        preciopagar=nEntradas*15;
                                        if (preciopagar<40)
                                        {
                                            preciopagar=preciopagar;
                                        }
                                        else if (preciopagar >= 40 && preciopagar <= 80)
                                        {
                                            preciopagar=preciopagar*0.95;
                                        }
                                        else if (preciopagar > 80 && preciopagar <= 120)
                                        {
                                            preciopagar= preciopagar*0.90;
                                        }
                                        else if (preciopagar>120)
                                        {
                                            preciopagar=preciopagar*0.85;
                                        }
                                    }
                                    ventas+=preciopagar;
                                    printf ("El total a pagar por %d entradas es %.2f\n", nEntradas, preciopagar);
                                    break;
                                case 3:
                                    printf ("Cuantas entradas desea comprar:\n");
                                    scanf ("%d", &nEntradas);
                                    entradasvendidas+=nEntradas;
                                    if (nEntradas>MAXSALA3D||nEntradas<=0)
                                    {
                                        printf ("Cupos no disponibles.\n");
                                        break;
                                    }
                                    else
                                    {
                                        preciopagar=nEntradas*12;
                                        if (preciopagar<40)
                                        {
                                            preciopagar=preciopagar;
                                        }
                                        else if (preciopagar >= 40 && preciopagar <= 80)
                                        {
                                            preciopagar=preciopagar*0.95;
                                        }
                                        else if (preciopagar > 80 && preciopagar <= 120)
                                        {
                                            preciopagar= preciopagar*0.90;
                                        }
                                        else if (preciopagar>120)
                                        {
                                            preciopagar=preciopagar*0.85;
                                        }
                                    }
                                    ventas+=preciopagar;
                                    printf ("El total a pagar por %d entradas es %.2f\n", nEntradas, preciopagar);
                                    break;
                                default:
                                    break;
                                }
                                } while (salascine!=4);
                            // default:
                            //     break;
                        case 2:
                            do
                            {
                                printf ("Elija la sala.\n");
                                printf ("1.- Normal $8\n");
                                printf ("2.- VIP $15\n");
                                printf ("3.- 3D $12\n");
                                printf ("4.- Salir\n");
                                scanf ("%d", &salascine);
                                switch (salascine)
                                {
                                case 1:
                                    printf ("Cuantas entradas desea comprar:\n");
                                    scanf ("%d", &nEntradas);
                                    entradasvendidas+=nEntradas;
                                    if (nEntradas>MAXSALANORMAL||nEntradas<=0)
                                    {
                                        printf ("Cupos no disponibles.\n");
                                        break;
                                    }
                                    else
                                    {
                                        preciopagar=nEntradas*8;
                                        if (preciopagar<40)
                                        {
                                            preciopagar=preciopagar;
                                        }
                                        else if (preciopagar >= 40 && preciopagar <= 80)
                                        {
                                            preciopagar=preciopagar*0.95;
                                        }
                                        else if (preciopagar > 80 && preciopagar <= 120)
                                        {
                                            preciopagar= preciopagar*0.90;
                                        }
                                        else if (preciopagar>120)
                                        {
                                            preciopagar=preciopagar*0.85;
                                        }
                                    }
                                    ventas+=preciopagar;
                                    printf ("El total a pagar por %d entradas es %.2f\n", nEntradas, preciopagar);
                                    break;
                                case 2:
                                    printf ("Cuantas entradas desea comprar:\n");
                                    scanf ("%d", &nEntradas);
                                    entradasvendidas+=nEntradas;
                                    if (nEntradas>MAXSALAVIP||nEntradas<=0)
                                    {
                                        printf ("Cupos no disponibles.\n");
                                        break;
                                    }
                                    else
                                    {
                                        preciopagar=nEntradas*15;
                                        if (preciopagar<40)
                                        {
                                            preciopagar=preciopagar;
                                        }
                                        else if (preciopagar >= 40 && preciopagar <= 80)
                                        {
                                            preciopagar=preciopagar*0.95;
                                        }
                                        else if (preciopagar > 80 && preciopagar <= 120)
                                        {
                                            preciopagar= preciopagar*0.90;
                                        }
                                        else if (preciopagar>120)
                                        {
                                            preciopagar=preciopagar*0.85;
                                        }
                                    }
                                    ventas+=preciopagar;
                                    printf ("El total a pagar por %d entradas es %.2f\n", nEntradas, preciopagar);
                                    break;
                                case 3:
                                    printf ("Cuantas entradas desea comprar:\n");
                                    scanf ("%d", &nEntradas);
                                    entradasvendidas+=nEntradas;
                                    if (nEntradas>MAXSALA3D||nEntradas<=0)
                                    {
                                        printf ("Cupos no disponibles.\n");
                                        break;
                                    }
                                    else
                                    {
                                        preciopagar=nEntradas*12;
                                        if (preciopagar<40)
                                        {
                                            preciopagar=preciopagar;
                                        }
                                        else if (preciopagar >= 40 && preciopagar <= 80)
                                        {
                                            preciopagar=preciopagar*0.95;
                                        }
                                        else if (preciopagar > 80 && preciopagar <= 120)
                                        {
                                            preciopagar= preciopagar*0.90;
                                        }
                                        else if (preciopagar>120)
                                        {
                                            preciopagar=preciopagar*0.85;
                                        }
                                    }
                                    ventas+=preciopagar;
                                    printf ("El total a pagar por %d entradas es %.2f\n", nEntradas, preciopagar);
                                    break;
                                default:
                                    break;
                                }
                            } while (salascine!=4);
                        default:
                            break;
                        }
                    } while (peliculas !=3);
                    break;
                
                case 2:
                    printf ("Estadisticas\n");
                    printf ("Hasta ahora se han vendido %d entradas.\n", entradasvendidas);
                    printf ("Y se tiene de ingresos %.2f\n", ventas);
                    break;
                
                default:
                    break;
                }
            } while (menu!=3);
            
        }
        else
        {
            intentos += 1;
            printf ("Usuario o contrasenia incorrecta, intento %d\n", intentos);
        }
        if (intentos==3)
        {
            printf ("Intentos maximos permitidos\n");
            break;
        }
        
    } while ((strcmp(USUARIO, usuario)!=0)||(strcmp(CONTRASENIA, contrasenia)!=0));

    return 0;
}