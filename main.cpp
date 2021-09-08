#include <iostream>
#include <vector>
#include "Personaje.h"
#include "Hechicera.h" 
#include "Vikingo.h"
#include "Arquero.h"
#include "Troll.h"
#include "Dragon.h"
#include <stdlib.h>
#include <time.h>

#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */
#define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
#define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
#define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */


using namespace std;

const string title = 
BOLDMAGENTA"  __  __           _                    ___     _                 _ \n"
" |  \\/  |_   _ ___| |_ ___ _ __ _   _  |_ _|___| | __ _ _ __   __| |\n"
" | |\\/| | | | / __| __/ _ \\ '__| | | |  | |/ __| |/ _` | '_ \\ / _` |\n"
" | |  | | |_| \\__ \\ ||  __/ |  | |_| |  | |\\__ \\ | (_| | | | | (_| |\n"
" |_|  |_|\\__, |___/\\__\\___|_|   \\__, | |___|___/_|\\__,_|_| |_|\\__,_|\n"
"         |___/                  |___/                               \n"RESET;

const string character = BOLDRED "o" RESET;

const string fenix =
BOLDYELLOW "            (                           )\n"
"          ) )( (                           ( ) )( (        .\n"
"    .  ( ( ( )  ) )                     ( (   (  ) )(  .\n"
"      ) )   " RED "  ,,\\                     ///,,  " BOLDYELLOW "     ) (\n"
"   (  (( " RED "   (\\\\//                     \\////)   " BOLDYELLOW "   )      .\n"
"    ) )   " RED " (-(__//                       \\__)-)  " BOLDYELLOW "   (  \n"
"   ((( " RED "  ((-(__||                         ||__)-)) " BOLDYELLOW "   ) )\n"
"  ) ) " RED "  ((-(-(_||           ```\\__        ||_)-)-))  " BOLDYELLOW " ((\n"
"  (( " RED"  ((-(-(/(/\\        ''; " BOLDYELLOW "o " RED ".- `      //\\)\\)-)-)) " BOLDYELLOW "   )\n"
"   )  " RED" (-(-(/(/(/\\      '';;;;-\\~      //\\)\\)\\)-)-)  " BOLDYELLOW " (   )\n"
"(  (  " RED" ((-(-(/(/(/\\======,:;:;:;:,======/\\)\\)\\)-)-)) " BOLDYELLOW "  )\n"
"    )  " RED"'(((-(/(/(/(//////:///\\\\\\:\\\\\\)\\)\\)\\)-)))` " BOLDYELLOW " ( (\n"
"   ((  " RED" '((-(/(/(/('uuuu:VVVVVVVVVV:uuuu`)\\)\\)\\)-))`  " BOLDYELLOW " . )\n"
"     )) " RED" '((-(/(/(/('|||:vvvvvvvvvv:|||')\\)\\)\\)-))` " BOLDYELLOW "   ((\n"
"  (   ((  " RED" '((((/(/('uuu:WWWWWWWWW:uuu`)\\)\\))))`   " BOLDYELLOW "  ))\n"
"        ))  " RED" '':::UUUUUU:wwwwwwwww:UUUUUU:::`` " BOLDYELLOW "    ((   )\n"
"          ((   " RED"   '''''''\\uuuuuuuu/``````   " BOLDYELLOW "      ))\n"
"  .        ))      " RED"      `JJJJJJJJJ`      " BOLDYELLOW "     ((  .\n"
"             ((     " RED"      LLLLLLLLLLL     " BOLDYELLOW "    ))\n"
"     .         ))   " RED"     ///|||||||\\\\    " BOLDYELLOW "   ((      .\n"
"           .     ))  " RED"   (/(/(/(^)\\)\\)\\)    " BOLDYELLOW "   ((\n"
"                  ((  .                  (   .    ))\n"
"   .                ((       .     )  (     . ((   .\n"
"          .           ( )( ))( ( ( ) )( )  (()         . \n" RESET;

int getRand(int n) {
    return (rand() % n) + 1;
}

