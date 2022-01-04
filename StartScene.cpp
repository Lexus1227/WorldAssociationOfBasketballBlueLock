#include "StartScene.h"


void StartScene::content() {

	if (not chose_team) {

		std::cout << "ДАРОВА" << std::endl;
		std::cout << "Добро пожаловать в World Association of Basketball : Blue Lock" << std::endl;
		std::cout << "Выберите действие:" << std::endl;
		std::cout << "1 - Выбор существующей команды" << std::endl;
		std::cout << "2 - Создание своей команды" << std::endl;
		std::cout << "q - Выход" << std::endl;

	}
	else if (chose_team) {

		std::cout << "Выберите команду" << std::endl;

	}



}

Scene* StartScene::options(std::string message) {

	Scene* new_scene = nullptr;
	
	if (not chose_team) {

		if (message == "1") {

			chose_team = true;

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

	}

	return new_scene;

}