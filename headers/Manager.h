#pragma once

#include "Scene.h"
#include "StartScene.h"

class Manager{

	Scene* current_scene;
	League* league;

public: 

	Manager() {

		auto teams = load_teams(".\\teams", "teams");
		this->league = new League(teams);
		current_scene = new StartScene(this->league);

	}
	void do_sth();
	


	~Manager() {

		delete current_scene;
		delete league;

	}

};