//Peleas
void isDragonHere(string mapa[][8],int Col, int Ren, Personaje* d, Personaje* player){
    if (mapa[1][5] == character && d->getHP()>0)  {
        system("cls");
        cout << endl << "Cuidado! "<< endl;
        cout << "Te haz encontrado con el dragon "<< endl;
        cout <<  GREEN"                                                 /===----~~~------_"  << endl;
        cout <<"                                                |===-~_                _,-" << endl;
        cout <<"                 -==\\                         `//\\   ~`---._.-~"<< endl;      
        cout <<"             __-==|                         | |  \\           _-~`       "  << endl;
        cout <<"       __--~  ,-/-==\\                        | |   `\\        ,'          " << endl;  
        cout <<"    _-~       /'    |  \\                      / /      \\      /     "<< endl;          
        cout <<"  '        /       |   \\                     /' /        \\   /' "<< endl;               
        cout <<"/  __  /         |    \\`\\.____  |_/'  /          \\/'    " << endl; 
        cout <<"/-'~    ~~---__  |     ~-/         ( )   /'        _--~`      " <<endl;             
        cout <<"                  \\_|      /        ) | ;  ),   _--~~         "    << endl;
        cout <<"                    '~--_/      _-/- |/ \\   '-~ \\ " << endl;                            
        cout <<"                   {\\_--/}    / \\_>-|)<_\\      \\ " << endl;                           
        cout <<"                   /'   (/  _-~  | |>--<_|      |  " << endl;                       
        cout <<"                  |   /) )-~     | |>--<_|      |   " << endl;                       
        cout <<"                  / /~ ,/       / />---<_/      |    " << endl;                        
        cout <<"                   o-o //        /-~>---<__-~      /   " << endl;              
        cout <<"                   (^(~          />---<_-      _-    " RESET << endl;                          
        cout <<RED "                  ,/|  " GREEN"         /_>--<_/     _-~      " RESET<< endl;              
        cout <<RED "               ,//('(   " RESET << GREEN"       |_>--<|     /                 .----    " RESET<< endl;        
        cout << RED "              ( ( '))   " RESET <<GREEN "       |_>--<|    |                 /' _---\\   " RESET << endl;       
        cout << RED"           `-)) )) (    " RESET <<GREEN "       |_>--<_|    |               /'  /     ~\\   " RESET << endl;     
        cout << RED"          ,/,'//( (     " RESET <<GREEN "        \\_>--<_\\    \\            /'  //        ||    " RESET<< endl;    
        cout << RED"        ,( " RESET << YELLOW "( ((," RESET <<RED" ))     " RESET <<GREEN"         -_>--<-_  --__---' _/'/        /'   " RESET<< endl;      
        cout << RED"      `/  )` ) ,/|     " RESET<<GREEN "            ~-_>--<_/-_       _-~ _/     " RESET<< endl;               
        cout << RED "    .-" RESET << YELLOW "//( )/" RESET << RED " )) `     " RESET << GREEN "               ~-'// /~~__--_--~      " RESET<< endl;                
        cout << RED"     ;'( ')/ ,)(        " RESET<<GREEN "                      ~~~~        " RESET<< endl;                   
        cout <<RED "    ' ') '( (/     " << endl;
        system("pause");
        int hits = 3;
        int golpe = 0;
        if (player->getMascota()==1){
            cout << "Cuentas con tu fenix que te ayudara a derrotar al dragon" << endl;
            system("pause");
        } 
        while (d->getHP()>0 && player->getHP()>0){
            //Curacion del fenix
            if (player->getMascota()==1){
                player->setHP(player->getHP()+30);
                //cout << player->getHP();
            } 
            //Golpe de Dragon
            golpe= getRand(40);
            player->setHP(player->getHP()-golpe);
            d->shoot(golpe);
            //Golpe jugador
            golpe=getRand(20);
            d->setHP(d->getHP()-golpe);
            player->shoot(golpe);
            //cout << player->getHP();
            system("pause");
        }
        player->setProgreso(20);
        if (player->getHP()>0){
            cout << GREEN "Has sobrevivido al ataque del dragon!" RESET << endl;
            cout << "Ahora tienes " << player->getHP() << " de vida" << endl;
            system("pause");
        }
        
    } 
}

