#pragma once

#include <random>
#include <functional>

#include "Team.h"


class Match {

private:
	Team* team[2];
	stat_type score[2];

public:
	Match(Team* t0 = nullptr, Team* t1 = nullptr) {

		team[0] = t0;
		team[1] = t1;
		score[0] = undef;
		score[0] = undef;

	}

	void simulate(int seed = 42);
	void set_team(Team* t, unsigned nteam = 0) { nteam < 2 ? team[nteam] = t : throw WrongParamValue("Wrong nteam"); }
	stat_type get_score(unsigned nteam = 0) { return nteam < 2 ? score[nteam] : throw WrongParamValue("Wrong nteam"); }

};


typedef std::vector<std::vector<Match>> Schedule;



Schedule generate_schedule(std::vector<Team> teams);