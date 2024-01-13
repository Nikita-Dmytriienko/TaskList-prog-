#pragma once
#include <vector>
#include "Task.h"
/*—оздайте класс TaskList, представл€ющий список задач.
¬ключите методы дл€ добавлени€, удалени€ и отображени€ задач в списке.
–еализуйте методы дл€ сортировки задач по различным критери€м (например, по статусу или сроку выполнени€).*/
class TaskList
{
private:
public:
	std::vector<Task> tasks;
	TaskList();
	void AddTask();
	void RemoveTask();
	void TaskStatusSorting();
	void TaskDeadlineSorting();
	void ShowTasks() const;
	void ShowMenu();
};

