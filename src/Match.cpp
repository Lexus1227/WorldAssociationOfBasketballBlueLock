#include "Match.h"


void Match::simulate(int seed) {

	// set score
	//score[0] = 100 - seed;
	//score[1] = 101 - seed;
	srand(seed);
		
	auto mean = [](Team* t, std::function<stat_type(Player& p)> g) {
		double sum = 0;
		for (auto& p : t->get_players()) {

			sum += g(p);

		};
		return sum / t->get_players().size();
	};

	score[0] = 
		(mean(this->team[0], [](Player& p) { return p.get_stat(ATK); }) + rand() % 11) * 
		(mean(this->team[0], [](Player& p) { return p.get_stat(END); }) + rand() % 11) / 100 -
		(mean(this->team[1], [](Player& p) { return p.get_stat(DEF); }) + rand() % 11) *
		(mean(this->team[1], [](Player& p) { return p.get_stat(END); }) + rand() % 11) / 200;
	score[0] = score[0] >= 0 ? score[0] : 0;

	score[1] =
		(mean(this->team[1], [](Player& p) { return p.get_stat(ATK); }) + rand() % 11) *
		(mean(this->team[1], [](Player& p) { return p.get_stat(END); }) + rand() % 11) / 100 -
		(mean(this->team[0], [](Player& p) { return p.get_stat(DEF); }) + rand() % 11) *
		(mean(this->team[0], [](Player& p) { return p.get_stat(END); }) + rand() % 11) / 200;

	score[1] = score[1] >= 0 ? score[1] : 0;

}


Schedule generate_schedule(std::vector<Team> teams) {

	int times_to_play = 2;
	int matches_for_each_team = (teams.size() - 1) * times_to_play;

	int days = matches_for_each_team * 2;
	
	return Schedule{};

}