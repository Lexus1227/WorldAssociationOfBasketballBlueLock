#include "StartScene.h"


void StartScene::content() {

	if (not chose_team) {

		std::cout << "����� ���������� � World Association of Basketball: Blue Lock" << std::endl;
		std::cout << "�������� ��������:" << std::endl;
		std::cout << "1 - ����� ������������ �������" << std::endl;
		std::cout << "2 - �������� ����� �������" << std::endl;
		std::cout << "q - �����" << std::endl;

	}
	else if (chose_team) {

		std::cout << "�������� �������" << std::endl;
		std::cout << "[1-N] - ������� �������" << std::endl;
		std::cout << "show [1-N] - ���������� ���������� � �������" << std::endl;
		std::cout << "b - ��������� � ���������� ����" << std::endl;
		std::cout << "q - �����" << std::endl;
		
		std::cout << "������ ������" << std::endl;
		int i = 1;
		for (auto team : this->get_league()->get_teams()) {

			std::cout << i << ") " << team.get_name() << std::endl;

		}

	}

}

Scene* StartScene::options(std::string message) {

	Scene* new_scene = nullptr;
	
	if (not chose_team) {

		if (message == "1") {

			chose_team = true;
			std::cout << "����� ������ �������" << std::endl;

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
		// if ������ ����� ������ �������

		// if ������ ����� show ����� �������

		// if ������ ����� b
		
		// if ������ ����� q

	}

	return new_scene;

}