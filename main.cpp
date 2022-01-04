#include <iostream>
#include <locale.h>
#include "Manager.h"



int main() {

	setlocale(LC_ALL, "rus");

	Manager man;
	man.do_sth();



}