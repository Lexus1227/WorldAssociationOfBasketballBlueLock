#pragma once

#include "Scene.h"
#include "StartScene.h"

class Manager{

	Scene* current_scene;

public: 

	Manager() {

		auto teams = load_teams(".\\teams", "teams");
		League l(teams);
		current_scene = new StartScene(l);

	}
	void do_sth();
	


	~Manager() {

		delete current_scene;

	}

};