void isTrollHere(string mapa[][8],int Col, int Ren, Personaje* t, Personaje* player){
    if (mapa[5][5] == character && t->getHP()>0)  {
        system("cls");
        cout << endl << "Cuidado! "<< endl;
        cout << "Te has encontrado con un troll "<< endl;
        system("pause");
        int hits = 3;
        int golpe = 0;
        while (t->getHP()>0 && player->getHP()>0){
            //Golpe de troll
            golpe= getRand(20);
            int vidaplayer= player->getHP();
            player->setHP(vidaplayer-golpe);
            t->shoot(golpe);
            //Golpe jugador
            golpe=getRand(20);
            int vidatroll= t->getHP();
            t->setHP(vidatroll-golpe);
            player->shoot(golpe);
            system("pause");
        }
        player->setProgreso(20);
        if(player->getHP() > 0){
            cout << GREEN"Has sobrevivido al ataque del troll con " << player->getHP() << " de vida."RESET << endl;
            system("pause");
        }
    }

    else if (mapa[5][5] == character && t->getHP()<=0){
        cout << endl << "Ya no hay nada aqui, has matado al troll" << endl;
        system("pause");
    }
}


void isFenixHere(string mapa[][8],int Col, int Ren, Personaje* player){
    int resp;
    if (mapa[5][6] == character && player->getMascota()==0){
        cout << endl << "Te has encontrado con un fenix"<< endl;
        cout << "Deseas agarrarlo?" << endl << "[1]Si [2]No "<< endl;
        cin >> resp;
        if (resp==1){
            player->setMascota(1);
            player->setHP(player->getHP()+20);
            
            cout << fenix << endl << "Has agarrado un fenix y te ha regenarado 20 de vida. Ahora tienes " << player->getHP() << " de vida." << endl;
            system("pause");
        }
        else{
            cout << "Sigue tu camino" << endl;
            system("pause");
        }
    }
        
    else if (mapa[5][6] == character){
        cout << "Ya agarraste lo que habia aqui." << endl;
        system("pause");
    }
}

void isKeyHere(string mapa[][8],int Col, int Ren, Personaje* player, Items* llave){
    int respuesta;
    if (mapa[3][5] == character && llave->getDisponibilidad()==1){
        cout << "Has encontrado una llave! Deseas agarrarla? [1]Si [2]No" << endl;
        cin >> respuesta;
        if (respuesta==1){
            player->AdicionaLlave(llave); 
            llave->setDisponibilidad(0);
            system("pause");
        }
        else{
            cout << "Continua tu camino" << endl;
            system("pause");
        }

            
    }
    else if (mapa[3][5]==character){
        cout << "Ya agarraste lo que habia aqui" << endl;
        system("pause");
    }
    //player->showInventario();
}


void ganarCofre(string mapa[][8],int Col, int Ren, Personaje* player, Items* llave){
    if (mapa[0][7] == character && llave->getDisponibilidad()==0){
        cout << "Encontraste el tesoro y tienes la llave!" << endl;
        cout << "HAS GANADO!" << endl;
        system("pause");
        player->setProgreso(100);        
        cout<<"                            _.--."<< endl;
        cout<<"                        .-':-'||"<< endl;
        cout<<"                    .-'.-::::'||"<< endl;
        cout<<"                .-:'.-::::::' ||"<< endl;
        cout<<"                .'`-.-:::::::'  ||"<< endl;
        cout<<"            /.'`;|:::::::'      ||_  "<< endl;
        cout<<"            ||   ||::::::'     .;.'-._"<< endl;
        cout<<"            ||   ||:::::'  .-!"<<YELLOW"oo"<<CYAN " @." RESET<<"!-.'-."<< endl;
        cout<<"           \'.   ||:::::.-!"<<CYAN "@"<<YELLOW "oo "<< MAGENTA"@" << YELLOW "oooo"<< MAGENTA "@" <<YELLOW "oo"<<RESET <<"'_.|"<< endl;
        cout<<"            '.'-;|:.-'"<<YELLOW ".ooo" RESET <<MAGENTA "@" RESET<< YELLOW"oooOoo"<<CYAN"@"<< YELLOW "oo" RESET<<".'\\  ||"<< endl;
        cout<<"                `>'-."""<<YELLOW"ooooO" RESET <<MAGENTA "@" YELLOW "oo"<<MAGENTA" @" RESET<<"'.-"<< YELLOW "o oo" RESET <<"_.|'|"<< endl;
        cout<<"                ||-.'-..-'_.-' _.-"<< YELLOW "o oo" RESET <<"  |'||"<< endl;
        cout<<"                ||=[ '-._.-\'/.-' "<<YELLOW "o o o " RESET << "|'||"<< endl;
        cout<<"                || '-.]=|| |'|      "<<YELLOW" o " RESET << "|'||"<< endl;
        cout<<"                ||      || |'|        _| ';"<< endl;
        cout<<"                ||      || |'|    .-'.-'"<< endl;
        cout<<"                |'-._   || |'|.-'.-'"<< endl;
        cout<<"                 '-.'-.|| |' `.-'"<< endl;
        cout<<"                    '-.||_/.-'"<< endl;
        system("pause");

    }
    else if (mapa[0][7]==character){
        cout << "No tienes la llave y no puedes abrir el cofre, sigue tu camino" << endl;
        system("pause");
    }

}

