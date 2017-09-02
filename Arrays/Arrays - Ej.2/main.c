#include <stdio.h>
#include <stdlib.h>

int main()
{
    char palabra[5];

    for(int i=0;i<5;i++)
    {
        printf("Ingrese solo vocales: ");
        fflush(stdin);
        scanf("%c",&palabra[i]);

        while(palabra[i]!='A' && palabra[i]!='E' && palabra[i]!='I' && palabra[i]!='O' && palabra[i]!='U' && palabra[i]!='a' && palabra[i]!='e' && palabra[i]!='i' && palabra[i]!='o' && palabra[i]!='u')
        {
            printf("Error: Ingrese solo vocales: ");
            fflush(stdin);
            scanf("%c",&palabra[i]);
        }
    }

    for(int i=0;i<5;i++)
    {
        printf("%c",palabra[i]);
    }

    printf("\n");

    system("pause");

    return 0;
}
