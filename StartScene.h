#pragma once

#include "Scene.h"


class StartScene : public Scene{

	bool chose_team;

public:

	StartScene(League l): Scene(l) {
	
		chose_team = false;

	};

	void content();
	Scene* options(std::string message);


};

