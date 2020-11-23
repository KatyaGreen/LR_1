#pragma once
#include <iostream>
#include "pokemon.hpp"

class FirstPokemon : public Pokemon{
private:
    std::string specattack, specdefense;
public:
    FirstPokemon();
    FirstPokemon(std::string _name);
    FirstPokemon(std::string _name
                , unsigned _HP);
    FirstPokemon(std::string _name
                , unsigned _HP
                , unsigned _attack);
    FirstPokemon(std::string _name
                , unsigned _HP
                , unsigned _attack
                , unsigned _defense);
    FirstPokemon(std::string _name
                , unsigned _HP
                , unsigned _attack
                , unsigned _defense
                , unsigned _speed);
    FirstPokemon(std::string _name
                , unsigned _HP
                , unsigned _attack
                , unsigned _defense
                , unsigned _speed
                , std::string _specattack);
    FirstPokemon(std::string _name
                , unsigned _HP
                , unsigned _attack
                , unsigned _defense
                , unsigned _speed
                , std::string _specattack
                , std::string _specdefense);
    ~FirstPokemon();
    void setSpecattack(std::string _specattack);
    void setSpecdefense(std::string _specdefense);
    std::string getSpecattack();
    std::string getSpecdefence();
};
