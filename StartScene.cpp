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

			exit(EXIT_SUCCESS);

		}
	
	}
	else if(chose_team){

		std::cout << "Происходит выбор команды" << std::endl;
		// if меседж равен номеру команды

		// if меседж равен show номер команды

		// if меседж равен b
		
		// if меседж равен q

	}

	return new_scene;

}