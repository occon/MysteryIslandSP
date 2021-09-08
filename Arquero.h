#ifndef Arquero_h
#define Arquero_h
#include "Personaje.h"

class Arquero: public Personaje{
    public:
        Arquero();
        Arquero(int, int, string, int, int);
        int getArma();
        void setArma(int);
        void shoot(int);
    private:
        int arma;
};

//Getters

Arquero::Arquero(): Personaje(){
    arma= 0;
    mascota = 0;
    Nombre= "";
    HP= 100;
    progreso=0;
}

Arquero::Arquero(int weapon, int pet, string n, int healthp, int prog): Personaje(n, healthp,pet,prog){
    arma = weapon;
    mascota = pet;
    Nombre= n;
    HP = healthp;
    progreso= prog;
}
//Getters
int Arquero::getArma(){
    return arma; 
}


//Setters
void Arquero::setArma(int weapon){
    arma = weapon;
} 


//Funciones

void Arquero::shoot(int n){ 
    cout << "Estas disparando flechas y le has quitado " << n << " de vida!" << endl;
}

#endif /* Arquero_h */