#include "Address.h"

void Address::SetName()
{
	cin >> Name;
}

void Address::SetSutname()
{
	cin >> Surname;
}

void Address::toString()
{
	cout << "���: " << Name << " �������: " << Surname;
}
