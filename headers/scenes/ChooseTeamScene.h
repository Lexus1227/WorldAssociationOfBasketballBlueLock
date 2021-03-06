#pragma once

#include "Scene.h"
#include "MainGameScene.h"
#include "Match.h"


class ChooseTeamScene : public Scene {

public:

	ChooseTeamScene(League* l) : Scene(l, true) {};

	void content();	
	Scene* options(std::string message);


};