#include <iostream>
#include <Windows.h>

bool Isnum(char sym)
{
	if (!std::isdigit(sym))
	{
		return false;
	}
    return true;
}

// В 84 он говорит про инт маинт и что он должен вернуть, что то
// Я не понимаю как я должен это отобразить
int main(int argc, char* argv[])
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	if (argc == 4 && Isnum(*argv[1]) && Isnum(*argv[3]) && *argv[2] == '+')
	{
		std::cout << "\n===============================================================\n";
		std::cout << argv[1] << " " << argv[2] << " " << argv[3] << " = " << atoi(argv[1]) + atoi(argv[3]) << std::endl;
	}
	else if (argc == 4 && Isnum(*argv[1]) && Isnum(*argv[3]) && *argv[2] == '-')
	{
		std::cout << "\n===============================================================\n";
		std::cout << argv[1] << " " << argv[2] << " " << argv[3] << " = " << atoi(argv[1]) - atoi(argv[3]) << std::endl;
	}
	else
	{
		std::cout << "\n===============================================================\n";
		std::cout << "\tНеправильный ввод! Нужно Число \"Знак\" и Число \n";
	}


	return 0;
	system("pause"); 
}


