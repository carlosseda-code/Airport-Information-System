/* Proyecto integrador:
 Este programa simula un sistema de información de un aeropuerto, donde se involucra composición de clases.
 Autor: Carlos Augusto Pluma Seda
 Matricula: A00827514
 Fecha de creación: 28/11/2019 */

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

#include "Vuelo.h"
#include "Tiempo.h"
#include "Pasajero.h"

// Esta función carga la información del archivo pasajeros.txt y la guarda en el arreglo de listaPasajeros
void cargaPasajeros(Pasajero listaPasajeros[], int &cantPasajeros){
    string nombrePasajero, gpoPasajero;
    int nAsiento, nPasajero, nVuelo;
    ifstream archPasajeros;

    archPasajeros.open("pasajeros.txt");
    cantPasajeros = 0;
    while(archPasajeros >> nVuelo >> nombrePasajero >> gpoPasajero >> nAsiento >> nPasajero){
          listaPasajeros[cantPasajeros].setNumeroVuelo(nVuelo);
          listaPasajeros[cantPasajeros].setNombrePasajero(nombrePasajero);
          listaPasajeros[cantPasajeros].setGrupo(gpoPasajero);
          listaPasajeros[cantPasajeros].setAsiento(nAsiento);
          listaPasajeros[cantPasajeros].setNumeroPasajero(nPasajero);
          cantPasajeros++;
    }
    archPasajeros.close();
}

// Esta función muestra todos los datos de los pasajeros de la lista Pasajeros
void muestraDatosPasajeros(Pasajero listaPasajeros[], int cantPasajeros){
    for(int i=0;i<cantPasajeros;i++){
        cout << "---------------------------------------------------------" << endl;
        cout << "Numero del vuelo: " << listaPasajeros[i].getNumeroVuelo()<<endl;
        cout << "Numero del pasajero: " << listaPasajeros[i].getNumeroPasajero()<<endl;
        cout << "Nombre del pasajero: " << listaPasajeros[i].getNombrePasajero()<<endl;
        cout << "Grupo: " << listaPasajeros[i].getGrupo()<<endl;
        cout << "Asiento del pasajero: " << listaPasajeros[i].getAsiento()<<endl;
        cout << "---------------------------------------------------------" << endl;
    }
}

// Esta función carga la información del archivo vuelos.txt y la guarda en el arreglo de listaVuelos
void cargaVuelos(Vuelo listaVuelos[], int &cantidadVuelos){
    Tiempo hDespegue, hAterrizaje;
    int nVuelo, pSalida, horaDespegue, minutoDespegue, horaAterrizaje, minutoAterrizaje;
    string aerolineaVuelos, estatusVuelo, origenVuelo, destinoVuelo;
    ifstream archVuelos;

    archVuelos.open("vuelos.txt");
    cantidadVuelos = 0;
    while(archVuelos >> nVuelo >> aerolineaVuelos >> origenVuelo >> destinoVuelo >> horaDespegue >> minutoDespegue >> horaAterrizaje >> minutoAterrizaje >> estatusVuelo >> pSalida){
          hDespegue.setHora(horaDespegue);
          hDespegue.setMinuto(minutoDespegue);
          hAterrizaje.setHora(horaAterrizaje);
          hAterrizaje.setMinuto(minutoAterrizaje);

          listaVuelos[cantidadVuelos].setNumVuelo(nVuelo);
          listaVuelos[cantidadVuelos].setAerolinea(aerolineaVuelos);
          listaVuelos[cantidadVuelos].setOrigen(origenVuelo);
          listaVuelos[cantidadVuelos].setDestino(destinoVuelo);
          listaVuelos[cantidadVuelos].setHoraDespegue(hDespegue);
          listaVuelos[cantidadVuelos].setHoraAterrizaje(hAterrizaje);
          listaVuelos[cantidadVuelos].setEstatus(estatusVuelo);
          listaVuelos[cantidadVuelos].setPuertaSalida(pSalida);
          cantidadVuelos++;
    }
    archVuelos.close();
}

