#pragma once

#include "Scene.h"


class StartScene : public Scene{

	bool chose_team;

public:

	StartScene() {
	
		chose_team = false;

	};

	void content();
	Scene* options(std::string message);


};

