//SE DEBE ADAPTAR EL CODIGO
int obtenerEspacioLibre(EPersona lista[],int tamLista){
    //Flag de elemento libre encontrado
    int idLibre=-1;

    //Recorre todo el array en busqueda, si encuentra lugar guarda en que posicion
    for(int i=0;i<tamLista;i++){
        if(lista[i].estado==0){
            idLibre=i;
            break;
        }
    }

    return idLibre;
}

//SE DEBE ADAPTAR EL CODIGO
void mostrarLista(EPersona lista[],int tamLista)
{
    //Auxiliar para swapeo en el burbujeo de nombres
    EPersona aux_pers;

    //Burbujeo (ordenamiento) de array por nombre
    for(int i=0;i<tamLista-1;i++){
        if(lista[i].estado!=1){
            continue;
        }

        for(int j=i+1;j<tamLista;j++){
            if(lista[j].estado!=1){
                continue;
            }

            if(strcmp(lista[i].nombre,lista[j].nombre)>0){
                aux_pers=lista[i];
                lista[i]=lista[j];
                lista[j]=aux_pers;
            }
        }
    }

    //Si el array tiene altas muestra todas, por orden alfabetico por nombre, sino notifica que el array no tiene altas
    if(arrayVacio(lista,tamLista)!=1){
        for(int i=0;i<tamLista;i++){
            if(lista[i].estado==1){
                printf("DNI: %d NOMBRE: %s EDAD: %d\n",lista[i].dni,lista[i].nombre,lista[i].edad); //MODIFICAR SEGUN USO
            }
        }
    }
    else{
        printf("La base de datos no tiene altas activas para mostrar.\n");
    }
}

//SE DEBE ADAPTAR EL CODIGO
void inicializarDatos(EPersona lista[],int tamLista)
{
    //Inicializa todo el array como espacio libre para admitir altas
    for(int i=0;i<tamLista;i++){
        lista[i].estado=0;
    }
}

//SE DEBE ADAPTAR EL CODIGO
int arrayVacio(EPersona lista[],int tamLista)
{
    //Flag, indica si la cadena esta vacia
    int cad_vacia=1;

    //Recorremos todo el array buscando algun alta activa
    for(int i=0;i<tamLista;i++){
        //Si encontramos un alta activa, marcamos el flag y no seguimos buscando mas elementos
        if(lista[i].estado==1){
            cad_vacia=0;
            break;
        }
    }

    //Segun corresponda, devolvemos 1 si el array no tiene altas, sino devolvemos 0
    return cad_vacia;
}
