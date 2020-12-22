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
		cout << "Бренд " << brand << endl;
		cout << "Модель " << model << endl;
		cout << "Год " << year << endl;
		cout << "Новый/старый " << State << endl;
	}

	Car()
	{
		this->brand = "Тойота";
		this->model = "Камри";
		this->year = 2000;
		this->State = old;
	};
};

int main() 
{
	setlocale(LC_ALL, "ru");

	Car car;
	Car car1("Опель", "Астра", 2018, CarState::old);
	Car car2("БМВ", "Х3", 2010, CarState::new_c);

	car1.Show();
	car2.Show();
	car.Show();

	return 0;
}