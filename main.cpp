#include <iostream>
#include <locale.h>
#include "Manager.h"


#define TESTING_MODE

#ifdef TESTING_MODE
	#include "tests.h"
#endif


int main() {

	setlocale(LC_ALL, "rus");
	/*#ifdef TESTING_MODE
			run_all_tests();
	#endif*/
	Manager man;
	man.run();

}