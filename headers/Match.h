#pragma once

#include <random>
#include <functional>
#include <algorithm>
#include "Team.h"


const int max_matches_in_day = 6;

class Match {

private:
	Team team[2];
	stat_type score[2];
	bool was_played = false;

public:
	Match(Team* t0 = nullptr, Team* t1 = nullptr) {

		team[0] = *t0;
		team[1] = *t1;
		score[0] = undef;
		score[0] = undef;

	}

	void simulate(int seed = 42);
	void set_team(Team* t, unsigned nteam = 0) { nteam < 2 ? team[nteam] = *t : throw WrongParamValue("Wrong nteam"); }
	Team* get_team(unsigned nteam = 0) { return nteam < 2 ? &team[nteam] : throw WrongParamValue("Wrong nteam"); }
	stat_type get_score(unsigned nteam = 0) { return nteam < 2 ? score[nteam] : throw WrongParamValue("Wrong nteam"); }
	bool played() { return was_played; }

};


typedef std::vector<std::vector<Match>> Schedule;
std::ostream& operator<<(std::ostream& os, Schedule sch);

Schedule generate_schedule(std::vector<Team>& teams, int seed = 42);
void print_one_row(std::ostream& os, Schedule sch, int i, int days);

typedef std::pair<int, int> match_index;
std::vector<match_index> generate_flat(std::vector<int> v);
std::pair<std::vector<int>, std::vector<int>> cut(std::vector<int> v);

Schedule split_by_k(std::vector<Team>& teams, std::vector<match_index> v, int k);
