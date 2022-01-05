#pragma once
#include <string>
#include <iostream>
#include "Characteristic.h"

class Player{

private:

	std::string name;
	std::string number;
	Characteristic stat;

public:

	Player(std::string _name, std::string _number, Characteristic _stati) :
		name(_name), number(_number), stat(_stati) {};

	void set_stat(Characteristic st);
	void set_name(std::string n);
	void set_number(std::string num);

	friend std::ostream& operator<<(std::ostream& os, Player p);

};
