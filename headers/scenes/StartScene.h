#pragma once

#include "Scene.h"


class StartScene : public Scene{

public:

	StartScene(League* l): Scene(l) {

	};

	void content();
	Scene* options(std::string message);


};

