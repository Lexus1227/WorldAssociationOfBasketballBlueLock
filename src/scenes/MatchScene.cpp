#include "MatchScene.h"

void MatchScene::content() {

	Match ma = this->get_league()->get_schedule()[day][mat];
	Match* match = &ma;
	match->simulate();
	std::cout << "���� ���� ������������ ������:" << std::endl;
	std::cout << match->get_team(0)->get_name() << " |  vs  | " << match->get_team(1)->get_name() << std::endl;

	auto st0 = this->get_league()->get_stat()[match->get_team(0)->get_name()];
	auto st1 = this->get_league()->get_stat()[match->get_team(1)->get_name()];

	std::cout << st0.win << " - " << st0.lose << " |  vs  | " << st1.win << " - " << st1.lose << std::endl;
	std::cout << std::endl;

	std::cout << match->get_team(0)->get_name() << std::endl;
	for (auto& p : match->get_team(0)->get_players()) {

		std::cout << p.get_name() << " ��� ������� " << p.get_number() << std::endl;

	}
	std::cout << std::endl;

	std::cout << match->get_team(1)->get_name() << std::endl;
	for (auto& p : match->get_team(1)->get_players()) {

		std::cout << p.get_name() << " ��� ������� " << p.get_number() << std::endl;

	}
	std::cout << std::endl;

	std::cout << "����� �����: " << std::endl;
	std::cout << match->get_score(0) << " - " << match->get_score(1) << std::endl;
	std::cout << std::endl;
	
	std::cout << "b - ��������� � ������� ����" << std::endl;
	std::cout << std::endl;
	this->get_league()->change_match(*match, day, mat);

}

Scene* MatchScene::options(std::string message) {

	return nullptr;

}