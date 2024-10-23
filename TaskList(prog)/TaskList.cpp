#include <iostream>
#include "TaskList.h"
#include "Task.h"

task_list::task_list()
= default;

void task_list::add_task()                                                                                                                                            //AddTask
{
    Task new_task; // Создаем новый объект задачи

    // Заполняем атрибуты задачи
    std::cout << "Enter task name: ";
    std::cin >> new_task;

    std::cout << "Enter task description: ";
    std::cin.ignore(); // Игнорируем предыдущий символ новой строки
    std::string description;
    std::getline(std::cin, description);
    new_task.Description(description);

    // По умолчанию новая задача создается не выполненной и без срока выполнения
    new_task.SetStatus(false);
    new_task.SetDeadline(false);

    // Добавляем новую задачу в список
    tasks.push_back(new_task);

    std::cout << "Task added successfully!" << std::endl;
}
void task_list::show_tasks() const
{
    std::cout << "Your Tasks:" << std::endl;

    if (tasks.empty()) // Проверяем, есть ли задачи в списке
    {
        std::cout << "No tasks found." << std::endl;
    }
    else
    {
        for (const Task& task : tasks)
        {
            std::cout << "Task Name: " << task.TaskName() << std::endl;
            std::cout << "Description: " << task.Description() << std::endl;
            std::cout << "Status: " << (task.Status() ? "Completed" : "Not Completed") << std::endl;
            std::cout << "Deadline: " << (task.Deadline() ? "Set" : "Not Set") << std::endl;
            std::cout << "------------------------" << std::endl;
        }
    }
}

    void task_list::remove_task()                                                     //RemoveTask
    {
        std::cout << "RemoveTask()";
    }

    void task_list::task_status_sorting()                                          // TaskStatusSorting
    {
        std::cout << "TaskStatusSorting()";
    }

    void task_list::task_deadline_sorting()                                    //TaskDeadlineSorting
    {
        std::cout << "TaskDeadlineSorting()";
    }

    void task_list::show_menu()                                                   //ShowMenu
    {
        int choice;

        do
        {
            // Отображаем меню
            std::cout << "===== Task Manager Menu =====" << "\n";
            std::cout << "1. Add Task" << "\n";
            std::cout << "2. Delete Task" << "\n";
            std::cout << "3. Show Tasks" << "\n";
            std::cout << "4. Task Status Sorting" << "\n";
            std::cout << "5. Task Deadline Sorting" << "\n";
            std::cout << "0. Exit" << "\n";
            std::cout << "==============================" << "\n";
            std::cout << "Enter your choice: ";
            std::cin >> choice;

            // Обрабатываем выбор пользователя
            switch (choice)
            {
            case 1:
                std::cout << "AddTask()";
                break;
            case 2:
                std::cout << "RemoveTask()";
                break;
            case 3:
                std::cout << "ShowTasks()";
                break;
            case 4:
                std::cout << "TaskStatusSorting()";
                break;
            case 5:
                std::cout << "TaskDeadlineSorting()";
                break;
            case 0:
                std::cout << "Exiting Task Manager. Goodbye!" << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please enter a valid option." << std::endl;
            }

        } while (choice != 0);
    }
