#ifndef Dragon_h
#define Dragon_h
#include "Personaje.h"

using namespace std;
class Dragon: public Personaje{
    public:
        Dragon();
        Dragon(string, string, int, int,int);
        string getArma();
        void setArma(string);
        void shoot(int);
    private:
        string arma;
};

//Getters

Dragon::Dragon(): Personaje(){
    Nombre = "Dragon";
    HP= 100;
    arma= "llamas de fuego";
    mascota = 0;
}

Dragon::Dragon(string weapon, string n, int healthp, int pet, int prog):  Personaje(n, healthp, pet, prog){
    Nombre = n;
    arma = weapon;
    HP = healthp;
    mascota = pet;
    progreso= prog;
}
//Getters
string Dragon::getArma(){
    return arma; 
}



//Setters
void Dragon::setArma(string weapon){
    arma = weapon;
} 

//

void Dragon::shoot(int n){ 
    cout << "Te ha atacado un dragon con sus " << arma << " y te ha quitado " << n << " puntos de vida" << endl;
}

#endif /* Troll_h */