#include <iostream>
#include "pokemon.hpp"
using namespace std;

Pokemon::Pokemon(){}
Pokemon::Pokemon(string _name){
    name = _name;
}
Pokemon::Pokemon(string _name
                , unsigned _HP){
    name = _name;
    HP = _HP;
}
Pokemon::Pokemon(string _name
                , unsigned _HP
                , unsigned _attack){
    name = _name;
    HP = _HP;
    attack = _attack;
}
Pokemon::Pokemon(string _name
                , unsigned _HP
                , unsigned _attack
                , unsigned _defense){
    name = _name;
    HP = _HP;
    attack = _attack;
    defense = _defense;
}
Pokemon::Pokemon(string _name
                , unsigned _HP
                , unsigned _attack
                , unsigned _defense
                , unsigned _speed){
    name = _name;
    HP = _HP;
    attack = _attack;
    defense = _defense;
    speed = _speed;
}
Pokemon::~Pokemon(){}
void Pokemon::setName(string _name){
    name = _name;
}
void Pokemon::setHP(unsigned _HP){
    HP = _HP;
}
void Pokemon::setAttack(unsigned _attack){
    attack = _attack;
}
void Pokemon::setDefense(unsigned _defense){
    defense = _defense;
}
void Pokemon::setSpeed(unsigned _speed){
    speed = _speed;
}
string Pokemon::getName(){
    return name;
}
unsigned Pokemon::getHP(){
    return HP;
}
unsigned Pokemon::getAttack(){
    return attack;
}
unsigned Pokemon::getDefense(){
    return defense;
}
unsigned Pokemon::getSpeed(){
    return speed;
}
void Pokemon::allAboutPokemon(){
    cout << "Pokemon's name: " << name << endl
         << "Health points: " << HP << endl
         << "Attack value: " << attack << endl
         << "Defense value " << defense << endl
         << "Speed value: " << speed << endl;
}
