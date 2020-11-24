#include <iostream>
#include <fstream>
#include "pokemon.hpp"
using namespace std;

ofstream output(L"output.json");

void record(Pokemon pokemon){
    output << "{ \"pokemons\" : [{ \"name\" :\"" << pokemon.getName()
    << "\", \"HP\":" << pokemon.getHP()
    << ", \"attack\":" << pokemon.getAttack()
    << ", \"defense\":" << pokemon.getDefense()
    << ", \"speed\":" << pokemon.getSpeed() << "}]}\n";
}

void recordToFile(Pokemon pokemon, ofstream& _output){
    _output << "{ \"pokemons\" : [{ \"name\" :\"" << pokemon.getName()
    << "\", \"HP\":" << pokemon.getHP()
    << ", \"attack\":" << pokemon.getAttack()
    << ", \"defense\":" << pokemon.getDefense()
    << ", \"speed\":" << pokemon.getSpeed() << "}]}\n";
}


int main(){
    Pokemon pokemon("Pikachuu", 1500, 485, 230, 100);
    record(pokemon);
    ofstream output(L"_output.json");
    recordToFile(pokemon, _output);
    return 0;
}
