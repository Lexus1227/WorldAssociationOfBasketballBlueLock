#pragma once

#include "Scene.h"


class MainGameScene : public Scene {

public:

	MainGameScene(League* l) : Scene(l, false) {

	};

	void content();
	Scene* options(std::string message);


};

