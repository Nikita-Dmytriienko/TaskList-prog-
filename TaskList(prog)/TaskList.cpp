#include <iostream>
#include "TaskList.h"
#include "Task.h"

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
    newTask.deadline = false;

    // Добавляем новую задачу в список
    tasks.push_back(newTask);

    std::cout << "Task added successfully!" << std::endl;
}

void TaskList::RemoveTask()
{
}

void TaskList::TaskStatusSorting()
{
}

void TaskList::TaskDeadlineSorting()
{
}

void TaskList::ShowMenu()
{
    int choice;

    do
    {
        // Отображаем меню
        std::cout << "===== Task Manager Menu =====" << std::endl;
        std::cout << "1. Add Task" << std::endl;
        std::cout << "2. Delete Task" << std::endl;
        std::cout << "3. Show Tasks" << std::endl;
        std::cout << "4. Task Status Sorting" << std::endl;
        std::cout << "5. Task Deadline Sorting" << std::endl;
        std::cout << "0. Exit" << std::endl;
        std::cout << "==============================" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        // Обрабатываем выбор пользователя
        switch (choice)
        {
        case 1:
            AddTask();
            break;
        case 2:
            DeleteTask();
            break;
        case 3:
            ShowTasks();
            break;
        case 4:
            TaskStatusSorting();
            break;
        case 5:
            TaskDeadlineSorting();
            break;
        case 0:
            std::cout << "Exiting Task Manager. Goodbye!" << std::endl;
            break;
        default:
            std::cout << "Invalid choice. Please enter a valid option." << std::endl;
        }

    } while (choice != 0);
}

void TaskList::ShowTasks() const
{
	std::cout << "Your Tasks:"<<std::endl;
}
