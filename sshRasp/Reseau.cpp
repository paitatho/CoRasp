#include "Reseau.h"

using namespace std;


Reseau::Reseau():infoReseau(map<string,string>()),inetAdr(){
    if(this->recupInetAdr() == true)
        this->scan();
}

void Reseau::recupInetAdr(){

}

void Reseau::scan(){}
