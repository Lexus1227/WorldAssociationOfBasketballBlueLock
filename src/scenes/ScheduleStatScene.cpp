#include "ScheduleStatScene.h"


void  ScheduleStatScene::content() {

	std::cout << "���������� ������ � ����������" << std::endl;
	std::cout << "������� ���� - " << this->get_league()->get_cur_day() << std::endl;
	//����� ���������� � ���������� ��� ��������� ������
	std::cout << this->get_league()->get_schedule();
	std::cout << "b - ��������� � �������� ����" << std::endl;
	std::cout << "q - �����" << std::endl;

}


Scene* ScheduleStatScene::options(std::string message) {



	return nullptr;

}
