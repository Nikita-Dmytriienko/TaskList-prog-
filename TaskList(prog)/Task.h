#pragma once
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
	char description[255];
	bool status;
	bool deadline;


    std::string TaskName() const { return taskName; }
    void TaskName(const std::string& name) { taskName = name; }

    const char* Description() const { return description; }
    void Description(const char* desc) { strncpy(description, desc, sizeof(description)); description[sizeof(description) - 1] = '\0'; }

    bool Status() const { return status; }
    void SetStatus(bool newStatus) { status = newStatus; }

    bool Deadline() const { return deadline; }
    void SetDeadline(bool newDeadline) { deadline = newDeadline; }
};

