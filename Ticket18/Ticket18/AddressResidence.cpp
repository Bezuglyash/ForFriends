#include "AddressResidence.h"

AddressResidence::AddressResidence()
{
	Country = "����������";
	City = "����������";
	Street = "����������";
	NumberOfHouse = 0;
}

void AddressResidence::SetCountry()
{
	cin >> Country;
}

void AddressResidence::SetCity()
{
	cin >> City;
}

void AddressResidence::SetStreet()
{
	cin >> Street;
}

void AddressResidence::SetNumberOfHouse()
{
	cin >> NumberOfHouse;
}

string AddressResidence::GetCountry()
{
	return Country;
}

string AddressResidence::GetCity()
{
	return City;
}

string AddressResidence::GetStreet()
{
	return Street;
}

int AddressResidence::GetNumberOfHouse()
{
	return NumberOfHouse;
}

void AddressResidence::toString()
{
	Address::toString();
	cout << "������: " << Country << " �����: " << City << " �����: " << Street << " ���: " << NumberOfHouse;
}