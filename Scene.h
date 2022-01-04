#pragma once

#include <string>


class Scene{

public:

	virtual void content() = 0; // ������� ����� �����
	virtual Scene* options() = 0; // ������� ����� �����
	virtual Scene* generate_new_scene(std::string message) = 0;

};

