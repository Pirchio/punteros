#include<stdio.h>
#include<stdlib.h>

#define MAX_PLAYERS 2

struct jugador {
	char nombre[32];
	int puntaje;
	int id;
};

int main(int argc, char* argv[])
{
	struct jugador jugadores[MAX_PLAYERS];
	struct jugador *ord[MAX_PLAYERS];
	int i, aux,k=0;

	for(i=0; i < MAX_PLAYERS; i++) {
		printf("Ingrese el nombre del jugador con id %d: ",i);
		scanf("%s", jugadores[i].nombre);
		printf("Ingrese el puntaje del jugador con id %d: ",i);
		scanf("%d", &jugadores[i].puntaje);

		jugadores[i].id=i;
	}
    while(k==0)
    {
        k = 1;
        for(i=0;i<MAX_PLAYERS-1;i++)
        {
            if(ord[i]->puntaje < ord[i+1]->puntaje)
			{
			aux = ord[i];
			ord[i] = ord[i+1];
			ord[i+1] = aux;
            k=0;
			}
        }
    }
	printf("\n#SALIDA#\n");

//A PARTIR DE ESTE PUNTO LA SALIDA DEL PROGRAMA DEBE COINCIDIR EXACTAMENTE CON EL LOTE DE PRUEBA
    printf("ID, Nombre, Puntaje\n");
    for(i=0;i<MAX_PLAYERS;i++)
        {
            printf("%d, %s, %d\n",ord[i]->id,ord[i]->nombre,ord[i]->puntaje);
        }



	return 0;
}
