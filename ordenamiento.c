//Metodo de ordenamiento de vectores de la burbuja para numeros
void ordenamientoBurbujaNumeros(int nums1[],int tam_nums,int ascend){
    int i,j,aux;

    for(i=0;i<tam_nums-1;i++){
        for(j=i+1;j<tam_nums;j++){
            if((ascend!=0 && nums1[i]>nums1[j]) || (ascend==0 && nums1[i]<nums1[j])){
                aux=nums1[i];
                nums1[i]=nums1[j];
                nums1[j]=aux;
            }
        }
    }
}
