#include <iostream>
#include "thirdpokemon.hpp"
using namespace std;

ThirdPokemon::ThirdPokemon() {}
ThirdPokemon::ThirdPokemon(std::string _name)
	: Pokemon(_name) {}
ThirdPokemon::ThirdPokemon(std::string _name
	, unsigned _HP)
	: Pokemon(_name, _HP) {}
ThirdPokemon::ThirdPokemon(std::string _name
	, unsigned _HP
	, unsigned _attack)
	: Pokemon(_name, _HP, _attack) {}
ThirdPokemon::ThirdPokemon(std::string _name
	, unsigned _HP
	, unsigned _attack
	, unsigned _defense)
	: Pokemon(_name, _HP, _attack, _defense) {}
ThirdPokemon::ThirdPokemon(std::string _name
	, unsigned _HP
	, unsigned _attack
	, unsigned _defense
	, unsigned _speed)
	: Pokemon(_name, _HP, _attack, _defense, _speed) {}
ThirdPokemon::~ThirdPokemon() {}
void ThirdPokemon::setSpecattack(std::string _specattack) {
	specattack = _specattack;
}
void ThirdPokemon::setSpecdefense(std::string _specdefense) {
	specdefense = _specdefense;
}
std::string ThirdPokemon::getSpecattack() {
	return specattack;
}
std::string ThirdPokemon::getSpecdefence() {
	return specdefense;
}
