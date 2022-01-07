#pragma once

#include "Scene.h"
#include "Match.h"


class MatchScene : public Scene{

public:

	Match* match;

	MatchScene(League* l, Match* m): Scene(l, true), match(m) {

	};

	void content();
	Scene* options(std::string message);


};

