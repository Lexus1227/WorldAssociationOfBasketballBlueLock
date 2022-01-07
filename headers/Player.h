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
	std::string get_name() { return name; };
	void set_number(std::string num);
	std::string get_number() { return number; }
	stat_type get_stat(std::string param) { return this->stat.get_value(param); }

	friend std::ostream& operator<<(std::ostream& os, Player p);
	friend std::istream& operator>>(std::istream& os, Player& p);

};
