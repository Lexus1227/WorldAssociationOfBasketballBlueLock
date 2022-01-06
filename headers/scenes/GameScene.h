#pragma once

#include "Scene.h"

class GameScene : public Scene{

private:

public:

	GameScene(League* l) : Scene(l) {};
	void content();
	Scene* options(std::string message);

}