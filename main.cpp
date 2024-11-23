/*  Grupo 1
 *  Falí Ferdinand Araoz Arana              202410721
 *  Gonzalo Andres Valladolid Jiménez       202410186
 *  Bruno Gonzalo Vega Napan                2024
 *  Daniel Abraham Mercado Valdez           2024
*/
#include "CCLases.h"

int main(){

    int n;

    do {
        cout<<"Dots & Boxes"<<endl;
        cout<<"~~~~~~~~~~~~~"<<endl;

        cout<<"1. Tablero 6x6"<<endl;
        cout<<"2. Tablero 10x10"<<endl;
        cout<<"0. Salir"<<endl;
        cout<<"Seleccione la opcion: "<<endl; cin>>n;
    }while(n != 1 and n != 2 and n != 0);


    if (n==1){cout<<"Se ejecuta el programa 6x6";}
    else if (n==2){cout<<"se ejecuta el programa 10x10";}
    else{return 0;}


    return 0;
}
