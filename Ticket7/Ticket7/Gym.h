#pragma once
#include "Visitor.h"
#include <vector>
class Gym
{
private:
	vector <Visitor> Visitors;
	int NumberVisitorsInDay;
	int YoungestAge;
	int OldestAge;
	double MeanAge;
public:
	Gym();
	int Work_gym_in_day(); // ������ ��������� �� ������������ ����, ���������� ���������� ����������� �� ���� ����
	int Get_age_youngest_visitor(); // ����� ������ �������� ���������� � ���� ����, ���������� ��� �������
	int Get_age_oldest_visitor(); // ����� ������ �������� ���������� � ���� ����, ���������� ��� �������
	double Calculate_mean_age_visitors(); // ������� �������� �������� ����������� �� ����, ���������� ������� �������
};