#include "MainGameScene.h"


void MainGameScene::content() {

	std::cout << "Игровая лига" << std::endl;
	std::cout << "Текущий день - " << this->get_league()->get_cur_day() + 1 << std::endl;
	std::cout << "Выберите действие" << std::endl;
	std::cout << "1 - Просмотреть расписание и статистику матчей" << std::endl;
	std::cout << "2 - Управление командой" << std::endl;
	std::cout << "s - Начать следующий матч" << std::endl;
	std::cout << "q - Выход" << std::endl;
	std::cout << std::endl;

}

Scene* MainGameScene::options(std::string message) {

	
	std::cout << std::endl;
	Scene* new_scene = nullptr;

	if (message == "1") {

		//std::cout << "Сцена расписания и статистика матчей" << std::endl;
		//return new Scene(this->get_league());


	}
	else if (message == "2") {

		//std::cout << "Сцена управления командой" << std::endl;
		//return new Scene(this->get_league());

	}
	else if (message == "s") {

		//std::cout << "Сцена симуляции матча" << std::endl;
		//return new Scene(this->get_league());

	}
	
	else {

		std::cout << "Не понял команду, повторите ещё раз" << std::endl;

	}

	return new_scene;

}