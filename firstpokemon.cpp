#include <iostream>
#include "firstpokemon.hpp"
using namespace std;

FirstPokemon::FirstPokemon(){}
FirstPokemon::FirstPokemon(std::string _name)
                 : Pokemon(_name){}
FirstPokemon::FirstPokemon(std::string _name
                            , unsigned _HP)
                 : Pokemon(_name, _HP){}
FirstPokemon::FirstPokemon(std::string _name
                            , unsigned _HP
                            , unsigned _attack)
                 : Pokemon(_name, _HP, _attack){}
FirstPokemon::FirstPokemon(std::string _name
                            , unsigned _HP
                            , unsigned _attack
                            , unsigned _defense)
                 : Pokemon(_name, _HP, _attack, _defense){}
FirstPokemon::FirstPokemon(std::string _name
                            , unsigned _HP
                            , unsigned _attack
                            , unsigned _defense
                            , unsigned _speed)
                 : Pokemon(_name, _HP, _attack, _defense, _speed){}
FirstPokemon::~FirstPokemon(){}
void FirstPokemon::setSpecattack(std::string _specattack){
    specattack = _specattack;
}
void FirstPokemon::setSpecdefense(std::string _specdefense){
    specdefense = _specdefense;
}
std::string FirstPokemon::getSpecattack(){
    return specattack;
}
std::string FirstPokemon::getSpecdefence(){
    return specdefense;
}
