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
	std::vector<Task> tasks;
	TaskList();
	void add_task();
	static void remove_task();
	static void task_status_sorting();
	static void task_deadline_sorting();
	void show_tasks() const;
	static void show_menu();
};

