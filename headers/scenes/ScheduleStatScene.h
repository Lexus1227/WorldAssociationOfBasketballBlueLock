#pragma once

#include "Scene.h"


class SheduleStatScene : public Scene{

public:

	SheduleStatScene(League* l): Scene(l, true) {

	};

	void content();
	Scene* options(std::string message);


};