void imprimirMapa(string Mapa[][8]){
    system("cls");
    cout << endl <<BOLDWHITE "\tMapa"RESET<< endl;
    cout << BOLDBLUE"  ------------------" RESET<< endl;
    for (int ren = 0; ren < 8; ren++) {
        cout << BOLDBLUE" | "RESET ;
        for (int col = 0; col < 8; col++) {
            cout << Mapa[ren][col] << " ";
        }
        cout <<BOLDBLUE " | "RESET ;
        if(ren == 1){
            cout << "   Controles";
        };
        if(ren == 2){
            cout << "   [W] ^";
        };
        if(ren == 3){
            cout << "   [A] <";
        };
        if(ren == 4){
            cout << "   [S] v";
        };
        if(ren == 5){
            cout << "   [D] >";
        };
        cout << endl;
    }
    cout << BOLDBLUE"  ------------------" RESET<< endl;
}

int MoverNorte(string mapa[][8], int Col, int Ren){
    if (mapa[Ren-1][Col]=="-"){
        cout << "Esta parte del mapa no es accesible." << endl;
        system("pause");
    }
    else if(mapa[Ren-1][Col]=="X"){
        // cout << "Es parte del mapa" << endl;
        mapa[Ren-1][Col]=character;
        mapa[Ren][Col]="X";
        Ren--;
    }
    else{
        cout << "Esto no es parte del mapa." << endl;
        system("pause");
    }
    // imprimirMapa(mapa);
    return Ren;
}

int MoverOeste(string mapa[][8], int Col, int Ren){
    if (mapa[Ren][Col-1]=="-"){
        cout << "Esta parte del mapa no es accesible." << endl;
        system("pause");
    }
    else if(mapa[Ren][Col-1]=="X"){
        // cout << "Es parte del mapa" << endl;
        mapa[Ren][Col-1]=character;
        mapa[Ren][Col]="X";
        Col--;
    }
    else{
        cout << "Esto no es parte del mapa." << endl;
        system("pause");
    }
    // imprimirMapa(mapa);
    return Col;
}

int MoverEste(string mapa[][8], int Col, int Ren){
    if (mapa[Ren][Col+1]=="-"){
        cout << "Esta parte del mapa no es accesible." << endl;
        system("pause");
    }
    else if(mapa[Ren][Col+1]=="X"){
        // cout << "Es parte del mapa" << endl;
        mapa[Ren][Col+1]=character;
        mapa[Ren][Col]="X";
        Col++;
    }
    else{
        cout << "Esto no es parte del mapa." << endl;
        system("pause");
    }
    // imprimirMapa(mapa);
    return Col;
}


