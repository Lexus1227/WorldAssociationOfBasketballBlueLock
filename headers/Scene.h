#pragma once

#include <string>
#include <iostream>

#include "System.h"
#include "League.h"


class Scene{

	League* league;
	bool returnable;

public:

	Scene(League* l, bool ret = false) : league(l), returnable(ret) {};
	League* get_league() { return league; }
	virtual void content() = 0; // Выводит текст сцены
	virtual Scene* options(std::string message) = 0; // Выводит опции сцены
	virtual bool is_returnable() final { return returnable; } // Можно ли вернуться в предыдущую сцену

};

