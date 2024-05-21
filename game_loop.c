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
