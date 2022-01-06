#pragma once

#include "Scene.h"


class CreateScene : public Scene {

private:

public:
	CreateScene(League* l) : Scene(l) {};
	void content();
	Scene* options(std::string message);



};

