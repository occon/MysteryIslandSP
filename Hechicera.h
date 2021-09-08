#ifndef Hechicera_h
#define Hechicera_h
#include "Personaje.h"

class Hechicera: public Personaje{
    public:
        Hechicera();
        Hechicera(int, int, string, int, int);
        int getArma();
        void setArma(int);
        void shoot(int);
    private:
        int arma;
};

//Getters 

Hechicera::Hechicera(): Personaje(){
    arma= 0;
    mascota = 0;
    Nombre= "";
    HP= 100;
    progreso=0;
}

Hechicera::Hechicera(int weapon, int pet, string n, int healthp, int prog): Personaje(n, healthp, pet, prog){
    arma = weapon;
    mascota = pet;
    Nombre= n;
    HP = healthp;
    progreso= prog;
}
//Getters
int Hechicera::getArma(){
    return arma; 
}


//Setters
void Hechicera::setArma(int weapon){
    arma = weapon;
} 


void Hechicera::shoot(int n){ 
    cout << "Has atacado con tus hechizos y has quitado " << n << " de vida!"<< endl;
}

#endif /* Hechicera_h */