int MoverSur(string mapa[][8], int Col, int Ren){
    if (mapa[Ren+1][Col]=="-"){
        cout << "Esta parte del mapa no es accesible." << endl;
        system("pause");
    }
    else if(mapa[Ren+1][Col]=="X"){
        // cout << "Es parte del mapa" << endl;
        mapa[Ren+1][Col]=character;
        mapa[Ren][Col]="X";
        Ren++;
    }
    else{
        cout << "Esto no es parte del mapa" << endl;
        system("pause");
    }
    // imprimirMapa(mapa);
    return Ren;
}

void mystery_island(){
    int opcion=1;
    int i=0;
    string nombre;
    int Ren=7, Col=1;
    char posicion;
    
    srand(time(0));
    string Mapa[8][8]={
        {"-","-","-","-","-","X","X","X"},
        {"-","-","-","X","X","X","-","-"},
        {"-","X","X","X","-","-","-","-"},
        {"-","X","-","-","-","X","X","X"},
        {"X","X","X","X","X","-","-","X"},
        {"-","-","X","X","X","X","X","X"},
        {"-","-","X","-","-","-","-","-"},
        {"X", character,"X","-","-","-","-","-"},
    };
    Personaje *t = new Troll();
    Personaje *a = new Arquero();
    Personaje *h = new Hechicera();
    Personaje *v = new Vikingo();
    Personaje *player;
    Personaje *d = new Dragon();

    system("cls");
    cout << RESET"Bienvenido a ..." << endl << title << endl;
    cout << "Que personaje desea usar?" << endl << "[1] Arquero [2] Hechicero [3] Vikingo" << endl;
    cin >> opcion;
    if (opcion==1){
        player = a;
    }
    else if (opcion==2){
        player = h;
    }
    else if (opcion==3){
         player = v;
    }
    /*cout << "Cómo quieres que se llame tu personaje?" << endl;
    cin >> nombre;
    player->setNombre(nombre);
    player->imprime();*/
    // player->getProgreso();
    cout << player->getHP();
    Items *llaveRecolectada = new Key();   
    ganarCofre(Mapa, Col, Ren, player, llaveRecolectada);
    while (player->getProgreso()!=100 && player->getHP()>0){
        if (Mapa[2][3]==character){
            player->LeerCartel();
            system("pause");
        }
        isFenixHere(Mapa,Col, Ren, player);
        isKeyHere(Mapa,Col, Ren, player, llaveRecolectada);

        imprimirMapa(Mapa);
        // cout << "A que posicion quieres moverte? [1] ^ [2] v [3] < [4] >" << endl;

        cin >> posicion;
        if (posicion == 'w' || posicion == 'W'){
            Ren = MoverNorte(Mapa,Col,Ren);
            // cout << Col << " " << Ren << endl;
        }
        else if (posicion == 's' || posicion == 'S'){
            Ren = MoverSur(Mapa,Col,Ren);
            // cout << Col << " " << Ren << endl;
        }
        else if (posicion == 'a' || posicion == 'A'){
            Col = MoverOeste(Mapa,Col,Ren);
            // cout << Col << " " << Ren << endl;
        }
        else if (posicion == 'd' || posicion == 'D'){
            Col = MoverEste(Mapa,Col,Ren);
            // cout << Col << " " << Ren << endl;
        }
        isTrollHere(Mapa,Col, Ren, t, player);
        isDragonHere(Mapa,Col, Ren, d, player);

        if (player->getHP()>0){
            ganarCofre(Mapa, Col, Ren, player, llaveRecolectada);
            }
        else {
            system("cls");
            cout << BOLDRED "FIN DE LA PARTIDA \nHas muerto, gracias por jugar." RESET << endl;
            system("pause");
            system("cls");
            cout  << endl << endl << "Desea volver a jugar?" << endl << "[1] Si   [2] No" << endl;
            cin >> opcion;
            if(opcion == 1){ mystery_island(); }
            else if(opcion == 2){break;}
            else{cout << "Ingrese una opcion valida. \nDesea volver a jugar? \n [1] Si   [2] No" << endl;}
        }
    }
};

int main(){
    // const wchar_t* path = "open DragonRoost.mp3 type mpegvideo alias mp3";
    // mciSendString(path, NULL, 0, NULL);
    mystery_island();
    

    return 0;
}