#ifndef STATE_HPP
#define STATE_HPP

#include <iostream>
#include "UrbanCentre.hpp"


class State
{
    private:
    int numUC; // number of Urban Centres - Número de Centros Urbanos presentes no estado.
    // std::vector<std::vector<UrbanCentre>> adjMatrix(numUC, std::vector<numUC>(numUC, 0)); // Matriz de Adjacência do grafo
    std::unordered_map<std::string, UrbanCentre> urbanCentres;
    std::vector<std::vector<int>> adjMatrix; // ?

    public:
    State(int, )

   
};
#endif