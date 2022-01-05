#pragma once
#include <string>
#include <iostream>
#include "characteristic.h"

class Player{

private:

	std::string name;
	std::string number;
	characteristic stat;

public:

	Player(std::string _name = "", std::string _number = "", characteristic _stati = characteristic{}) :
		name(_name), number(_number), stat(_stati) {};

	void set_stat(characteristic st);
	void set_name(std::string n);
	void set_number(std::string num);

	friend std::ostream& operator<<(std::ostream& os, Player p);
	friend std::istream& operator>>(std::istream& os, Player& p);

};
