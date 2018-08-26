#include <stdio.h>
#include <stdlib.h>
#include <time.h>
typedef struct {
    char nombre [20];
    int puntaje[10];
}tjugador;
void imprimirTirada(int dados[5]);
int juegoTerminado(int puntajes[10]);
int sumarIguales(int dados[5], int numero);
int esEscalera (int dados[5]);
void imprimirPuntajes(int puntajes[19]);
void tacharJugada (int puntajes[10], int d);
int esGenerala (int dados[5]);
void ordenarVector (int dados[5]);
int esPoker (int dados [5]);
int esFull (int dados[5]);
int main(){
    srand ((unsigned int)time(NULL));
    int i, a, b, c, d, nrotiradas=1;
    int dados [5];
    int puntajes [10] = { 0 };
    tjugador jugador1;
    tjugador jugador2;

    printf("***GENERALA***\n");

    for(i=0; i< 5;i++){
        dados[i]= rand()%6 + 1;
    }
    imprimirTirada(dados);
    printf("Seleccione la accion a realizar: \n");
    printf("1. Rodar todos los dados nuevamente\n");
    printf("2. Rodar dados en particular\n");
    printf("3. Anotar la jugada\n");
    scanf("%d",&a);


    while(!juegoTerminado(puntajes)){
            switch(a){
            case 1:
                for(i=0; i< 5;i++){
                dados[i]= rand()%6 + 1;
                }
                imprimirTirada(dados);
                nrotiradas++;
            break;
            case 2:
                printf("Seleccione los dados a rodar (-1 para terminar): \n");
                scanf("%d",&b);
                while(b!=-1){
                dados[b-1]= rand()%6 + 1;
                scanf("%d",&b);
                }
                imprimirTirada(dados);
                nrotiradas++;
            break;
            case 3:
            nrotiradas = 0;
            printf("Elija la jugada a realizar:\n");
            printf("1. Sumar unos\n");
            printf("2. Sumar dos\n");
            printf("3. Sumar tres\n");
            printf("4. Sumar cuatros\n");
            printf("5. Sumar cincos\n");
            printf("6. Sumar seis\n");
            printf("7. Sumar Escalera\n");
            printf("8. Sumar Full\n");
            printf("9. Sumar Poker\n");
            printf("10. Sumar Generala\n");
            printf("0. Tachar una jugada\n\n");
            scanf("%d",&c);
            switch(c){
                    case 1:
                        if(puntajes[c-1] != NULL){
                            printf("Accion invalida. Seleccione otra accion\n");
                            continue;
                        }
                        if(sumarIguales(dados, c)){
                            puntajes[c-1] = sumarIguales(dados, c);
                            imprimirPuntajes(puntajes);
                        }
                        else{
                            printf("No existe la suma para la jugada seleccionada\n");
                        }
                break;
                    case 2:
                        if(puntajes[c-1] != NULL){
                            printf("Accion invalida. Seleccione otra accion\n");
                            continue;
                        }
                        if(sumarIguales(dados, c)){
                            puntajes[c-1] = sumarIguales(dados, c);
                            imprimirPuntajes(puntajes);
                        }
                        else{
                            printf("No existe la suma para la jugada seleccionada\n");
                        }
                break;
                    case 3:
                        if(puntajes[c-1] != NULL){
                            printf("Accion invalida. Seleccione otra accion\n");
                            continue;
                        }
                        if(sumarIguales(dados, c)){
                            puntajes[c-1] = sumarIguales(dados, c);
                            imprimirPuntajes(puntajes);
                        }
                        else{
                            printf("No existe la suma para la jugada seleccionada\n");
                        }
                break;
                    case 4:
                        if(puntajes[c-1] != NULL){
                            printf("Accion invalida. Seleccione otra accion\n");
                            continue;
                        }
                        if(sumarIguales(dados, c)){
                            puntajes[c-1] = sumarIguales(dados, c);
                            imprimirPuntajes(puntajes);
                        }
                        else{
                            printf("No existe la suma para la jugada seleccionada\n");
                        }
                break;
                    case 5:
                        if(puntajes[c-1] != NULL){
                            printf("Accion invalida. Seleccione otra accion\n");
                            continue;
                        }
                        if(sumarIguales(dados, c)){
                            puntajes[c-1] = sumarIguales(dados, c);
                            imprimirPuntajes(puntajes);
                        }
                        else{
                            printf("No existe la suma para la jugada seleccionada\n");
                        }
                break;
                    case 6:
                        if(puntajes[c-1] != NULL){
                            printf("Accion invalida. Seleccione otra accion\n");
                            continue;
                        }
                        if(sumarIguales(dados,c)){
                            puntajes[c-1] = sumarIguales(dados, c);
                            imprimirPuntajes(puntajes);
                        }
                        else{
                            printf("No existe la suma para la jugada seleccionada\n");
                        }
                break;
                    case 7:
                        if(puntajes[c-1] != NULL){
                            printf("Accion invalida. Seleccione otra accion\n");
                            continue;
                        }
                        if(esEscalera(dados)){
                            puntajes [6] = 20;
                            imprimirPuntajes(puntajes);
                        }
                        else{
                            printf("La seleccion es incorrecta\n");
                        }
                break;
                    case 8:
                        if(puntajes[c-1] != NULL){
                            printf("Accion invalida. Seleccione otra accion\n");
                            continue;
                        }
                        if(esFull(dados)){
                            puntajes[7] = 30;
                            imprimirPuntajes(puntajes);
                        }
                        else{
                            printf("La seleccion es incorrecta\n");
                        }
                break;
                    case 9:
                        if(puntajes[c-1] != NULL){
                            printf("Accion invalida. Seleccione otra accion\n");
                            continue;
                        }
                        if(esPoker(dados)){
                            puntajes[8] = 40;
                            imprimirPuntajes(puntajes);
                        }
                        else{
                            printf("La seleccion es incorrecta\n");
                        }

                break;
                    case 10:
                        if(puntajes[c-1] != NULL){
                            printf("Accion invalida. Seleccione otra accion\n");
                            continue;
                        }
                        if(esGenerala(dados)){
                                puntajes[9] = 50;
                                imprimirPuntajes(puntajes);
                        }
                        else{
                            printf("La seleccion es incorrecta\n");
                        }
                break;
                    case 0:
                        printf("Seleccione la jugada a tachar:\n");
                        printf("1. Sumar unos\n");
                        printf("2. Sumar dos\n");
                        printf("3. Sumar tres\n");
                        printf("4. Sumar cuatros\n");
                        printf("5. Sumar cincos\n");
                        printf("6. Sumar seis\n");
                        printf("7. Escalera\n");
                        printf("8. Full\n");
                        printf("9. Poker\n");
                        printf("10.Generala\n\n");
                        scanf("%d",&d);
                        switch(d){
                    case 1:
                        if(puntajes[d-1] == -1){
                            printf("Accion invalida. Seleccione otra accion\n");
                            continue;
                        }
                        tacharJugada(puntajes, d);
                        break;
                    case 2:
                        if(puntajes[d-1] == -1){
                            printf("Accion invalida. Seleccione otra accion\n");
                            continue;
                        }
                        tacharJugada(puntajes, d);
                        break;
                    case 3:
                        if(puntajes[d-1] == -1){
                            printf("Accion invalida. Seleccione otra accion\n");
                            continue;
                        }
                        tacharJugada(puntajes, d);
                        break;
                    case 4:
                        if(puntajes[d-1] == -1){
                            printf("Accion invalida. Seleccione otra accion\n");
                            continue;
                        }
                        tacharJugada(puntajes, d);
                        break;
                    case 5:
                        if(puntajes[d-1] == -1){
                            printf("Accion invalida. Seleccione otra accion\n");
                            continue;
                        }
                        tacharJugada(puntajes, d);
                        break;
                    case 6:
                        if(puntajes[d-1] == -1){
                            printf("Accion invalida. Seleccione otra accion\n");
                            continue;
                        }
                        tacharJugada(puntajes, d);
                        break;
                    case 7:
                        if(puntajes[d-1] == -1){
                            printf("Accion invalida. Seleccione otra accion\n");
                            continue;
                        }
                        tacharJugada(puntajes, d);
                        break;
                    case 8:
                        if(puntajes[d-1] == -1){
                            printf("Accion invalida. Seleccione otra accion\n");
                            continue;
                        }
                        tacharJugada(puntajes, d);
                        break;
                    case 9:
                        if(puntajes[d-1] == -1){
                            printf("Accion invalida. Seleccione otra accion\n");
                            continue;
                        }
                        tacharJugada(puntajes, d);
                        break;
                    case 10:
                        if(puntajes[d-1] == -1){
                            printf("Accion invalida. Seleccione otra accion\n");
                            continue;
                        }
                        tacharJugada(puntajes, d);
                        break;
                        }
                break;

            }
            break;
        }
        if(juegoTerminado(puntajes)){
            break;
        }


            if(nrotiradas ==3){
                printf("Debe anotar una jugada\n");
                a=3;
                nrotiradas = 0;
            }
            else{
                printf("Seleccione la accion a realizar: \n");
                printf("1. Rodar todos los dados nuevamente\n");
                printf("2. Rodar dados en particular\n");
                printf("3. Anotar la jugada\n");
                scanf("%d",&a);
            }
    }

    printf("Se ha terminado el juego.\n");
    return 0;
}

