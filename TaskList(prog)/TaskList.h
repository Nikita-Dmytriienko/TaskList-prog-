#pragma once
#include <vector>
#include "Task.h"
/*�������� ����� TaskList, �������������� ������ �����.
�������� ������ ��� ����������, �������� � ����������� ����� � ������.
���������� ������ ��� ���������� ����� �� ��������� ��������� (��������, �� ������� ��� ����� ����������).*/
class task_list
{
private:
public:
	std::vector<Task> tasks;
	task_list();
	void add_task();
	static void remove_task();
	static void task_status_sorting();
	static void task_deadline_sorting();
	void show_tasks() const;
	static void show_menu();
};

