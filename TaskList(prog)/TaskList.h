#pragma once
/*�������� ����� TaskList, �������������� ������ �����.
�������� ������ ��� ����������, �������� � ����������� ����� � ������.
���������� ������ ��� ���������� ����� �� ��������� ��������� (��������, �� ������� ��� ����� ����������).*/
class TaskList
{
private:

public:
	void AddTask();
	void DeleteTask();
	void ShowTask() const;
	void TaskStatusSorting();
	void TaskDeadlineSorting();

};

