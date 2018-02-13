
#include <Windows.h>
#include <iostream>
#include <string>
#include <fstream>

#include "lib.h"

int main()
{
	std::cout << "FileToBASE64\n" << std::endl;

	const int size_buf = 1;

	while(1){

		std::cout << "1 = Encode File\n" << std::endl;
		std::cout << "2 = Decode File\n" << std::endl;
		std::cout << "3 = Exit\n" << std::endl;

		int mode_ed = 0;
		std::cin >> mode_ed;

		if(mode_ed == 1) // Encode
		{
			std::string aaa, bbb = "";
			std::cout << "\nPath Decode File: " << std::endl;
			std::cin >> aaa;
			std::cout << "\nPath File for Encode: " << std::endl;
			std::cin >> bbb;

			encode_file_base64(aaa, bbb);
		}

		if(mode_ed == 2) // Decode
		{
			std::string aaa, bbb = "";
			std::cout << "\nPath Encode File: " << std::endl;
			std::cin >> aaa;
			std::cout << "\nPath File for Decode: " << std::endl;
			std::cin >> bbb;

			decode_file_base64(aaa, bbb);
		}

		if(mode_ed == 3) // Exit LOOP
			return 1;
	}
	
	system("PAUSE");
	return 0;
}
