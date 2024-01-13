#include <iostream>
#include "TaskList.h"

TaskList::TaskList()
{ }

void TaskList::AddTask()
{
    Task newTask; // Создаем новый объект задачи

    // Заполняем атрибуты задачи. Для примера, предположим, что мы заполняем их с клавиатуры.
    std::cout << "Enter task name: ";
    std::cin >> newTask.taskName;

    std::cout << "Enter task description: ";
    std::cin.ignore(); // Игнорируем предыдущий символ новой строки
    std::cin.getline(newTask.description, 255);

    // По умолчанию новая задача создается не выполненной и без срока выполнения
    newTask.status = false;
    newTask.inProcess = false;
    newTask.deadline = false;

    // Добавляем новую задачу в список
    tasks.push_back(newTask);

    std::cout << "Task added successfully!" << std::endl;
}

void TaskList::RemoveTask()
{
}

void TaskList::ShowTask() const
{
}

void TaskList::TaskStatusSorting()
{
}

void TaskList::TaskDeadlineSorting()
{
}

void TaskList::ShowMenu() const
{
	std::cout << "";
}

void TaskList::ShowTasks() const
{
	std::cout << "Your Tasks:"<<std::endl;
}
