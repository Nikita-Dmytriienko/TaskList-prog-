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
	void add_task();
	static void remove_task();
	static void task_status_sorting();
	static void task_deadline_sorting();
	void show_tasks() const;
	static void show_menu();
};

