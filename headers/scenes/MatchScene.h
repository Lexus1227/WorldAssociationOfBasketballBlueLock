#pragma once

#include "Scene.h"
#include "Match.h"


class MatchScene : public Scene{

public:

	int day;
	int mat;

	MatchScene(League* l, int d, int m): Scene(l, true), day(d), mat(m) {
		
	};

	void content();
	Scene* options(std::string message);


};

