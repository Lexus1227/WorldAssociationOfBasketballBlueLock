#include "MainGameScene.h"


void MainGameScene::content() {

	std::cout << "������� ����" << std::endl;
	std::cout << "������� ���� - " << this->get_league()->get_cur_day() + 1 << std::endl;
	std::cout << "�������� ��������" << std::endl;
	std::cout << "1 - ����������� ���������� � ���������� ������" << std::endl;
	std::cout << "2 - ���������� ��������" << std::endl;
	std::cout << "s - ������ ��������� ����" << std::endl;
	std::cout << "q - �����" << std::endl;
	std::cout << std::endl;

}

Scene* MainGameScene::options(std::string message) {

	
	std::cout << std::endl;
	Scene* new_scene = nullptr;

	if (message == "1") {

		//std::cout << "����� ���������� � ���������� ������" << std::endl;
		//return new Scene(this->get_league());


	}
	else if (message == "2") {

		//std::cout << "����� ���������� ��������" << std::endl;
		//return new Scene(this->get_league());

	}
	else if (message == "s") {

		//std::cout << "����� ��������� �����" << std::endl;
		//return new Scene(this->get_league());

	}
	
	else {

		std::cout << "�� ����� �������, ��������� ��� ���" << std::endl;

	}

	return new_scene;

}