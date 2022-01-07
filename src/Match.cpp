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
	
	return Schedule{};

}


std::ostream& operator<<(std::ostream& os, Schedule sch) {

	const int max_width_word = 20;
	const std::string delimeter = " - ";
	const int full_len = max_width_word * 2 + delimeter.size();
	const int days_in_row = 5;
	const std::string day_name = "���� ";
	//�������� �� days_in_row ������� ����
	//���� �� size div days_in_row
	for (int i = 0; i < sch.size() / days_in_row; ++i) {

		//����� ���� 
		os << "//";
		for (int j = 0; j < days_in_row; ++j) {

			std::string day = day_name + std::to_string(i * days_in_row + j + 1);
			int left = ceil((full_len - day.size()) / 2.0);
			int right = floor((full_len - day.size()) / 2.0);
			os << std::setw(left) << std::setfill(' ') << "" << day << std::setw(right) << std::setfill(' ') << " ";
			os << "//";

		}
		os << std::endl;
		/////////

		//������������ ���������� ������ �� days_in_row ����
		std::vector<unsigned long long> v;
		for (int j = 0; j < days_in_row; ++j) {

			v.push_back(sch[days_in_row * i + j].size());

		}
		int max = std::distance(v.begin(), std::max_element(v.begin(), v.end()));

		//������� ����������� ��� �� days_in_row ����
		for (int j = 0; j < max; ++j) {


			//����� �������� ������
			for (int k = 0; k < days_in_row; ++k) {

				

			}
			//����� �����
			for (int k = 0; k < days_in_row; ++k) {

				

			}

		}

	}

}