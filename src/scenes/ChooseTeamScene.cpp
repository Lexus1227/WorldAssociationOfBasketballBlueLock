#include "ChooseTeamScene.h"
#include "CreateScene.h"


void ChooseTeamScene::content() {

	std::cout << "Выберите команду" << std::endl;
	std::cout << "[1-N] - Выбрать команду" << std::endl;
	std::cout << "show [1-N] - Отобразить информацию о команде" << std::endl;
	std::cout << "b - Вернуться к стартовому меню" << std::endl;
	std::cout << "q - Выход" << std::endl;
	std::cout << std::endl;

	std::cout << "Список команд" << std::endl;
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
		std::cout << "Вы выбрали команду " << pos + 1 << std::endl;
		std::cout << std::endl;
		if (pos < (this->get_league()->get_teams().size())) {

			// выбрать pos индекс в teams 
			// установить её в лигу
			// перейти к сцене игры? либо вернуться в стартовую с новой командой в существующих
			this->get_league()->set_player_team(this->get_league()->get_teams()[pos]);

		}
		else {

			std::cout << "Был введён номер несуществующей команды, попробуйте ещё раз" << std::endl;

		}


	}
	else if ((message.substr(0, 5) == "show ") and (is_number(message.substr(5, message.size() - 5)))) {

		int pos = std::stoi(message.substr(5, message.size() - 5)) - 1;
		std::cout << "Команда # " << pos + 1 << std::endl;
		if (pos < (this->get_league()->get_teams().size())) {

			// вывести информацию о команде на позиции pos
			std::cout << this->get_league()->get_teams()[pos] << std::endl;

		}
		else {

			std::cout << "Был введён номер несуществующей команды, попробуйте ещё раз" << std::endl;
			std::cout << std::endl;

		}

	}
	else {

		std::cout << "Не понял команду, повторите ещё раз" << std::endl;

	}
	return new_scene;

}
