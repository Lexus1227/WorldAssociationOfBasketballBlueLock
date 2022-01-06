#include "StartScene.h"
#include "CreateScene.h"
#include "ChooseTeamScene.h"


void StartScene::content() {

	std::cout << "����� ���������� � World Association of Basketball: Blue Lock" << std::endl;
	std::cout << "�������� ��������:" << std::endl;
	std::cout << "1 - ����� ������������ �������" << std::endl;
	std::cout << "2 - �������� ����� �������" << std::endl;
	std::cout << "q - �����" << std::endl;
	std::cout << std::endl;

}

Scene* StartScene::options(std::string message) {

	std::cout << std::endl;
	Scene* new_scene = nullptr;

	if (message == "1") {

		//std::cout << "����� ������ �������" << std::endl;
		return new ChooseTeamScene(this->get_league());


	}
	else if (message == "2") {

		//std::cout << "����� �������� �������" << std::endl;
		return new CreateScene(this->get_league());

	}
	else {

		std::cout << "�� ����� �������, ��������� ��� ���" << std::endl;

	}

	return new_scene;

}