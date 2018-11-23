#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[])
{
    char* p;
    char secuencia[150];
    printf("ingrese la secuencia de palabras:\n");
    gets(secuencia);
    p = &secuencia;
//ESCRIBA AQUI ARRIBA EL CÓDIGO DE ENTRADA SALIDA PARA OBTENER LOS DATOS SOLICITADOS EN EL ENUNCIADO
//A PARTIR DE ESTE PUNTO LA SALIDA DEL PROGRAMA DEBE COINCIDIR EXACTAMENTE CON EL LOTE DE PRUEBA
	printf("\n#SALIDA#\n");
	printf("%s\n", p);
    while (p!='/0'){
        if(*p == ',')
            printf("%s\n",p+1);
         p++;
      }

	return 0;
}
