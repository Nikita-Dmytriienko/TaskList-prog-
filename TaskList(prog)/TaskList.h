#pragma once
#include <vector>
#include "Task.h"
/*�������� ����� TaskList, �������������� ������ �����.
�������� ������ ��� ����������, �������� � ����������� ����� � ������.
���������� ������ ��� ���������� ����� �� ��������� ��������� (��������, �� ������� ��� ����� ����������).*/
class TaskList
{
private:

public:
	TaskList();
	void AddTask();
	void RemoveTask();
	void TaskStatusSorting();
	void TaskDeadlineSorting();
	void ShowTasks() const;
	void ShowMenu() const;
};

