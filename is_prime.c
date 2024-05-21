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
