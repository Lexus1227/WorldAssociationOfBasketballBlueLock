#pragma once

#include <map>
#include <vector>

#include "Team.h"


class League {

private:
	
	std::vector<Team> teams;
	Team player_team;

public:
	
	League(std::vector<Team> t = {}) : teams(t) {}
	std::vector<Team> get_teams() { return teams; }
	Team get_player_team() { return player_team; }
	void set_player_team(Team team) { player_team = team; }
	void add_new_team(Team team) { teams.push_back(team); }

};

