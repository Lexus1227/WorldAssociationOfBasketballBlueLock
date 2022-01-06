#pragma once

#include "Scene.h"
#include "StartScene.h"

class Manager{


	std::vector<Scene*> stack;
	League* league;


public: 

	Manager() {

		auto teams = load_teams(".\\teams", "teams");
		this->league = new League(teams);
		stack.push_back(new StartScene(this->league));

	}

	void run();

	~Manager() {

		for (auto s : stack) {

			delete s;

		}
		delete league;

	}

};

