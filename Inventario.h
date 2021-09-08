//
//  Inventario.h
//  Sp 
//
//  Created by Lydia Delgado uriarte & Hugo Edgar Palomares Estrella on 01/06/21.
//

#ifndef Inventario_h
#define Inventario_h

#include "ItemKey.h"
#include "Items.h"
#include <vector>

class Inventario {
    public:
        Inventario();
        Inventario(int, int);
        virtual void draw(); //virtual solo en declaracion - Función polimórfica
    /*
        void addItemGem();
        void addItemPotion();
        void showInventario();*/
    protected:
        vector <Items*> vecItems;     
};
Inventario::Inventario(){

}

void Inventario::draw(){
    cout<<"Ese USE no se debe llamar de la clase base"<<endl;
}