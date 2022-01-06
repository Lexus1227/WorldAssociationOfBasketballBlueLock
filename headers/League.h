#pragma once

#include <map>
#include <vector>

#include "Team.h"
#include "Match.h"


class League {

private:
	
	std::vector<Team> teams;
	Team player_team;
	Schedule schedule;

	typedef	struct win_lose_rating {

		stat_type win = 0;
		stat_type lose = 0;

	};

	std::map<Team, win_lose_rating> stat;

	// schedule 
	// 1 day	 //		2 day				//	3 day //	
	// LAL - LAC //		OBSOSTEAM - LAL		//
	// SAS - OKC //		


public:
	
	League(std::vector<Team> t = {}) : teams(t) {}
	std::vector<Team> get_teams() { return teams; }
	Team get_player_team() { return player_team; }
	void set_player_team(Team team) { player_team = team; }
	void add_new_team(Team team) { teams.push_back(team); }

};

