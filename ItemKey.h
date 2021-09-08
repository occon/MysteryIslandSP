//
//  ItemKey.h
//  Tarea 04 
//  
//  Created by Lydia Delgado uriarte & Hugo Edgar Palomares Estrella on 01/06/21.
//

#include "Items.h"


class Key:public Items{
    public:
        Key();
        Key(string, string, int);
        void use();
    private:
};

Key::Key(): Items(){
    name= "Llave";
    description= "Esta es una llave, te servira para abrir el tesoro final";
    
};
Key::Key(string n, string descr, int dkey):Items(n, descr, dkey){ 
    disponibilidad= dkey;
    name = n;
    description= descr;
}

void Key::use(){
    cout << "Nombre Item: "  << name << endl << "Descripcion: " << description << endl;
}