#pragma once
#include <string>
//����� ������ (Task):

//�������� ����� Task, �������������� ��������� ������.
//�������� �������� �������� : �������� ������, ��������, ������(��������� / �� ���������),
//���� ���������� � ������ ����������� ����.

class Task
{
private:
	std::string taskName;
	char description[255];
	bool status;
	bool inProcess;
	bool deadline;

public:

};

