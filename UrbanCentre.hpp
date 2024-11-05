/*-------------------------------------------
Classe: Urban Centre
Descrição: Representa um centro urbano e 
constitui um nó no grafo de um estado.
-------------------------------------------*/


#ifndef URBANCENTRE_HPP
#define URBANCENTRE_HPP

#include <iostream>
#include <string>

class UrbanCentre{

    private:
    std::string name;                       //Nome do centro urbano.
    int numBattalion;                       //Número de batalhões presentes no centro urbano.
    bool isCapital;                         //Especifica se o centro urbano é capital ou não.

    public:
    UrbanCentre(std::string, int, bool);    //Construtor
    std::string getName() const;            //Retorna nome do centro urbano.
    int getNumBn() const;                   //Retorna número de batalhões.
    bool getIsCapital() const;              //Retorna se é capital ou não.
    void setAsCapital();                    //Define centro urbano como capital.

};
#endif