void imprimirTirada(int dados[5]){
    int i;
    printf("La tirada es: \n");
    for(i=0;i<5;i++){
    printf("Dado %d: %d\n",i+1, dados[i]);
    }
}

void imprimirPuntajes(int puntajes[10]){
        int k=0;
            printf("***PUNTAJES***\n");
            printf("1. Sumar unos: %i \n", puntajes[k++]);
            printf("2. Sumar dos: %i \n", puntajes[k++]);
            printf("3. Sumar tres: %i \n", puntajes[k++]);
            printf("4. Sumar cuatros: %i \n", puntajes[k++]);
            printf("5. Sumar cincos: %i \n", puntajes[k++]);
            printf("6. Sumar seis: %i \n", puntajes[k++]);
            printf("7. Sumar Escalera: %i \n", puntajes[k++]);
            printf("8. Sumar Full: %i \n", puntajes[k++]);
            printf("9. Sumar Poker: %i \n", puntajes[k++]);
            printf("10. Sumar Generala: %i \n", puntajes[k++]);
            printf("**************\n");
        }

int juegoTerminado(int puntajes[10]){
    // Si todos los casilleros de puntaje son distintos del valor inicial termina el juego
    //(sea por ingreso de puntos o tachar jugada)
   int jugadas, j, contador=0;
   for(j=0;j<10;j++){
    if(puntajes[j] != 0){
        contador++;
    }
   }
   if(contador == 10){
    jugadas = 1;
   }
   else {
    jugadas = 0;
   }
   return jugadas;
}

