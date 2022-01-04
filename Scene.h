#pragma once

#include <string>
#include <iostream>


class Scene{

public:

	virtual void content() = 0; // ������� ����� �����
	virtual Scene* options(std::string message) = 0; // ������� ����� �����

};

