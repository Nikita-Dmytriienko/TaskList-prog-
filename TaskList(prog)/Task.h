#pragma once
#include <iostream>
#include <string>
//Класс Задача (Task):

//Создайте класс Task, представляющий отдельную задачу.
//Включите основные атрибуты : название задачи, описание, статус(выполнено / не выполнено),
//срок выполнения и другие необходимые поля.

class Task
{
private:
	
public:
	std::string taskName;
    std::string description;
	bool status;
	bool deadline;


    std::string TaskName() const 
    { return taskName; }
    void TaskName(const std::string& name) 
    { taskName = name; }

    std::string Description()  const 
    { return description; }
    void Description(const std::string& desc) 
    { description = desc; }

    bool Status() const 
    { return status; }
    void SetStatus(bool newStatus)
    { status = newStatus; }

    bool Deadline() const 
    { return deadline; }
    void SetDeadline(bool newDeadline) 
    { deadline = newDeadline; }

    friend std::istream& operator>>(std::istream& is, Task& task)
    {
        std::cout << "Enter task name: ";
        is >> task.taskName;

        std::cout << "Enter task description: ";
        is.ignore(); // Игнорируем предыдущий символ новой строки
        std::getline(is, task.description);

        return is;
    }
};

