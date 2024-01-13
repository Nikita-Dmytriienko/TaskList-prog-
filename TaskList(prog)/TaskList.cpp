#include <iostream>
#include "TaskList.h"

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
    newTask.inProcess = false;
    newTask.deadline = false;

    // ��������� ����� ������ � ������
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
