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
	/*Manager man;
	man.run();*/
	std::vector v = { 1, 2 ,3, 4, 5, 6};
	std::mt19937 g(43);
	std::vector<match_index> res = generate_flat(v);
	std::shuffle(res.begin(), res.end(), g);
	for (int i = 0; i < res.size(); ++i) {

		std::cout << res[i].first << " - " << res[i].second << std::endl;


	}

}