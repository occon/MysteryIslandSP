#ifndef Personaje_h
#define Personaje_h
using namespace std;
#include "ItemKey.h"
#define GREEN   "\033[32m"      /* Green */
#define RESET   "\033[0m"

class Personaje{
    public:
        Personaje();
        Personaje(string, int, int,int); 
        string getNombre();
        int getHP();
        int getProgreso();
        void setProgreso(int);
        void setHP(int);
        void setNombre(string);
        void setMascota(int);
        int getMascota();
        void AdicionaLlave(Items*);
        void showInventario();
        void LeerCartel();
        virtual void shoot(int);
        virtual void imprime();

    protected:
        string Nombre; 
        int HP;
        int mascota;
        int progreso;
        vector <Items*> vecItems; 
};

Personaje::Personaje(){
    Nombre= "-";
    HP = 100;
    mascota = 0;
    progreso= 0;
}

const string sign =
"  ________________________________________________________________________________________________________________________\n"
" /  ______    _______ ______    ____   ______     ____        ____ ______  _____   ____ __________    ________    ____    \\\n"
"/  / ___) )  ( (_   _|_  __ \\  (    ) (_  __ \\   / __ \\      / ___|   __ \\(_   _) (    |___  ___) )  ( (   __\\ \\ (    )    \\ \n"
"| / /  ( (    ) )| |   ) ) \\ \\ / /\\ \\   ) ) \\ \\ / /  \\ \\    / /    ) (__) ) | |   / /\\ \\   ) ) ( (    ) ) (__) ) / /\\ \\    |   \n"
"|( (    ) )  ( ( | |  ( (   ) | (__) ) ( (   ) | ()  () )  ( (    (    __/  | |  ( (__) ) ( (   ) )  ( (    __/ ( (__) )   | \n"
"|( (   ( (    ) )| |   ) )  ) ))    (   ) )  ) | ()  () )  ( (     ) \\ \\  _ | |   )    (   ) ) ( (    ) ) \\ \\  _ )    (    | \n"
"| \\ \\___) \\__/ (_| |__/ /__/ //  /\\  \\ / /__/ / \\ \\__/ /_   \\ \\___( ( \\ \\_))| |__/  /\\  \\ ( (   ) \\__/ ( ( \\ \\_))  /\\  \\   |  \n"
"|  \\____)______/_____(______//__(  )__(______/   \\____(  )   \\____))_) \\__/_____(__(  )__\\/__\\  \\______/)_) \\__/__(  )__\\  | \n"                                               
"|     _____   _____ _____    _____  _____ ______    ____   _____ ____       ____    ____   __    _______                   |\n"
"|    (  __ \\ / ___/(_   _)  (_   _)/ ___ (   __ \\  / __ \\ / ____(    )     (    )  / __ \\ ) )   ( (_   _)                  |\n"
"|     ) )_) | (__    | |      | | / /   \\_) (__) )/ /  \\ ( (___ / /\\ \\     / /\\ \\ / /  \\ \\( (    ) )| |                    |\n"
"|    (  ___/ ) __)   | |      | |( (  ___(    __/( ()  () )___ ( (__) )   ( (__) | (    ) )) )  ( ( | |                    |\n"
"|     ) )   ( (      | |   __ | |( ( (__  ) \\ \\  ( ()  () )   ) )    (     )    (( (  /\\) | (    ) )| |                    |\n"
"|    ( (     \\ \\_____| |___) )| |_\\ \\__/ ( ( \\ \\_)) \\__/ /___/ /  /\\  \\   /  /\\  \\ \\_\\ \\/ ) \\___/ (_| |__                  |\n"
" \\    /__\\     \\____\\________/_____(\\____/ )_) \\__/ \\____//____/__(  )__\\ /__(  )__\\___\\ \\_\\______/_______)               /\n" 
"  \\__________________________________________________________________________________\\__)________________________________/ \n"
"                                             |                |\n"
"                                             |                |\n"
"                                             |                |\n"
"                                             |                |\n"
"                                             |                |\n"
"                                             |                |\n"
"                                             |                |\n"
"                                             |                |\n"
"                                             |                |\n"
"                                             |                |\n"
"                                             |                |\n"
"                                             |                |\n"
"                                             |                |\n"
"                                             |                |\n"
"                                             |                |\n"
GREEN "                                           /\\" RESET "|                |" GREEN "/|_/\\_\n\n" RESET;

Personaje::Personaje (string name, int hp, int pet, int prog){ 
    Nombre= name;
    HP= hp;
    mascota= pet;
    progreso= prog;
}

//Getters
string Personaje::getNombre(){
    return Nombre;
}

int Personaje::getHP(){
    return HP; 
}

int Personaje::getMascota(){
    return mascota;
}

int Personaje::getProgreso(){
    return progreso;
}
//Setters
void Personaje::setNombre(string name){
    Nombre= name;
}

void Personaje::setHP(int hp){
    HP= hp;
}

void Personaje::setMascota(int pet){
    mascota= pet;
}

void Personaje::setProgreso(int prog){
    progreso= prog;
}
void Personaje::shoot(int n){
    cout << "Atacar" << endl;
}

void Personaje::AdicionaLlave(Items* llave){
    vecItems.push_back(llave);
    cout << "Has agarrado una llave, usala para abrir el tesoro final." << endl;
}
//Funcion imprimir
void Personaje::imprime(){
    cout << "Personaje" << endl << "Nombre: " << Nombre << endl;
    cout << "Vida: " << HP << endl;
}

void Personaje::showInventario(){
    cout << "Inventario: " << endl ;
    for (int i=0; i<vecItems.size(); i++){
        vecItems[i]->use();
        cout << endl;
    }
}

void Personaje::LeerCartel(){
    cout << sign << endl;
    cout << "ASEGURATE DE TENER LO NECESARIO PARA VENCERLA!" << endl;
} 
#endif /* Personaje_h */