#ifndef Vikingo_h
#define Vikingo_h
#include "Personaje.h"

class Vikingo: public Personaje{
    public:
        Vikingo();
        Vikingo(int, int, string, int, int);
        int getArma();
        void setArma(int);
        void shoot(int);
    private:
        int arma;
};

//Getters

Vikingo::Vikingo(): Personaje(){
    mascota= 0;
    arma= 0;
    Nombre= "";
    HP=100;
    progreso=0;
}

Vikingo::Vikingo(int weapon, int pet, string n, int healthp, int prog): Personaje(n, healthp, pet,prog){
    arma = weapon;
    mascota = pet;
    Nombre= n;
    HP = healthp;
    progreso = prog;
}
//Getters
int Vikingo::getArma(){
    return arma; 
}



//Setters
void Vikingo::setArma(int weapon){
    arma = weapon;
} 


void Vikingo::shoot(int n){ 
    cout << "Has atacado con tu hacha y has quitado " << n << " de vida!"<< endl;
} 

#endif /* Vikingo_h */