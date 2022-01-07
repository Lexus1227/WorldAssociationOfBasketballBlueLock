#pragma once

#include "Scene.h"
#include "MatchScene.h"
#include "TeamControlScene.h"
#include "ScheduleStatScene.h"




class MainGameScene : public Scene {

public:

	MainGameScene(League* l) : Scene(l, false) {

	};

	void content();
	Scene* options(std::string message);


};

