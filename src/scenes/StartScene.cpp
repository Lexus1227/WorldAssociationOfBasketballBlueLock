#include "StartScene.h"
#include "CreateScene.h"
#include "ChooseTeamScene.h"


void StartScene::content() {

	std::cout << "Добро пожаловать в World Association of Basketball: Blue Lock" << std::endl;
	std::cout << "Выберите действие:" << std::endl;
	std::cout << "1 - Выбор существующей команды" << std::endl;
	std::cout << "2 - Создание своей команды" << std::endl;
	std::cout << "q - Выход" << std::endl;
	std::cout << std::endl;

}

Scene* StartScene::options(std::string message) {

	std::cout << std::endl;
	Scene* new_scene = nullptr;

	if (message == "1") {

		//std::cout << "Сцена выбора команды" << std::endl;
		return new ChooseTeamScene(this->get_league());


	}
	else if (message == "2") {

		//std::cout << "Сцена создания команды" << std::endl;
		return new CreateScene(this->get_league());

	}
	else {

		std::cout << "Не понял команду, повторите ещё раз" << std::endl;

	}

	return new_scene;

}