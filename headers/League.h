#pragma once

#include <map>
#include <vector>

#include "Team.h"
#include "Match.h"


class League {

private:

	typedef	struct win_lose_rating {

		stat_type win = 0;
		stat_type lose = 0;

	};

	std::vector<Team> teams;
	Team player_team;
	Schedule schedule;
	std::map<Team, win_lose_rating> stat;
	int cur_day = 0;

	// schedule 
	// 1 day	 //		2 day				//	3 day //	
	// LAL - LAC //		OBSOSTEAM - LAL		//
	// 110 - 115 //     95		  - 120		//
	// SAS - OKC //		


public:
	
	League(std::vector<Team> t = {}) : teams(t) {}
	std::vector<Team> get_teams() { return teams; }
	Team get_player_team() { return player_team; }
	void set_player_team(Team team) { player_team = team; }
	void add_new_team(Team team) { teams.push_back(team); }
	int get_cur_day() { return cur_day; }
	Schedule get_schedule() { return schedule; }
	void set_schedule(Schedule s) { schedule = s; }

};

