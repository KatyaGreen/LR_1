#include <iostream>
#include "secondpokemon.hpp"
using namespace std;

SecondPokemon::SecondPokemon() {}
SecondPokemon::SecondPokemon(std::string _name)
	: Pokemon(_name) {}
SecondPokemon::SecondPokemon(std::string _name
	, unsigned _HP)
	: Pokemon(_name, _HP) {}
SecondPokemon::SecondPokemon(std::string _name
	, unsigned _HP
	, unsigned _attack)
	: Pokemon(_name, _HP, _attack) {}
SecondPokemon::SecondPokemon(std::string _name
	, unsigned _HP
	, unsigned _attack
	, unsigned _defense)
	: Pokemon(_name, _HP, _attack, _defense) {}
SecondPokemon::SecondPokemon(std::string _name
	, unsigned _HP
	, unsigned _attack
	, unsigned _defense
	, unsigned _speed)
	: Pokemon(_name, _HP, _attack, _defense, _speed) {}
SecondPokemon::~SecondPokemon() {}
void SecondPokemon::setSpecattack(std::string _specattack) {
	specattack = _specattack;
}
void SecondPokemon::setSpecdefense(std::string _specdefense) {
	specdefense = _specdefense;
}
std::string SecondPokemon::getSpecattack() {
	return specattack;
}
std::string SecondPokemon::getSpecdefence() {
	return specdefense;
}
