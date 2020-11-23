#pragma once
#include <iostream>
#include "pokemon.hpp"

class ThirdPokemon : public Pokemon {
private:
	std::string specattack, specdefense;
public:
	ThirdPokemon();
	ThirdPokemon(std::string _name);
	ThirdPokemon(std::string _name
		, unsigned _HP);
	ThirdPokemon(std::string _name
		, unsigned _HP
		, unsigned _attack);
	ThirdPokemon(std::string _name
		, unsigned _HP
		, unsigned _attack
		, unsigned _defense);
	ThirdPokemon(std::string _name
		, unsigned _HP
		, unsigned _attack
		, unsigned _defense
		, unsigned _speed);
	ThirdPokemon(std::string _name
		, unsigned _HP
		, unsigned _attack
		, unsigned _defense
		, unsigned _speed
		, std::string _specattack);
	ThirdPokemon(std::string _name
		, unsigned _HP
		, unsigned _attack
		, unsigned _defense
		, unsigned _speed
		, std::string _specattack
		, std::string _specdefense);
	~ThirdPokemon();
	void setSpecattack(std::string _specattack);
	void setSpecdefense(std::string _specdefense);
	std::string getSpecattack();
	std::string getSpecdefence();
};
