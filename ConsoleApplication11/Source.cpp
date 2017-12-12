// Урок 4. Модуль 3. Практическая работа.
// Главатских Д.Н.


#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <math.h>
#include <time.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");


	cout << "Введите номер задания \n";
	int task = 0;
	char yn = 0;
	cin >> task;
	switch (task)
	{
#pragma region TASK1
	case 1:
	{
	task1:
		cout << "Дано трехзначное число.Определить:\n";
		cout << "a.является ли произведение его цифр больше числа b;\n";
		cout << "b.кратна ли сумма его цифр трем\n";
		int a, b;
		cout << "Введите трехзначное число - ";
		cin >> a;
		cout << "\nВведите любое число - ";
		cin >> b;
		if (a < 100 && a > 999)
		{
			cout << "Введенные цифры не удовлетворяют условию задачи\n";
			goto task1;
		}
		else
		{
			int c, d, e;
			c = a % 10;
			d = (a % 100) / 10;
			e = a / 100;
			if ((c * d * e) > b)
			{
				cout << "Произведение чисел " << a << " больше числа " << b << "\n";
			}
			else if ((c * d * e) < b)
			{
				cout << "Произведение чисел " << a << " меньше числа " << b << "\n";
			}
			else
			{
				cout << "Произведение чисел " << a << " равно числу " << b << "\n";
			}
		}
	}
	break;
#pragma endregion

#pragma region TASK4
	case 4:
	{
		enum zod
		{
			Oven = 1, Telez, Bliznecy, Rak, Lev, Deva, Vesy, Skorpion, Strelec, Kozerog, Vodoley, Riby

		};

	task2:

		cout << "Написать программу , которая по дате рождения (день d месяц n) \n";
		cout << "определяет знак Зодиака: с 22 марта по 21 апреля - Овен (4); \n";
		cout << "с 22 апреля по 21 мая - Телец (5); с 22 мая по 21 июня - Близнецы (6); \n";
		cout << "с 22 июня по 21 июля - Рак (7); с 22 июля по 21 августа - Лев (8); \n";
		cout << "с 22 августа по 21 сентября - Дева (9); 22 сентября по 21 октября - Весы (10); \n";
		cout << "с 22 октября по 21 ноября - Скорпион (11); с 22 ноября по 21 декабря - Стрелец (12); \n";
		cout << "с 22 декабря по 21 января - Козерог (1); 22 января по 21 февраля - Водолей (2); \n";
		cout << "с 22 февраля по 21 марта - Рыбы (3).\n";

		int dd, mm, yy;
		cout << "Введите день, месяц, и год своего рождения в формате 12.12.2012\n";
		cout << "\nВведите день - ";
		cin >> dd;
		cout << "\nВведите месяц - ";
		cin >> mm;
		cout << "\nВведите год - ";
		cin >> yy;

		zod zn;

		if (dd < 01 || dd > 31 || mm < 01 || mm > 12 || yy < 1900 || yy > 2017)
		{
			cout << "Введены неверные данные, попробуйте ещё раз\n";
			goto task2;
		}
		else if ((dd >= 22 && mm == 3) || ((dd <= 21) && (mm = 4)))
		{
			zn = Oven;
		}
		else if ((dd >= 22 && mm == 4) || ((dd <= 21) && (mm = 5)))
		{
			zn = Telez;
		}
		else if ((dd >= 22 && mm == 5) || ((dd <= 21) && (mm = 6)))
		{
			zn = Bliznecy;
		}
		else if ((dd >= 22 && mm == 6) || ((dd <= 21) && (mm = 7)))
		{
			zn = Rak;
		}
		else if ((dd >= 22 && mm == 7) || ((dd <= 21) && (mm = 8)))
		{
			zn = Lev;
		}
		else if ((dd >= 22 && mm == 8) || ((dd <= 21) && (mm = 9)))
		{
			zn = Deva;
		}
		else if ((dd >= 22 && mm == 9) || ((dd <= 21) && (mm = 10)))
		{
			zn = Vesy;
		}
		else if ((dd >= 22 && mm == 10) || ((dd <= 21) && (mm = 11)))
		{
			zn = Skorpion;
		}
		else if ((dd >= 22 && mm == 11) || ((dd <= 21) && (mm = 12)))
		{
			zn = Strelec;
		}
		else if ((dd >= 22 && mm == 12) || ((dd <= 21) && (mm = 1)))
		{
			zn = Kozerog;
		}
		else if ((dd >= 22 && mm == 1) || ((dd <= 21) && (mm = 2)))
		{
			zn = Vodoley;
		}
		else if ((dd >= 22 && mm == 2) || ((dd <= 21) && (mm = 3)))
		{
			zn = Riby;
		}

		switch (zn)
		{
		case Oven:
			cout << "Oven";
			break;
		case Telez:
			cout << "Telec";
			break;
		case Bliznecy:
			cout << "Bliznecy";
			break;
		case Rak:
			cout << "Rak";
			break;
		case Lev:
			cout << "Lev";
			break;
		case Deva:
			cout << "Deva";
			break;
		case Vesy:
			cout << "Vesy";
			break;
		case Skorpion:
			cout << "Skorpion";
			break;
		case Strelec:
			cout << "Strelec";
			break;
		case Kozerog:
			cout << "Kozerog";
			break;
		case Vodoley:
			cout << "Vodoley";
			break;
		case Riby:
			cout << "Riby";
			break;
		}
	}
#pragma endregion

#pragma region TASK5
	case 5:
	{
	task5:

		cout << "Используя пять вариантов наборов карт \n";
		cout << "1)«6», «7», «8» 2)«7», «8», «9» 3) «6», «9», «10» 4)«6», «9», «8» 5)«7», «6», «10» \n;";
		cout << "Если сумма цифр вашего варианта больше суммы цифр компьютера, вы выиграли\n";
		int a, b, c;
		cout << "Введите первое число - ";
		cin >> a;
		cout << "\nВведите второе число - ";
		cin >> b;
		cout << "\nВведите третье число - ";
		cin >> c;
		srand(time(NULL));
		int x = 0, y = 0, z = 0;
		do
		{
			x = 6 + rand() % 4;
			y = 6 + rand() % 4;
			z = 6 + rand() % 4;
			cout << x << y << z << "~ " << endl;
		} while ((x == y) || (y == z) || (x == z));

		if ((a < 6 || a > 10) || (b < 6 || b > 10) || (c < 6 || c > 10))
		{
			cout << "Введены неверные данные. Попробуйте ещё раз\n";
			goto task5;

		}
		else
		{
			if (a + b + c > x + y + z)
			{
				cout << "Вы победили\n";
				cout << "Ваше число - " << a << b << c;
				cout << "\nЧисло компьютера - " << x << y << z;
			}
			else if (a + b + c < x + y + z)
			{
				cout << "Вы проиграли\n";
				cout << "Ваше число - " << a << b << c;
				cout << "\nЧисло компьютера - " << x << y << z;
			}
			else
			{
				cout << "Ничья\n";
				cout << "Ваше число - " << a << b << c;
				cout << "\nЧисло компьютера - " << x << y << z;
			}
		}


	}
#pragma endregion

#pragma region TASK6
	case 6:
	{

	task6:
		int total = 0;

		cout << "Тестовые задания последовательно вывести на экран, ввести номер правильного ответа и получить оценку. Тестовые задания:\n";

		cout << "Запишите номер правильного, на Ваш взгляд, ответа:\n";
		cout << "a.система программного обеспечения, что управляет работой всех структурных узлов компьютера, называется:\n";
		int a = 0;

		cout << "1 автоматизированная, \n";
		cout << "2 операционная,  2балл\n";
		cout << "3 интеллектуальная, \n";
		cin >> a;
		switch (a)
		{
		case 1:
			total += 0;
			break;
		case 2:
			total += 2;
			break;
		case 3:
			total += 0;
			break;
		default:
			cout << "Введены недопустимые цифры\n Введите ещё раз\n";
			goto task6;
			break;
		}

		system("cls");

		cout << "b.cовокупность данных, что размещены на диске и имеют общее имя и назначение – это :\n";
		cout << "1 файл, балл = 2; 2 процессор, балл = 0; 3 сектор, балл = 0\n";
		cin >> a;
		switch (a)
		{
		case 1:
			total += 2;
			break;
		case 2:
			total += 0;
			break;
		case 3:
			total += 0;
			break;
		default:
			cout << "Введены недопустимые цифры\n Введите ещё раз\n";
			goto task6;
			break;
		}

		system("cls");

		cout << "c.	для изображения в блок-схеме алгоритма условия разветвления используются графические элементы:  \n";
		cout << "1 квадрат, балл=0; 2 круг, балл=0; 3 ромб, балл=1.\n";
		cin >> a;
		switch (a)
		{
		case 1:
			total += 0;
			break;
		case 2:
			total += 0;
			break;
		case 3:
			total += 1;
			break;
		default:
			cout << "Введены недопустимые цифры\n Введите ещё раз\n";
			goto task6;
			break;
		}

		cout << "Total " << total << endl;
			
	}




#pragma endregion

#pragma region TASK7
	case 7:
	{
		cout << "Заказать билеты на фильм, выбрав зал и сеанс.\n";
		cout << "Ввести количество билетов и определить их стоимость с учетом, \n";
		cout << "если заказывается более пяти билетов – скидка 5 % , \n";
		cout << "более 10 билетов – 10 % .\n";
		cout << "Красный зал – «Хроники Нарнии», сеансы 12 часов – 25тн, 16 – 35тн, 20 – 45тн.\n";
		cout << "Синий зал – «Чужие», сеансы 10 часов – 25тн, 13 – 35тн, 16 – 35тн.\n";
		cout << "Голубой зал – «Аватар», сеансы 10 часов – 35тн, 14 – 45тн, 18 – 45тн.\n";
		cout << "Предусмотреть обработку ошибок ввода.\n";

		int ticket = 0;
		int movie = 0;
		cout << "Выберите фильм!\n Хроники Нарнии - 1\nЧужие - 2\n Аватар - 3\n";
		cin >> movie;
		switch (movie)
		{
		case 1:
		{

		}break;
		default:
			break;
		}

	}
#pragma endregion

	}
}