#include "ScheduleStatScene.h"

<<<<<<< HEAD
=======
void ScheduleStatScene::content() {
>>>>>>> 36d5f578a4eb3d7ee699e58de68bdc381222424a


void  ScheduleStatScene::content() {

	std::cout << "���������� ������ � ����������" << std::endl;
	std::cout << "������� ���� - " << this->get_league()->get_cur_day() << std::endl;
	//����� ���������� � ���������� ��� ��������� ������

	std::cout << "b - ��������� � �������� ����" << std::endl;
	std::cout << "q - �����" << std::endl;

}


Scene* ScheduleStatScene::options(std::string message) {

	return nullptr;

}
