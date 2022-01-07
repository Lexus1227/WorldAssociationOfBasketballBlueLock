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
		else if (param == "DEF") 
			this->defense = value;
		else if (param == "ACC")
			this->acuraccy = value;
		else if (param == "STR")
			this->strength = value;
		else if (param == "END")
			this->endurance = value;
		else if (param == "AGI")
			this->agility = value;
		else
			throw UndefinedStat("Undefined stat name was proped in set value char");

	}

	stat_type get_value(std::string param) {

		if (param == "ATK")
			return this->attack;
		else if (param == "DEF")
			return this->defense;
		else if (param == "ACC")
			return this->acuraccy;
		else if (param == "STR")
			return this->strength;
		else if (param == "END")
			return this->endurance;
		else if (param == "AGI")
			return this->agility;
		else 
			throw UndefinedStat("Undefined stat name was proped in set value char");

	}

	
};


std::ostream& operator<<(std::ostream& os, characteristic stat);
std::istream& operator>>(std::istream& is, characteristic& stat);