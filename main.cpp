#include <iostream>
#include <fstream>
#include "pokemon.hpp"
using namespace std;

ofstream output(L"C:\\Users\\Катя\\Documents\\лр1\\output.txt");

void record(Pokemon pokemon){
    output << "{ \"pokemons\" : [{ \"name\" :\"" << pokemon.getName()
    << "\", \"HP\":" << pokemon.getHP()
    << ", \"attack\":" << pokemon.getAttack()
    << ", \"defense\":" << pokemon.getDefense()
    << ", \"speed\":" << pokemon.getSpeed() << "}]}\n";
}

int main(){
    Pokemon pokemon("Pikachuu", 1500, 485, 230, 100);
    record(pokemon);
    return 0;
}
