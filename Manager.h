#pragma once

#include "Scene.h"
#include "StartScene.h"

class Manager{

	Scene* current_scene;

public: 

	Manager() {

		current_scene = new StartScene();

	}
	void do_sth();
	


	~Manager() {

		delete current_scene;

	}

};

