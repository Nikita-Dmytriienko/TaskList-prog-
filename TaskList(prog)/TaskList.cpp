#include <iostream>
#include "TaskList.h"
#include "Task.h"

TaskList::TaskList()
{ }

void TaskList::AddTask()
{
    Task newTask; // ������� ����� ������ ������

    // ��������� �������� ������. ��� �������, �����������, ��� �� ��������� �� � ����������.
    std::cout << "Enter task name: ";
    std::cin >> newTask.taskName;

    std::cout << "Enter task description: ";
    std::cin.ignore(); // ���������� ���������� ������ ����� ������
    std::cin.getline(newTask.description, 255);

    // �� ��������� ����� ������ ��������� �� ����������� � ��� ����� ����������
    newTask.status = false;
    newTask.deadline = false;

    // ��������� ����� ������ � ������
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
        // ���������� ����
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

        // ������������ ����� ������������
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
