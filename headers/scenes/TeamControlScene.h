#pragma once

#include "Scene.h"


class TeamControlScene: public Scene{

public:

	TeamControlScene(League* l): Scene(l, true) {

	};

	void content();
	Scene* options(std::string message);


};

