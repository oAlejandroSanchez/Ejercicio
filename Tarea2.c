#include<stdlib.h> //cambi un error de escritura
#include<stdio.h>
#include<time.h>
int main(){ //se agrego la función principal main
	char *lista[]={"Nombre 1, Nombre 2, Nombre 3"}; 
	int i, c, tam, gan, sel1, sel2, sel3;

    do{
        printf("\n¡Hola! Apreta 1 y enter para ver la lista de concursantes! o 2 para salir\n\n>>");//se corrigio posición de comillas
        scanf("%i",&sel1);//se agrego el & faltante
        switch(sel1){
            case 1:
            printf("\nLa lista es la siguente\n\n");
            tam = sizeof(lista)/sizeof(char*);
        	for(i=0; i < tam; i++){
        	    c=i+1;
        	    printf("==================================\n");
            	printf(">>>No. %i - %s<<<\n",c, lista[i]);
            	printf("==================================\n");
                }
                printf("\n¡Estos son los concursantes!\n");
                do{
                    printf("\nSi quieres sacar al ganador apreta 1! Si quieres ir al menú anterior, apreta 2\n>>");
                    scanf("%i", &sel2);
                    switch(sel2){
                        case 1:
                        srand(time(NULL));
                    	gan = rand()%tam;
                    	printf("\nGracias por apretar 1, El ganador del concurso es...\n");
                    	sleep(3);
                    	sleep(5);
                    	sleep(5);
                    	printf("=======================================\n");
                    	printf("~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n");
                    	printf("> > >%s< < <\n", lista[gan]);
                    	printf("~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n");
                    	printf("=======================================\n");
                    	printf("¡¡¡¡Muchísimas Felicidades!!!!\n\n");
                    	do{
                    	    printf("\nApreta 1 para regresar al menú anterior\n>>");
                    	    scanf("%i", &sel3);
                    	    switch(sel3){
                    	        case 1:
                    	        break;
                    	        default:
                    	        break;
                    	    }
                    	}while(sel3!=1);
                    	break;
                    	case 2: 
                    	printf("\nVolvamos al menú anterior\n");
                    	break;
                    	default:
                    	printf("\nNo existe tal opción\n"); //Faltaba punto y coma
                    	break;
                    }
                    
                }while(sel2 != 2); //Faltaba punto y coma
            break;
            case 2:
            printf("\nBye bye" );//faltaban comillas
            break;
            default:
            printf("\nNo existe tal opción\n");
            break;
        }
    }while(sel1!=2);

}
//Sobraba una llave de cierre
