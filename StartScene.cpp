#include "StartScene.h"


void StartScene::content() {

	if (not chose_team) {

		std::cout << "Добро пожаловать в World Association of Basketball: Blue Lock" << std::endl;
		std::cout << "Выберите действие:" << std::endl;
		std::cout << "1 - Выбор существующей команды" << std::endl;
		std::cout << "2 - Создание своей команды" << std::endl;
		std::cout << "q - Выход" << std::endl;

	}
	else if (chose_team) {

		std::cout << "Выберите команду" << std::endl;
		std::cout << "[1-N] - Выбрать команду" << std::endl;
		std::cout << "show [1-N] - Отобразить информацию о команде" << std::endl;
		std::cout << "b - Вернуться к стартовому меню" << std::endl;
		std::cout << "q - Выход" << std::endl;
		
		std::cout << "Список команд" << std::endl;
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
			std::cout << "Сцена выбора команды" << std::endl;

		}
		else if (message == "2") {

			std::cout << "Сцена создания команды" << std::endl;

		}
		else if (message == "q") {

			exit_game();

		}
	
	}
	else if(chose_team){

		std::cout << "Происходит выбор команды" << std::endl;
		if (message == "q") {

			exit_game();

		}
		else if (message == "b") {

			// change Scene to start game
			chose_team = false;

		}
		else if (is_number(message)) {

			std::cout << "Вы выбрали команду" << std::endl;
			int pos = std::stoi(message);
			if (pos < (this->get_league()->get_teams().size())) {

				// выбрать pos - 1 индекс в teams 
				// установить её в лигу
				// перейти к сцене игры? либо вернуться в стартовую с новой командой в существующих
				this->get_league()->set_player_team(&this->get_league()->get_teams()[pos - 1]);

				//Вернуть новую сцену
				return this->options("b");

			}
			else {

				std::cout << "Был введён номер несуществующей команды, попробуйте ещё раз" << std::endl;

			}


		}
		else if ((message.substr(0, 5) == "show ") and (is_number(message.substr(5, message.size() - 5)))) {

			std::cout << "Вы выбрали отображение команды" << std::endl;
			int pos = std::stoi(message.substr(5, message.size() - 5));
			if (pos < (this->get_league()->get_teams().size())) {

				// вывести информацию о команде на позиции pos - 1
				std::cout << this->get_league()->get_teams()[pos - 1] << std::endl;

			}
			else {

				std::cout << "Был введён номер несуществующей команды, попробуйте ещё раз" << std::endl;

			}

		}

	}

	return new_scene;

}