int sumarIguales(int dados[5], int numero){
    int i, suma = 0;
    for(i=0;i<5;i++){
        if(dados[i] == numero){
            suma= suma + dados [i];
        }
    }
    return suma;
}

int esEscalera (int dados[5]){
    //Si el primer elemento mas 1 es igual al segundo elemento, y el segundo elemento mas 1 es igual al tercer elemento...
    //Valida para la escalera de 1 a 5 y de 2 a 6
    int flag = 0;
    ordenarVector(dados);
    if(dados[0]+1 == dados[1] && dados[1]+1 == dados[2] && dados[2]+1 == dados [3] && dados[3]+1 == dados[4]){
        flag = 1;
    }
    return flag;
}

void tacharJugada (int puntajes[10], int d){
    //Resto 1 para arreglar el corrimiento del vector con el ingreso de datos
    puntajes[d-1] = -1;
}

int esGenerala (int dados[5]){
int i, contador = 0, flag = 0;
    for (i=1;i<5;i++){
        if(dados[0] == dados[i]){ //Si los elementos [1]...[4] son iguales al primer elemento sale true
            contador++;
        }
    }
    if(contador == 4){
        flag = 1;
    }
    return flag;
}

int esPoker (int dados [5]){
    //Con el vector ordenado tengo 2 casos: [x, y, y, y, y] o [x, x, x, x, y] y valido ambas; para cualquier otro caso no es poker
int flag = 0;
    ordenarVector(dados);
    if((dados[0] == dados[1]) && (dados[1] == dados[2]) && (dados[2] == dados[3])){
            flag = 1;
    }
    else{
        if(dados[1] == dados[2] && dados[2] == dados[3] && dados[3] == dados[4]){
            flag = 1;
        }
    }
    return flag;
}

void ordenarVector (int dados[5]){
    int i, j, aux;
    for(i = 1; i < 5; i++){
        for(j = 0; j < 4; j++){
            if(dados[j]>dados[j+1]){
                aux = dados[j];
                dados[j]= dados[j+1];
                dados[j+1]= aux;
            }
        }
    }
}
int esFull (int dados[5]){
    //Con el vector ordenado tengo 2 casos: [x, x, y, y, y] o [x, x, x, y, y] y valido ambas; para cualquier otro caso no es full
    int flag = 0;
    ordenarVector(dados);
    if(dados[0] == dados[1] && dados[1] == dados[2] && dados[3] == dados[4]){
        flag = 1;
    }
    if(dados[0] == dados[1] && dados[2] == dados[3] && dados[3] == dados[4]){
        flag = 1;
    }
    return flag;
}

