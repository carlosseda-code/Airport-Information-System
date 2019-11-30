#ifndef Tiempo_h
#define Tiempo_h
class Tiempo{
public:
    Tiempo();
    Tiempo(int h,int minu);
    int getHora();
    int getMinuto();
    void setHora(int h);
    void setMinuto(int minu);
private:
    int hora,minuto;
};

Tiempo :: Tiempo(){
    hora=0;
    minuto=0;
}

Tiempo :: Tiempo(int h,int minu){
    hora=h;
    minuto=minu;
}

int Tiempo :: getHora(){
    return hora;
}

int Tiempo :: getMinuto(){
    return minuto;
}

void Tiempo :: setHora(int h){
    hora=h;
}

void Tiempo :: setMinuto(int minu){
    minuto=minu;
}

#endif
