#pragma once
#include <iostream>
#include "pokemon.hpp"

class SecondPokemon : public Pokemon {
private:
	std::string specattack, specdefense;
public:
	SecondPokemon();
	SecondPokemon(std::string _name);
	SecondPokemon(std::string _name
		, unsigned _HP);
	SecondPokemon(std::string _name
		, unsigned _HP
		, unsigned _attack);
	SecondPokemon(std::string _name
		, unsigned _HP
		, unsigned _attack
		, unsigned _defense);
	SecondPokemon(std::string _name
		, unsigned _HP
		, unsigned _attack
		, unsigned _defense
		, unsigned _speed);
	SecondPokemon(std::string _name
		, unsigned _HP
		, unsigned _attack
		, unsigned _defense
		, unsigned _speed
		, std::string _specattack);
	SecondPokemon(std::string _name
		, unsigned _HP
		, unsigned _attack
		, unsigned _defense
		, unsigned _speed
		, std::string _specattack
		, std::string _specdefense);
	~SecondPokemon();
	void setSpecattack(std::string _specattack);
	void setSpecdefense(std::string _specdefense);
	std::string getSpecattack();
	std::string getSpecdefence();
};
