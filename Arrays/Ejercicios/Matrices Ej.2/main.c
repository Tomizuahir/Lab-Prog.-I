#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
//Tiene errores
char db_nombres[20][32], db_sexo[20];
int db_edad[20], db_id[20];

int main()
{
    for (int i=0; i<20;i++)
    {
        db_id[i]=i;

        printf("Ingrese sexo para ID %d: ",db_id[i]);
        fflush(stdin);
        scanf("%c",&db_sexo[i]);

        while(toupper(db_sexo[i])!='F' && toupper(db_sexo[i])!='M')
        {
            printf("ERROR > Ingrese sexo para ID %d: ",db_id[i]);
            fflush(stdin);
            scanf("%c",&db_sexo[i]);
        }

        printf("Ingrese edad para ID %d: ",db_id[i]);
        scanf("%d",&db_edad[i]);

        while(db_edad[i]<0 || db_edad[i]>110)
        {
            printf("ERROR > Ingrese edad para ID %d: ",db_id[i]);
            scanf("%d",&db_edad[i]);
        }

        printf("Ingrese nombre para ID %d: ",db_id[i]);
        gets(db_nombres[i]);

        while(strlen(db_nombres[i])<5)
        {
            printf("Ingrese nombre para ID %d: ",db_id[i]);
            gets(db_nombres[i]);
        }

    }
}
