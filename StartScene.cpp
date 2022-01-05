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

			exit_game();

		}
	
	}
	else if(chose_team){

		std::cout << "���������� ����� �������" << std::endl;
		if (message == "q") {

			exit_game();

		}
		else if (message == "b") {

			// change Scene to start game
			chose_team = false;

		}
		else if (is_number(message)) {

			std::cout << "�� ������� �������" << std::endl;
			int pos = std::stoi(message);
			if (pos < (this->get_league()->get_teams().size())) {

				// ������� pos - 1 ������ � teams 
				// ���������� � � ����
				// ������� � ����� ����? ���� ��������� � ��������� � ����� �������� � ������������
				this->get_league()->set_player_team(&this->get_league()->get_teams()[pos - 1]);

				//������� ����� �����
				return this->options("b");

			}
			else {

				std::cout << "��� ����� ����� �������������� �������, ���������� ��� ���" << std::endl;

			}


		}
		else if ((message.substr(0, 5) == "show ") and (is_number(message.substr(5, message.size() - 5)))) {

			std::cout << "�� ������� ����������� �������" << std::endl;
			int pos = std::stoi(message.substr(5, message.size() - 5));
			if (pos < (this->get_league()->get_teams().size())) {

				// ������� ���������� � ������� �� ������� pos - 1
				std::cout << this->get_league()->get_teams()[pos - 1] << std::endl;

			}
			else {

				std::cout << "��� ����� ����� �������������� �������, ���������� ��� ���" << std::endl;

			}

		}

	}

	return new_scene;

}