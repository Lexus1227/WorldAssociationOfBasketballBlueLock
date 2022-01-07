#include "ScheduleStatScene.h"

<<<<<<< HEAD
=======
void ScheduleStatScene::content() {
>>>>>>> 36d5f578a4eb3d7ee699e58de68bdc381222424a


void  ScheduleStatScene::content() {

	std::cout << "Расписание матчей и статистика" << std::endl;
	std::cout << "Текущий день - " << this->get_league()->get_cur_day() << std::endl;
	//Вывод расписания и статистики для сыгранных матчей

	std::cout << "b - Вернуться к игровому меню" << std::endl;
	std::cout << "q - Выход" << std::endl;

}


Scene* ScheduleStatScene::options(std::string message) {

	return nullptr;

}
