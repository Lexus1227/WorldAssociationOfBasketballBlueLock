#pragma once

#include <string>
#include <iostream>
#include <vector>
#include <fstream>
#include <filesystem>

#include "Player.h"

class Team {

private:
	
	std::string name;
	std::string short_name;
	std::vector<Player> players;

public:	

	Team(std::string n = "", std::vector<Player> p = {}) : name(n), players(p) {}
	std::string get_name() { return name; }
	std::string get_short_name() { return short_name; }
	std::vector<Player> get_players() { return players; }

	friend std::ostream& operator<<(std::ostream& os, Team t);
	friend std::istream& operator>>(std::istream& is, Team& t);
};



std::vector<Team> load_teams(std::string path, std::string file);
