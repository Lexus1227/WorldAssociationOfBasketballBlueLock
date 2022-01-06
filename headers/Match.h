#pragma once

#include "Team.h"


class Match {

private:
	Team* team[2];
	stat_type score[2];

public:
	Match(Team* t0, Team* t1) {

		team[0] = t0;
		team[1] = t1;
		score[0] = undef;
		score[0] = undef;

	}

	void simulate(int seed);

	stat_type get_score(unsigned nteam = 0) { return nteam < 2 ? score[nteam] : undef; }


};


typedef std::vector<std::vector<Match>> Schedule;


Schedule generate_schedule()	