#pragma once
/*—оздайте класс TaskList, представл€ющий список задач.
¬ключите методы дл€ добавлени€, удалени€ и отображени€ задач в списке.
–еализуйте методы дл€ сортировки задач по различным критери€м (например, по статусу или сроку выполнени€).*/
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

