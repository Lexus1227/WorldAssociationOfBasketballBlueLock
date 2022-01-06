#pragma once

#include "Scene.h"


class ChooseTeamScene : public Scene {

public:

	ChooseTeamScene(League* l) : Scene(l, true) {};

	void content();	
	Scene* options(std::string message);


};