#ifndef Vuelo_h
#define Vuelo_h

#include "Tiempo.h"

class Vuelo{
    public:
        Vuelo();
        Vuelo(int nVuelo, string aerolineaVuelo, string origenVuelo, string destinoVuelo, Tiempo hDespegue, Tiempo hAterrizaje, string estatusVuelo, int pSalida);
        void setHoraDespegue(Tiempo hDespegue);
        void setHoraAterrizaje(Tiempo hAterrizaje);
        void setNumVuelo(int nVuelo);
        void setPuertaSalida(int pSalida);
        void setAerolinea(string aerolineaVuelo);
        void setEstatus(string estatusVuelo);
        void setOrigen(string origenVuelo);
        void setDestino(string destinoVuelo);
        Tiempo getHoraDespegue();
        Tiempo getHoraAterrizaje();
        int getNumVuelo();
        int getPuertaSalida();
        string getAerolinea();
        string getEstatus();
        string getOrigen();
        string getDestino();
    private:
        Tiempo horaDespegue, horaAterrizaje;
        int numVuelo, puertaSalida;
        string aerolinea, estatus, origen, destino;
};

Vuelo :: Vuelo(){
    Tiempo t,t2;
    t.setHora(20);
    t.setMinuto(00);
    horaDespegue = t;
    t2.setHora(20);
    t2.setMinuto(00);
    horaAterrizaje = t2;
    numVuelo = 1;
    puertaSalida = 10;
    aerolinea = "AEROMEXICO";
    estatus = "onTime";
    origen = "MTY";
    destino = "VER";
}

Vuelo :: Vuelo(int nVuelo, string aerolineaVuelo, string origenVuelo, string destinoVuelo, Tiempo hDespegue, Tiempo hAterrizaje, string estatusVuelo, int pSalida){
    horaDespegue = hDespegue;
    horaAterrizaje = hAterrizaje;
    numVuelo = nVuelo;
    puertaSalida = pSalida;
    aerolinea = aerolineaVuelo;
    estatus = estatusVuelo;
    origen = origenVuelo;
    destino = destinoVuelo;
}

void Vuelo :: setHoraDespegue(Tiempo hDespegue){
    horaDespegue = hDespegue;
}

void Vuelo :: setHoraAterrizaje(Tiempo hAterrizaje){
    horaAterrizaje = hAterrizaje;
}

void Vuelo :: setNumVuelo(int nVuelo){
    numVuelo = nVuelo;
}
void Vuelo :: setPuertaSalida(int pSalida){
    puertaSalida = pSalida;
}

void Vuelo :: setAerolinea(string aerolineaVuelo){
    aerolinea = aerolineaVuelo;
}

void Vuelo :: setEstatus(string estatusVuelo){
    estatus = estatusVuelo;
}

void Vuelo :: setOrigen(string origenVuelo){
    origen = origenVuelo;
}

void Vuelo :: setDestino(string destinoVuelo){
    destino = destinoVuelo;
}

Tiempo Vuelo :: getHoraDespegue(){
    return horaDespegue;
}

Tiempo Vuelo :: getHoraAterrizaje(){
    return horaAterrizaje;
}

int Vuelo :: getNumVuelo(){
    return numVuelo;
}

int Vuelo :: getPuertaSalida(){
    return puertaSalida;
}

string Vuelo :: getAerolinea(){
    return aerolinea;
}

string Vuelo :: getEstatus(){
    return estatus;
}

string Vuelo :: getOrigen(){
    return origen;
}

string Vuelo :: getDestino(){
    return destino;
}

#endif
