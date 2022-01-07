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


enum {Days, Name, Score};

std::ostream& operator<<(std::ostream& os, Schedule sch) {

	
	//Выбираем по days_in_row игровых дней
	//Идем по size div days_in_row
	for (int i = 0; i < (sch.size() / days_in_row); ++i) {

		print_one_row(os, sch, i, days_in_row);

	}

	print_one_row(os, sch, sch.size() / days_in_row, sch.size() % days_in_row);
	
	return os;

}

void print_one_row(std::ostream& os, Schedule sch, int i, int days) {

	
	//вывод дней 
	os << "//";
	for (int j = 0; j < days; ++j) {

		std::string day = day_name + std::to_string(i * days + j + 1);
		int left = ceil((full_len - day.size()) / 2.0);
		int right = floor((full_len - day.size()) / 2.0);
		os << std::setw(left) << std::setfill(' ') << "" << day << std::setw(right) << std::setfill(' ') << " ";
		os << "//";

	}
	os << std::endl;
	/////////

	//Максимальное количество матчей за days_in_row дней
	std::vector<unsigned long long> v;
	for (int j = 0; j < days; ++j) {

		v.push_back(sch[days * i + j].size());

	}
	int max = std::distance(v.begin(), std::max_element(v.begin(), v.end()));

	//Сколько максимально игр из days_in_row дней
	for (int j = 0; j < max; ++j) {


		//Вывод названия команд
		os << "//";
		for (int k = 0; k < days; ++k) {

			if (j < sch[i * days + k].size()) {
				
				std::string name_teams = sch[]
				int left = ceil((full_len - day.size()) / 2.0);
				int right = floor((full_len - day.size()) / 2.0);
				os << std::setw(left) << std::setfill(' ') << "" << day << std::setw(right) << std::setfill(' ') << " ";

			}
			else {


			}
			os << "//";

		}
		//вывод счета
		for (int k = 0; k < days; ++k) {



		}

	}
}