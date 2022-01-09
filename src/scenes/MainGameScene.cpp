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
		new_scene =  new ScheduleStatScene(this->get_league());


	}
	else if (message == "2") {

		//std::cout << "����� ���������� ��������" << std::endl;
		new_scene =  new TeamControlScene(this->get_league());

	}
	else if (message == "s") {

		// TODO ������� ��� ��� ���� �� ����� � ����� ����� � ���� ����
		// 
		// 
		//std::cout << "����� ��������� �����" << std::endl;
		//new_scene =  new MatchScene(this->get_league());

		std::string player_team = this->get_league()->get_player_team().get_name();
		for (int day = this->get_league()->get_cur_day(); day < this->get_league()->get_schedule().size(); ++day) {

			auto today = this->get_league()->get_schedule()[day];
			for (int match = 0; match < today.size(); ++match) {

				if (not this->get_league()->get_schedule()[day][match].played()) {

					if ((today[match].get_team(0)->get_name() == player_team) or (today[match].get_team(0)->get_name() == player_team)) {

						return new MatchScene(this->get_league(), &this->get_league()->get_schedule()[day][match]);

					}

				}

			}

		}
		std::cout << "����� ����" << std::endl;//

	}
	else {

		std::cout << "�� ����� �������, ��������� ��� ���" << std::endl;

	}

	return new_scene;

}