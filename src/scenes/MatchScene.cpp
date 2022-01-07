#include "MatchScene.h"

void MatchScene::content() {

	match->simulate();
	std::cout << "ÌÀÒ× ÄÂÓÕ ÂÅËÈÊÎËÅÏÍÛÕ ÊÎÌÀÍÄ:" << std::endl;
	std::cout << match->get_team(0)->get_name() << " |  vs  | " << match->get_team(1)->get_name() << std::endl;
	std::cout << std::endl;

	std::cout << match->get_team(0)->get_name() << std::endl;
	for (auto& p : match->get_team(0)->get_players()) {

		std::cout << p.get_name() << " ïîä íîìåğîì " << p.get_number() << std::endl;

	}
	std::cout << std::endl;

	std::cout << match->get_team(1)->get_name() << std::endl;
	for (auto& p : match->get_team(1)->get_players()) {

		std::cout << p.get_name() << " ïîä íîìåğîì " << p.get_number() << std::endl;

	}
	std::cout << std::endl;

	std::cout << "ÈÒÎÃÈ ÌÀÒ×À: " << std::endl;
	std::cout << match->get_score(0) << " - " << match->get_score(1) << std::endl;
	std::cout << std::endl;

}

Scene* MatchScene::options(std::string message) {

	return nullptr;

}