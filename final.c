//Programa para encontrar los numeros primos entre dos numeros
//Realizado por Diego Aarón Arrellin Zambrano

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#define TRUE 1
#define FALSE 0

void get_numbers(int *, int *);
int check_if_prime(int);
int run_program();
 
int main()
{
    int x=0,y=0, user_validation, user;

    do{
        system("CLS");

        get_numbers(&x,&y);
        fflush(stdin);

        for (int i = x; i <= y; i++)//Comprobamos si es primo para cada uno de los numeros dentro del rango dado
        {
            if(check_if_prime(i))
            printf("%i SI es PRIMO\n", i);

            else
            printf("%i NO es PRIMO\n", i);
        } 

        user = run_program();

        if(user == 0|| user == 1)
        {
            if(user == 0)//TERMINA EL PROGRAMA
            {
                printf("Terminando programa...");
                Sleep(3000);
                user_validation = FALSE;
            }
            
            else
            {
                system("CLS");
                printf("Volviendo a ejecutar el programa, espere...");
                Sleep(3000);
            }
        }
    
        else
        {
            printf("Terminando programa...");
            Sleep(3000);
            user_validation = FALSE;
        }
    }while(user_validation);
}

void get_numbers(int *a, int *b)
{
    int valid_num = 1;

    do
    {
        system("CLS");
        printf("Este programa calcula los numeros primos ");
        printf("entre a y b.\n");
        printf("Ingrese el valor de 'a':");
        scanf("%i", a);
        printf("\nIngrese el valor de 'b':");
        scanf("%i", b);

        if(*a < *b)
        valid_num = 0;

        else
        {
            printf("El valor de a es menor que el de b, intente de nuevo...");
            Sleep(4000);
        }

    } while (valid_num);
}

int run_program()
{
    int run;
    char escape_key;

    printf("\n¿Desea continuar encontrando numeros primos?");
    printf("\nSi -> 's'\nNo -> 'n'\n");
    scanf("%c", &escape_key);
    
    if(escape_key == 's' || escape_key == 'n')
    {
        if(escape_key == 's')//TERMINA EL PROGRAMA
        run = 1;

        else
        {
            run = 0;
        }
    }

    else
    {
        run = 0;
    }

    return run;
}

int check_if_prime(int a)
{
    if(a <= 1)
    return FALSE;
        
    for (int i = 2; i < a; i++)
    {
        if(a % i == 0)
        return FALSE; 
    }

    return TRUE;
}
