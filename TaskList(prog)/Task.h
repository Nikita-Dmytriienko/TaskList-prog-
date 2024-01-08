#pragma once
#include <string>
//Класс Задача (Task):

//Создайте класс Task, представляющий отдельную задачу.
//Включите основные атрибуты : название задачи, описание, статус(выполнено / не выполнено),
//срок выполнения и другие необходимые поля.

class Task
{
private:
	std::string taskName;
	char description[255];
	bool status;
	bool inProcess;
	bool deadline;

public:

};

