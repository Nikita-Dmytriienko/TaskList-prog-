#include <iostream>
#include "TaskList.h"
#include "Task.h"

TaskList::TaskList()
{ }

void TaskList::AddTask()                                                                                                                                            //AddTask
{
    Task newTask; // ������� ����� ������ ������

    // ��������� �������� ������
    std::cout << "Enter task name: ";
    std::cin >> newTask;

    std::cout << "Enter task description: ";
    std::cin.ignore(); // ���������� ���������� ������ ����� ������
    std::string description;
    std::getline(std::cin, description);
    newTask.Description(description);

    // �� ��������� ����� ������ ��������� �� ����������� � ��� ����� ����������
    newTask.SetStatus(false);
    newTask.SetDeadline(false);

    // ��������� ����� ������ � ������
    tasks.push_back(newTask);

    std::cout << "Task added successfully!" << std::endl;
}
void TaskList::ShowTasks()
{
    std::cout << "Your Tasks:" << std::endl;

    if (tasks.empty()) // ���������, ���� �� ������ � ������
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

    void TaskList::RemoveTask()                                                     //RemoveTask
    {
        std::cout << "RemoveTask()";
    }

    void TaskList::TaskStatusSorting()                                          // TaskStatusSorting
    {
        std::cout << "TaskStatusSorting()";
    }

    void TaskList::TaskDeadlineSorting()                                    //TaskDeadlineSorting
    {
        std::cout << "TaskDeadlineSorting()";
    }

    void TaskList::ShowMenu()                                                   //ShowMenu
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
