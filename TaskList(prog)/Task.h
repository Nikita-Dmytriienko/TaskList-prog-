#pragma once
#include <iostream>
#include <string>
//����� ������ (Task):

//�������� ����� Task, �������������� ��������� ������.
//�������� �������� �������� : �������� ������, ��������, ������(��������� / �� ���������),
//���� ���������� � ������ ����������� ����.

class Task
{
private:
	
public:
	std::string taskName;
    std::string description;
	bool status;
	bool deadline;


    std::string TaskName() const 
    { return taskName; }
    void TaskName(const std::string& name) 
    { taskName = name; }

    std::string Description()  const 
    { return description; }
    void Description(const std::string& desc) 
    { description = desc; }

    bool Status() const 
    { return status; }
    void SetStatus(bool newStatus)
    { status = newStatus; }

    bool Deadline() const 
    { return deadline; }
    void SetDeadline(bool newDeadline) 
    { deadline = newDeadline; }

    friend std::istream& operator>>(std::istream& is, Task& task)
    {
        std::cout << "Enter task name: ";
        is >> task.taskName;

        std::cout << "Enter task description: ";
        is.ignore(); // ���������� ���������� ������ ����� ������
        std::getline(is, task.description);

        return is;
    }
};

