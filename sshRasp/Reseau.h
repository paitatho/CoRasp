#ifndef RESEAU_H
#define RESEAU_H

#include <string>
#include <iostream>
#include <map>

class Reseau
{
private:
    std::string inetAdr;
    std::map<std::string,std::string> infoReseau;


public:
    Reseau();
    bool recupInetAdr();
    void scan();
    const std::string& getInetAdr() const{ return inetAdr;}

};

#endif // RESEAU_H
