#include "StartScene.h"


void StartScene::content() {

	if (not chose_team) {

		std::cout << "������" << std::endl;
		std::cout << "����� ���������� � World Association of Basketball : Blue Lock" << std::endl;
		std::cout << "�������� ��������:" << std::endl;
		std::cout << "1 - ����� ������������ �������" << std::endl;
		std::cout << "2 - �������� ����� �������" << std::endl;
		std::cout << "q - �����" << std::endl;

	}
	else if (chose_team) {

		std::cout << "�������� �������" << std::endl;

	}



}

Scene* StartScene::options(std::string message) {

	Scene* new_scene = nullptr;
	
	if (not chose_team) {

		if (message == "1") {

			chose_team = true;

		}
		else if (message == "2") {

			std::cout << "����� �������� �������" << std::endl;

		}
		else if (message == "q") {

			exit(EXIT_SUCCESS);

		}
	
	}
	else if(chose_team){

		std::cout << "���������� ����� �������" << std::endl;

	}

	return new_scene;

}