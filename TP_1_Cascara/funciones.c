float Sumar(float op1, float op2)
{
    op1+=op2;

    return op1;
}

float Restar(float op1, float op2)
{
    op1-=op2;

    return op1;
}

float Dividir(float op1, float op2)
{
    if(op2!=0)
    {
        op1/=op2;
    }
    else
    {
        op2=1;
        printf("DIVIDIR: Error matematico. No se admite la division por cero. Resultado incorrecto.\n");
    }

    return op1;
}

float Multiplicar(float op1, float op2)
{
    op1*=op2;

    return op1;
}

int Factorial(int N)
{
    int fact=1;

    if(N>=1)
    {
        for(int i=N;i>1;i--)
        {
            fact*=i;
        }
    }
    else
    {
        N=1;
        printf("FACTORIAL: Error matematico. No se admiten factoriales de numeros no naturales. Resultado incorrecto.\n");
    }

    return fact;
}
