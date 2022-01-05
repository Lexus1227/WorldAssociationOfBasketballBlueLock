#pragma once

#include <iostream>
#include <iomanip>
#include <string>
#include <exception>

#include "System.h"


const std::string ATK = "ATK";
const std::string DEF = "DEF";
const std::string AGI = "AGI";
// TODO
const float undef = -1;


struct characteristic{

	float agility;
	float acuraccy;
	float strength;
	float endurance;
	float attack;
	float defense;

	characteristic(float ag = undef, float ac = undef, float str = undef, 
		float end = undef, float at = undef, float def = undef) :
		agility(ag), acuraccy(ac), strength(str), endurance(end), attack(at), defense(def) {}

	void set_value(std::string param, float value) {

		if (param == "ATK") {

			this->attack = value;

		}
		if (param == "DEF") {

			this->defense = value;

		}
		// TODO

	}
	
};


std::ostream& operator<<(std::ostream& os, characteristic stat);
std::istream& operator>>(std::istream& is, characteristic& stat);