// Esta función muestra la información de la lista vuelos
void muestraDatosVuelos(Vuelo listaVuelos[], int cantidadVuelos){
    Tiempo tiempoTemporal,tiempoTemporal2;
    for(int i=0;i<cantidadVuelos;i++){
        cout << "*********************************************************" << endl;
        cout << "Numero del vuelo: " << listaVuelos[i].getNumVuelo()<<endl;
        cout << "Aerolinea: " << listaVuelos[i].getAerolinea()<<endl;
        cout << "Origen: " << listaVuelos[i].getOrigen()<<endl;
        cout << "Destino: " << listaVuelos[i].getDestino()<<endl;
        tiempoTemporal = listaVuelos[i].getHoraDespegue();
        cout << "Hora de despegue: " << tiempoTemporal.getHora() << ":" << tiempoTemporal.getMinuto() << endl;
        tiempoTemporal2 = listaVuelos[i].getHoraAterrizaje();
        cout << "Hora de aterrizaje: " << tiempoTemporal2.getHora() << ":" << tiempoTemporal2.getMinuto() << endl;
        cout << "Estatus: " << listaVuelos[i].getEstatus()<<endl;
        cout << "Puerta de salida: " << listaVuelos[i].getPuertaSalida()<<endl;
        cout << "*********************************************************" << endl;
    }
}

// Esta función permite añadir un nuevo Pasajero al arreglo lista de pasajeros
void altaPasajero(Pasajero listaPasajeros[],int &cantPasajeros){
    int cantidad, nAsiento, nPasajero, nVuelo;
    string nombrePasajero, gpoPasajero;

    cout << "+++++++++++++++++++++++++++++++++++++++++++" <<endl;
    cout << "¿Cuantos pasajeros desea agregar al sistema? ";
    cin >> cantidad;
    for(int i=0;i<cantidad;i++){
        cout << "+++++++++++++++++++++++++++++++++++++++++++" <<endl;
        cout << "Numero del vuelo: ";
        cin >> nVuelo;
        cout << endl;
        cout << "Numero del pasajero(numero): ";
        cin >> nPasajero;
        cout << endl;
        cout << "Nombre del pasajero: ";
        cin >> nombrePasajero;
        cout << endl;
        cout << "Grupo del pasajero: ";
        cin >> gpoPasajero;
        cout << endl;
        cout << "Numero del asiento: ";
        cin >> nAsiento;
        cout << endl;

        listaPasajeros[cantPasajeros].setNumeroVuelo(nVuelo);
        listaPasajeros[cantPasajeros].setNumeroPasajero(nPasajero);
        listaPasajeros[cantPasajeros].setNombrePasajero(nombrePasajero);
        listaPasajeros[cantPasajeros].setGrupo(gpoPasajero);
        listaPasajeros[cantPasajeros].setAsiento(nAsiento);
        cantPasajeros++;
        cout << "+++++++++++++++++++++++++++++++++++++++++++" <<endl;
        }
}

// Esta función permite añadir un nuevo vuelo disponible al sistema
void altaVuelo(Vuelo listaVuelos[],int &cantidadVuelos){
    int cantidad, nVuelo, pSalida, horaDesp, minDesp, horaAterr, minAterr;
    string aerolineaVuelo, estatusVuelo, origenVuelo, destinoVuelo;
    Tiempo hDespegue, hAterrizaje;

    cout << "################################################" <<endl;
    cout << "¿Cuantos vuelos desea agregar al sistema? ";
    cin >> cantidad;
    for(int i=0;i<cantidad;i++){
        cout << "################################################" <<endl;
        cout << "Numero del vuelo: ";
        cin >> nVuelo;
        cout << endl;
        cout << "Aerolinea del vuelo: ";
        cin >> aerolineaVuelo;
        cout << endl;
        cout << "Origen: ";
        cin >> origenVuelo;
        cout << endl;
        cout << "Destino: ";
        cin >> destinoVuelo;
        cout << endl;
        cout << "Hora de despegue (Hora y minutos): ";
        cin >> horaDesp >> minDesp;
        cout << endl;
        cout << "Hora de aterrizaje (Hora y minutos): ";
        cin >> horaAterr >> minAterr;
        cout << endl;
        cout << "Estado del vuelo: ";
        cin >> estatusVuelo;
        cout << endl;
        cout << "Puerta de salida: ";
        cin >> pSalida;
        cout << endl;

        hDespegue.setHora(horaDesp);
        hDespegue.setMinuto(minDesp);
        hAterrizaje.setHora(horaAterr);
        hAterrizaje.setMinuto(minAterr);
        listaVuelos[cantidadVuelos].setNumVuelo(nVuelo);
        listaVuelos[cantidadVuelos].setAerolinea(aerolineaVuelo);
        listaVuelos[cantidadVuelos].setOrigen(origenVuelo);
        listaVuelos[cantidadVuelos].setDestino(destinoVuelo);
        listaVuelos[cantidadVuelos].setHoraDespegue(hDespegue);
        listaVuelos[cantidadVuelos].setHoraAterrizaje(hAterrizaje);
        listaVuelos[cantidadVuelos].setEstatus(estatusVuelo);
        listaVuelos[cantidadVuelos].setPuertaSalida(pSalida);

        cantidadVuelos++;
        cout << "################################################" <<endl;
        }
}

