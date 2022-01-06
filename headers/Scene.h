#pragma once

#include <string>
#include <iostream>

#include "System.h"
#include "League.h"


class Scene{

	League* league;
public:

	Scene(League* l) : league(l) {};
	League* get_league() { return league; }
	virtual void content() = 0; // Выводит текст сцены
	virtual Scene* options(std::string message) = 0; // Выводит опции сцены

};

