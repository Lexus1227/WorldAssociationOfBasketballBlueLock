#pragma once

#include "Scene.h"


class MatchScene : public Scene{

public:

	MatchScene(League* l): Scene(l, true) {

	};

	void content();
	Scene* options(std::string message);


};

