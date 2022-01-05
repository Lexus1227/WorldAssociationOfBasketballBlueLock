#pragma once

#include <string>
#include <iostream>
#include <vector>
#include "Player.h"

class Team {

private:
	
	std::string name;
	std::vector<Player> players;

public:

	std::string get_name() { return name; }

	friend std::ostream& operator<<(std::ostream& os, Team t);
};

