#pragma once

#include "Scene.h"


class StartScene : public Scene{

public:

	StartScene(League* l): Scene(l, true) {

	};

	void content();
	Scene* options(std::string message);


};

