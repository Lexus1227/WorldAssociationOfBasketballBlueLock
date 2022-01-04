#pragma once

#include "Scene.h"
#include "StartScene.h"

class Manager{

	Scene* current_scene;

public: 

	Manager() {

		League l;
		current_scene = new StartScene(l);

	}
	void do_sth();
	


	~Manager() {

		delete current_scene;

	}

};

