#include "ChooseTeamScene.h"
#include "CreateScene.h"


void ChooseTeamScene::content() {

	std::cout << "�������� �������" << std::endl;
	std::cout << "[1-N] - ������� �������" << std::endl;
	std::cout << "show [1-N] - ���������� ���������� � �������" << std::endl;
	std::cout << "b - ��������� � ���������� ����" << std::endl;
	std::cout << "q - �����" << std::endl;
	std::cout << std::endl;

	std::cout << "������ ������" << std::endl;
	int i = 1;
	for (auto team : this->get_league()->get_teams()) {

		std::cout << i++ << ") " << team.get_name() << std::endl;

	}
	std::cout << std::endl;

}

Scene* ChooseTeamScene::options(std::string message) {

	std::cout << std::endl;
	Scene* new_scene = nullptr;

	if (is_number(message)) {

		int pos = std::stoi(message) - 1;
		std::cout << "�� ������� ������� " << pos + 1 << std::endl;
		std::cout << std::endl;
		if (pos < (this->get_league()->get_teams().size())) {

			// ������� pos ������ � teams 
			// ���������� � � ����
			// ������� � ����� ����? ���� ��������� � ��������� � ����� �������� � ������������
			this->get_league()->set_player_team(this->get_league()->get_teams()[pos]);

		}
		else {

			std::cout << "��� ����� ����� �������������� �������, ���������� ��� ���" << std::endl;

		}


	}
	else if ((message.substr(0, 5) == "show ") and (is_number(message.substr(5, message.size() - 5)))) {

		int pos = std::stoi(message.substr(5, message.size() - 5)) - 1;
		std::cout << "������� # " << pos + 1 << std::endl;
		if (pos < (this->get_league()->get_teams().size())) {

			// ������� ���������� � ������� �� ������� pos
			std::cout << this->get_league()->get_teams()[pos] << std::endl;

		}
		else {

			std::cout << "��� ����� ����� �������������� �������, ���������� ��� ���" << std::endl;
			std::cout << std::endl;

		}

	}
	else {

		std::cout << "�� ����� �������, ��������� ��� ���" << std::endl;

	}
	return new_scene;

}
