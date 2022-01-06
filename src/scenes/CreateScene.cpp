#include "CreateScene.h"


void CreateScene::content() {

	std::cout << "Вы попали в форму создания персонажа" << std::endl;
	std::cout << "Для его создания вам необходимо будет ввести данные \
о команде в специальной форме:" << std::endl;

	std::cout << "%НазваниеКоманды" << std::endl;
	std::cout << "%КоличествоИгроков" << std::endl;
	std::cout << "Для каждого игрока (x %КоличествоИгроков раз):" << std::endl;
	std::cout << "%ПолноеИмяИгрока" << std::endl;
	std::cout << "%ИгровойНомерИгрока" << std::endl;
	std::cout << "Его показатели в одной строке через точку запятую и знаки равно\n\
(например: AGI = 95; ACC = 95; STR = 98; END = 98; ATK = 97; DEF = 97)" << std::endl;

	std::cout << std::endl;
	std::cout << "1 - Начать ввод данных о команде" << std::endl;
	std::cout << "b - Вернуться к стартовому меню" << std::endl;
	std::cout << "q - Выход" << std::endl;
	std::cout << std::endl;

}


Scene* CreateScene::options(std::string message) {

	std::cout << std::endl;
	if (message == "1") {



	}
	else {

		std::cout << "Не понял команду, повторите ещё раз" << std::endl;

	}
	return nullptr;

}
