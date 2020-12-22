#include <iostream>

using namespace std;

enum CarState
{
	old,
	new_c
};

class Car
{
	string brand;
	string model;
	int year;
	CarState State;
	static int k;

public:
	Car (string brand, string model, int year, CarState)
	{
		this-> brand = brand;
		this-> model = model;
		this-> SetYear(year);
		this-> State=CarState::new_c;
	}

	void GetState(int year)
	{
		if (year > 2005)
		{
			State = CarState::new_c;
		}
		else
		{
			State = CarState::old;
		}
	}

	int SetState(CarState)
	{
		return State;
	}

	int GetYear()
	{
		return year;
	}

	void SetYear(int year)
	{
		if (year > 1890 && year < 2021)
		this-> year = year;
	}

	void Show()
	{
		cout << "����� " << brand << endl;
		cout << "������ " << model << endl;
		cout << "��� " << year << endl;
		cout << "�����/������ " << State << endl;
	}

	Car()
	{
		this->brand = "������";
		this->model = "�����";
		this->year = 2000;
		this->State = old;
	};
};

int main() 
{
	setlocale(LC_ALL, "ru");

	Car car;
	Car car1("�����", "�����", 2018, CarState::old);
	Car car2("���", "�3", 2010, CarState::new_c);

	car1.Show();
	car2.Show();
	car.Show();

	return 0;
}