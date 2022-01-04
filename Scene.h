#pragma once

#include <string>
#include <iostream>


class Scene{

public:

	virtual void content() = 0; // Выводит текст сцены
	virtual Scene* options(std::string message) = 0; // Выводит опции сцены

};

