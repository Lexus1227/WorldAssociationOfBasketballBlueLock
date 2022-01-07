#pragma once

#include "Scene.h"
#include "Match"


class MatchScene : public Scene{

public:

	MatchScene(League* l, Match& m): Scene(l, true) {

	};

	void content();
	Scene* options(std::string message);


};

