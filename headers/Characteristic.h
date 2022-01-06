#pragma once

#include <iostream>
#include <iomanip>
#include <string>
#include <exception>

#include "System.h"


typedef int stat_type;

const std::string ATK = "ATK";
const std::string DEF = "DEF";
const std::string AGI = "AGI";
const std::string STR = "STR";
const std::string END = "END";
const std::string ACC = "ACC";

const stat_type undef = -1;


struct characteristic{

	stat_type agility;
	stat_type acuraccy;
	stat_type strength;
	stat_type endurance;
	stat_type attack;
	stat_type defense;

	characteristic(stat_type ag = undef, stat_type ac = undef, stat_type str = undef, 
		stat_type end = undef, stat_type at = undef, stat_type def = undef) :
		agility(ag), acuraccy(ac), strength(str), endurance(end), attack(at), defense(def) {}

	void set_value(std::string param, stat_type value) {

		if (param == "ATK")
			this->attack = value;
		if (param == "DEF") 
			this->defense = value;
		if (param == "ACC")
			this->acuraccy = value;
		if (param == "STR")
			this->strength = value;
		if (param == "END")
			this->endurance = value;
		if (param == "AGI")
			this->agility = value;

	}
	
};


std::ostream& operator<<(std::ostream& os, characteristic stat);
std::istream& operator>>(std::istream& is, characteristic& stat);