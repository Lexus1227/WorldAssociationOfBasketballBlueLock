#include "CreateScene.h"


void CreateScene::content() {

	std::cout << "�� ������ � ����� �������� ���������" << std::endl;
	std::cout << "��� ��� �������� ��� ���������� ����� ������ ������ \
� ������� � ����������� �����:" << std::endl;

	std::cout << "%���������������" << std::endl;
	std::cout << "%�����������������" << std::endl;
	std::cout << "��� ������� ������ (x %����������������� ���):" << std::endl;
	std::cout << "%���������������" << std::endl;
	std::cout << "%������������������" << std::endl;
	std::cout << "��� ���������� � ����� ������ ����� ����� ������� � ����� �����\n\
(��������: AGI = 95; ACC = 95; STR = 98; END = 98; ATK = 97; DEF = 97)" << std::endl;

	std::cout << std::endl;
	std::cout << "1 - ������ ���� ������ � �������" << std::endl;
	std::cout << "b - ��������� � ���������� ����" << std::endl;
	std::cout << "q - �����" << std::endl;
	std::cout << std::endl;

}


Scene* CreateScene::options(std::string message) {

	std::cout << std::endl;
	if (message == "1") {



	}
	else {

		std::cout << "�� ����� �������, ��������� ��� ���" << std::endl;

	}
	return nullptr;

}
