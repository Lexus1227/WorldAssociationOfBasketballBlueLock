#include "match_test.h"


void test_one_match() {

	auto teams = load_teams(".\\teams", "teams");
	if (not teams.size())
		throw WrongParamValue("Wasn't any team in test");

	Match m(&teams[0], &teams[0]);
	m.simulate();

}


void test_match_scene() {

	//auto teams = load_teams(".\\teams", "teams");
	//if (not teams.size())
	//	throw WrongParamValue("Wasn't any team in test");

	//League l(teams);
	//Match m(&teams[0], &teams[0]);
	//MatchScene scene(&l, &m);
	//scene.content();

}
