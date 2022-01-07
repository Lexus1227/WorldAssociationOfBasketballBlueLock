#include "Match.h"


void Match::simulate(int seed) {

	// set score
	//score[0] = 100 - seed;
	//score[1] = 101 - seed;

}


Schedule generate_schedule(std::vector<Team> teams) {

	int times_to_play = 2;
	int matches_for_each_team = (teams.size() - 1) * times_to_play;

	int days = matches_for_each_team * 2;
	
	return Schedule{};

}