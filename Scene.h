#pragma once

#include <string>


class Scene{

public:

	virtual void content() = 0; // Выводит текст сцены
	virtual Scene* options() = 0; // Выводит опции сцены
	virtual Scene* generate_new_scene(std::string message) = 0;

};

