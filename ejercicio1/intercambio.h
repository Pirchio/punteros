#ifndef _INTERCAMBIO_H
#define _INTERCAMBIO_H

void intercambio(int* pi1, int* pi2);
void ordenarEnteros(int viEnteros[], int iCantidad);


void intercambio(int* pi1, int* pi2){
    int aux;
        aux = *pi1;
        *pi1 = *pi2;
        *pi2 = aux;
}
#endif
void ordenarEnteros(int viEnteros[], int iCantidad){
    int l = 1, i;
	while(l==1){
		l = 0;
		for(i = 0; i < iCantidad-1;i++){
			if(viEnteros[i] > viEnteros[i+1]){
				intercambio(&viEnteros[i], &viEnteros[i+1]);
			}
		}
	}
}

