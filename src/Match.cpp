#include "Match.h"


void Match::simulate(int seed) {

	if (was_played)
		return;
	was_played = true;
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
		(mean(this->team[0], [](Player& p) { return p.get_stat(ATK); }) + rand() % 11 - 5) * 
		(mean(this->team[0], [](Player& p) { return p.get_stat(END); }) + rand() % 11 - 5) / 100 -
		(mean(this->team[1], [](Player& p) { return p.get_stat(DEF); }) + rand() % 11 - 5) *
		(mean(this->team[1], [](Player& p) { return p.get_stat(END); }) + rand() % 11 - 5) / 200;
	score[0] = score[0] >= 0 ? score[0] : 0;

	score[1] = 
		(mean(this->team[1], [](Player& p) { return p.get_stat(ATK); }) + rand() % 11 - 5) *
		(mean(this->team[1], [](Player& p) { return p.get_stat(END); }) + rand() % 11 - 5) / 100 -
		(mean(this->team[0], [](Player& p) { return p.get_stat(DEF); }) + rand() % 11 - 5) *
		(mean(this->team[0], [](Player& p) { return p.get_stat(END); }) + rand() % 11 - 5) / 200;
	score[1] = score[1] >= 0 ? score[1] : 0;

}


Schedule generate_schedule(std::vector<Team> teams) {

	int times_to_play = 2;
	int matches_for_each_team = (teams.size() - 1) * times_to_play;

	int days = matches_for_each_team * 2;
	
	Schedule s(days);
	int k = 0;
	for (int i = 0; i < teams.size(); ++i) {

		for (int j = i + 1; j < teams.size(); ++j) {

			s[k % days].push_back(Match(&teams[i], &teams[j]));
			k += 2;

		}

	}

	return s;

}

std::ostream& operator<<(std::ostream& os, Schedule sch) {

	int width = 20;
	int days_in_row = 5;

	//Выбираем по days_in_row игровых дней
	//Идем по size div days_in_row
	for (int i = 0; i < sch.size() / days_in_row; ++i) {

		//вывод дней 
		for (int j = 0; j < days_in_row; ++j) {



		}
		/////////

		//Максимальное количество матчей за days_in_row дней
		std::vector<unsigned long long> v;
		for (int j = 0; j < days_in_row; ++j) {

			v.push_back(sch[days_in_row * i + j].size());

		}
		int max = std::distance(v.begin(), std::max_element(v.begin(), v.end()));

		//Сколько максимально игр из days_in_row дней
		for (int j = 0; j < max; ++j) {


			//Вывод названия команд
			for (int k = 0; k < days_in_row; ++k) {

				

			}
			//вывод счета
			for (int k = 0; k < days_in_row; ++k) {

				

			}

		}

	}

}