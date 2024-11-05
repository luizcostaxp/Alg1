#include "UrbanCentre.hpp"

//Implementação do construtor
UrbanCentre::UrbanCentre(std::string name, int numBattalion, bool isCapital)
: name(name), numBattalion(numBattalion), isCapital(false)
{ }

//Implementação dos métodos
std::string UrbanCentre::getName()const{
    return name;
}

int UrbanCentre::getNumBn() const{
    return numBattalion;
}

bool UrbanCentre::getIsCapital() const{
    return isCapital;
}

void UrbanCentre::setAsCapital(){
    this->isCapital = true;
}