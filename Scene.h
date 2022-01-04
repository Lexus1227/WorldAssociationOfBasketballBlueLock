#pragma once

#include <string>
#include <iostream>

#include "League.h"



class Scene{

public:

	League league;
	Scene(League l) : league(l) {};
	League* get_league() { return &league; }
	virtual void content() = 0; // ������� ����� �����
	virtual Scene* options(std::string message) = 0; // ������� ����� �����

};

