#ifndef Pasajero_h
#define Pasajero_h

class Pasajero{
public:
    Pasajero();
    Pasajero(string nombre, string grupo, int asiento, int nPasajero);
    void setNombrePasajero(string nombre);
    void setGrupo(string grupo);
    void setAsiento(int asiento);
    void setNumeroPasajero(int nPasajero);
    void setNumeroVuelo(int nVuelo);
    string getNombrePasajero();
    string getGrupo();
    int getNumeroVuelo();
    int getAsiento();
    int getNumeroPasajero();
private:
    string nombrePasajero, grupoPasajero;
    int numAsiento, numPasajero , numVuelo;
};

Pasajero :: Pasajero(){
    nombrePasajero="";
    grupoPasajero="";
    numAsiento=0;
    numPasajero=0;
}

Pasajero :: Pasajero(string nombre, string grupo, int asiento, int nPasajero){
    nombrePasajero = nombre;
    grupoPasajero = grupo;
    numAsiento = asiento;
    numPasajero = nPasajero;
}

void Pasajero :: setNombrePasajero(string nombre){
    nombrePasajero = nombre;
}

void Pasajero :: setNumeroVuelo(int nVuelo){
    numVuelo = nVuelo;
}

void Pasajero :: setGrupo(string grupo){
    grupoPasajero = grupo;
}

void Pasajero :: setAsiento(int asiento){
    numAsiento = asiento;
}

void Pasajero ::setNumeroPasajero(int nPasajero){
    numPasajero = nPasajero;
}

string Pasajero :: getNombrePasajero(){
    return nombrePasajero;
}

string Pasajero :: getGrupo(){
    return grupoPasajero;
}

int Pasajero :: getAsiento(){
    return numAsiento;
}

int Pasajero :: getNumeroVuelo(){
    return numVuelo;
}

int Pasajero :: getNumeroPasajero(){
    return numPasajero;
}

#endif

