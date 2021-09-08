//
//  Items.h
//  Tarea 04 
//  
//  Created by Lydia Delgado uriarte & Hugo Edgar Palomares Estrella on 01/06/21.
//

#ifndef Items_h
#define Items_h
using namespace std;

class Items{

    public:
        Items();
        Items( string, string, int);
        virtual void use(); //virtual solo en declaracion - Función polimórfica
        string getName(){return name;};
        string getDescription(){return description;};
        int getDisponibilidad(){return disponibilidad;};
        void setDisponibilidad(int);
    protected:
        string name; 
        string description;
        int disponibilidad;

};

Items::Items(){
    name=""; 
    description="";
    disponibilidad=1;
}
Items::Items(string n, string descr, int disp){
    name= n;
    description= descr;
    disponibilidad= disp;
}


void Items::setDisponibilidad(int disp){
    disponibilidad= disp;
}


void Items::use(){
    cout<<"Ese USE no se debe llamar de la clase base"<<endl;
}

#endif