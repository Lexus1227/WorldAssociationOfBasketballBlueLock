#include "ScheduleStatScene.h"


void  ScheduleStatScene::content() {

	std::cout << "Расписание матчей и статистика" << std::endl;
	std::cout << "Текущий день - " << this->get_league()->get_cur_day() << std::endl;
	//Вывод расписания и статистики для сыгранных матчей
	std::cout << this->get_league()->get_schedule();
	std::cout << "b - Вернуться к игровому меню" << std::endl;
	std::cout << "q - Выход" << std::endl;

}


Scene* ScheduleStatScene::options(std::string message) {



	return nullptr;

}
