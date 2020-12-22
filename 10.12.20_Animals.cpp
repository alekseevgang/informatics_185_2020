#include <iostream>
#include <string>

using namespace std;

class Animal
{
protected:
	string name;
	int age;
	string color;

public:
	Animal()
	{

	}

	Animal(string name, string color, int age)
	{
		this->name = name;
		this->color = color;
		this->age = age;
	}

	virtual void Show() = 0;
	virtual void Speak() = 0;

	string GetName()
	{
		return name;
	}
};

class Cat : public Animal
{
protected:
	string eyes;

public:
	Cat(string name, string color, int age, string eyes): Animal(name, color, age)
	{
		this->eyes = eyes;
	}

	void Speak() override
	{
		cout << "говорит мяу" << endl;
	}

	void Show() override
	{
		cout << "Кличка кота: " << name << endl;
		cout << "Цвет кота: " << color << endl;
		cout << "Возраст кота: " << age << endl;
		cout << "Цвет глаз: " << eyes << endl;
	}
};

class Dog : public Animal
{
protected:
	string sort;

public:
	Dog(string name, string color, int age, string sort) : Animal(name, color, age)
	{
		this->sort = sort;
	}

	void Speak() override
	{
		cout << "говорит гав-гав" << endl;
	}

	void Show() override
	{
		cout << "\nКличка собаки: " << name << endl;
		cout << "Цвет собаки: " << color << endl;
		cout << "Возраст собаки: " << age << endl;
		cout << "Вид собаки (охотничья/домашняя/выставочная): " << sort << endl;
	}
};

class Raccoon : public Animal
{
protected:
	string tail;

public:
	Raccoon(string name, string color, int age, string tail) : Animal(name, color, age)
	{
		this->tail = tail;
	}

	void Speak() override
	{
		cout << "говорит фр-фр" << endl;
	}

	void Show() override
	{
		cout << "\nИмя енота: " << name << endl;
		cout << "Цвет енота: " << color << endl;
		cout << "Возраст енота: " << age << endl;
		cout << "Цвет хвоста (серый в чёрную полоску или чёрный в серую полоску): " << tail << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "ru");

	Cat barsik("Барсик", "белый", 3, "голубые");
	barsik.Show();
	cout << "Барсик "; barsik.Speak();

	Dog sharik("Шарик", "коричневый", 2, "домашний");
	sharik.Show();
	cout << "Шарик "; sharik.Speak();

	Raccoon vova("Роберт", "серый", 4, "серый в чёрную");
	vova.Show();
	cout << "Роберт "; vova.Speak();

	return 0;
}