#pragma once

#include "Scene.h"



class ScheduleStatScene : public Scene{

public:

	ScheduleStatScene(League* l): Scene(l, true) {

	};

	void content();
	Scene* options(std::string message);


};