// Esta función muestra todos los pasajeros de dicho vuelo
void consultaPasajeros(Pasajero listaPasajeros[], int cantPasajeros, Vuelo listaVuelos[], int cantidadVuelos){
    int eleccionVuelo;
    Tiempo tiempoTemporal, tiempoTemporal2;
    cout << "Vuelo al que desea acceder (1-3): ";
    cin >> eleccionVuelo;
    for(int i=0;i<cantidadVuelos;i++){
        if(listaVuelos[i].getNumVuelo()==eleccionVuelo){
        cout << "*********************************************************" << endl;
        cout << "Aerolinea: " << listaVuelos[i].getAerolinea()<<endl;
        cout << "Origen: " << listaVuelos[i].getOrigen()<<endl;
        cout << "Destino: " << listaVuelos[i].getDestino()<<endl;
        tiempoTemporal = listaVuelos[i].getHoraDespegue();
        cout << "Hora de despegue: " << tiempoTemporal.getHora() << ":" << tiempoTemporal.getMinuto() << endl;
        tiempoTemporal2 = listaVuelos[i].getHoraAterrizaje();
        cout << "Hora de aterrizaje: " << tiempoTemporal2.getHora() << ":" << tiempoTemporal2.getMinuto() << endl;
        cout << "Estatus: " << listaVuelos[i].getEstatus()<<endl;
        cout << "Puerta de salida: " << listaVuelos[i].getPuertaSalida()<<endl;
        cout << "*********************************************************" << endl;
        }
    }
    for(int i=0;i<cantPasajeros;i++){
        if(listaPasajeros[i].getNumeroVuelo()==eleccionVuelo){
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
            cout << "Numero del pasajero: " << listaPasajeros[i].getNumeroPasajero()<<endl;
            cout << "Nombre del pasajero: " << listaPasajeros[i].getNombrePasajero()<<endl;
            cout << "Grupo: " << listaPasajeros[i].getGrupo()<<endl;
            cout << "Asiento del pasajero: " << listaPasajeros[i].getAsiento()<<endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        }
    }
}

int main(){

int cantidadVuelos, cantPasajeros, numSistema=0, contadorCarga=0;
Vuelo listaVuelos[20];
Pasajero listaPasajeros[20];

while(numSistema==0){
    cout << "---------------------------------------------------------" << endl;
    cout << "Sistema de informacion para aeropuerto de Monterrey:" << endl;
    cout << "   Bienvenido Usuario" << endl;
    cout << "   Pulse 1 para consultar la lista de vuelos disponibles" << endl;
    cout << "   Pulse 2 para consultar la lista de datos de Pasajeros" << endl;
    cout << "   Pulse 3 para dar de alta un nuevo Vuelo" << endl;
    cout << "   Pulse 4 para dar de alta un nuevo Pasajero" << endl;
    cout << "   Pulse 5 para ver los pasajeros de un determinado vuelo disponible " << endl;
    cout << "   Pulse 6 para salir del sistema " << endl;
    cout << "---------------------------------------------------------" << endl;
    cin >> numSistema;
    if(contadorCarga<1){
        cargaPasajeros(listaPasajeros, cantPasajeros);
        cargaVuelos(listaVuelos, cantidadVuelos);
        contadorCarga=1;
    }
    if(numSistema<1 || numSistema>6)
        numSistema = 0;
    if(numSistema==1){
        muestraDatosVuelos(listaVuelos, cantidadVuelos);
        numSistema = 0;
    }
    if(numSistema==2){
        muestraDatosPasajeros(listaPasajeros, cantPasajeros);
        numSistema = 0;
    }
    if(numSistema==3){
        altaVuelo(listaVuelos, cantidadVuelos);
        numSistema = 0;
    }
    if(numSistema==4){
        altaPasajero(listaPasajeros, cantPasajeros);
        numSistema = 0;
    }
    if(numSistema==5){
        consultaPasajeros(listaPasajeros, cantPasajeros, listaVuelos, cantidadVuelos);
        numSistema = 0;
    }
}
}
