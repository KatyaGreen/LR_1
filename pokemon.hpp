#pragma once
#include <iostream>

class Pokemon{
    private:
    std::string name;
    unsigned HP, attack, defense, speed;
    public:
    Pokemon();
    Pokemon(std::string _name);
    Pokemon(std::string _name
            , unsigned _HP);
    Pokemon(std::string _name
            , unsigned _HP
            , unsigned _attack);
    Pokemon(std::string _name
            , unsigned _HP
            , unsigned _attack
            , unsigned _defense);
    Pokemon(std::string _name
            , unsigned _HP
            , unsigned _attack
            , unsigned _defense
            , unsigned _speed);
    ~Pokemon();
    void setName(std::string _name);
    void setHP(unsigned _HP);
    void setAttack(unsigned _attack);
    void setDefense(unsigned _defense);
    void setSpeed(unsigned _speed);
    std::string getName();
    unsigned getHP();
    unsigned getAttack();
    unsigned getDefense();
    unsigned getSpeed();
    void allAboutPokemon();
};
