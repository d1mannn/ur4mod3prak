// ���� 4. ������ 3. ������������ ������.
// ���������� �.�.


#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <math.h>
#include <time.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");


	cout << "������� ����� ������� \n";
	int task = 0;
	char yn = 0;
	cin >> task;
	switch (task)
	{
#pragma region TASK1
	case 1:
	{
	task1:
		cout << "���� ����������� �����.����������:\n";
		cout << "a.�������� �� ������������ ��� ���� ������ ����� b;\n";
		cout << "b.������ �� ����� ��� ���� ����\n";
		int a, b;
		cout << "������� ����������� ����� - ";
		cin >> a;
		cout << "\n������� ����� ����� - ";
		cin >> b;
		if (a < 100 && a > 999)
		{
			cout << "��������� ����� �� ������������� ������� ������\n";
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
				cout << "������������ ����� " << a << " ������ ����� " << b << "\n";
			}
			else if ((c * d * e) < b)
			{
				cout << "������������ ����� " << a << " ������ ����� " << b << "\n";
			}
			else
			{
				cout << "������������ ����� " << a << " ����� ����� " << b << "\n";
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

		cout << "�������� ��������� , ������� �� ���� �������� (���� d ����� n) \n";
		cout << "���������� ���� �������: � 22 ����� �� 21 ������ - ���� (4); \n";
		cout << "� 22 ������ �� 21 ��� - ����� (5); � 22 ��� �� 21 ���� - �������� (6); \n";
		cout << "� 22 ���� �� 21 ���� - ��� (7); � 22 ���� �� 21 ������� - ��� (8); \n";
		cout << "� 22 ������� �� 21 �������� - ���� (9); 22 �������� �� 21 ������� - ���� (10); \n";
		cout << "� 22 ������� �� 21 ������ - �������� (11); � 22 ������ �� 21 ������� - ������� (12); \n";
		cout << "� 22 ������� �� 21 ������ - ������� (1); 22 ������ �� 21 ������� - ������� (2); \n";
		cout << "� 22 ������� �� 21 ����� - ���� (3).\n";

		int dd, mm, yy;
		cout << "������� ����, �����, � ��� ������ �������� � ������� 12.12.2012\n";
		cout << "\n������� ���� - ";
		cin >> dd;
		cout << "\n������� ����� - ";
		cin >> mm;
		cout << "\n������� ��� - ";
		cin >> yy;

		zod zn;

		if (dd < 01 || dd > 31 || mm < 01 || mm > 12 || yy < 1900 || yy > 2017)
		{
			cout << "������� �������� ������, ���������� ��� ���\n";
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

		cout << "��������� ���� ��������� ������� ���� \n";
		cout << "1)�6�, �7�, �8� 2)�7�, �8�, �9� 3) �6�, �9�, �10� 4)�6�, �9�, �8� 5)�7�, �6�, �10� \n;";
		cout << "���� ����� ���� ������ �������� ������ ����� ���� ����������, �� ��������\n";
		int a, b, c;
		cout << "������� ������ ����� - ";
		cin >> a;
		cout << "\n������� ������ ����� - ";
		cin >> b;
		cout << "\n������� ������ ����� - ";
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
			cout << "������� �������� ������. ���������� ��� ���\n";
			goto task5;

		}
		else
		{
			if (a + b + c > x + y + z)
			{
				cout << "�� ��������\n";
				cout << "���� ����� - " << a << b << c;
				cout << "\n����� ���������� - " << x << y << z;
			}
			else if (a + b + c < x + y + z)
			{
				cout << "�� ���������\n";
				cout << "���� ����� - " << a << b << c;
				cout << "\n����� ���������� - " << x << y << z;
			}
			else
			{
				cout << "�����\n";
				cout << "���� ����� - " << a << b << c;
				cout << "\n����� ���������� - " << x << y << z;
			}
		}


	}
#pragma endregion

#pragma region TASK6
	case 6:
	{

	task6:
		int total = 0;

		cout << "�������� ������� ��������������� ������� �� �����, ������ ����� ����������� ������ � �������� ������. �������� �������:\n";

		cout << "�������� ����� �����������, �� ��� ������, ������:\n";
		cout << "a.������� ������������ �����������, ��� ��������� ������� ���� ����������� ����� ����������, ����������:\n";
		int a = 0;

		cout << "1 ������������������, \n";
		cout << "2 ������������,  2����\n";
		cout << "3 ����������������, \n";
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
			cout << "������� ������������ �����\n ������� ��� ���\n";
			goto task6;
			break;
		}

		system("cls");

		cout << "b.c����������� ������, ��� ��������� �� ����� � ����� ����� ��� � ���������� � ��� :\n";
		cout << "1 ����, ���� = 2; 2 ���������, ���� = 0; 3 ������, ���� = 0\n";
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
			cout << "������� ������������ �����\n ������� ��� ���\n";
			goto task6;
			break;
		}

		system("cls");

		cout << "c.	��� ����������� � ����-����� ��������� ������� ������������ ������������ ����������� ��������:  \n";
		cout << "1 �������, ����=0; 2 ����, ����=0; 3 ����, ����=1.\n";
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
			cout << "������� ������������ �����\n ������� ��� ���\n";
			goto task6;
			break;
		}

		cout << "Total " << total << endl;
			
	}




#pragma endregion

#pragma region TASK7
	case 7:
	{
		cout << "�������� ������ �� �����, ������ ��� � �����.\n";
		cout << "������ ���������� ������� � ���������� �� ��������� � ������, \n";
		cout << "���� ������������ ����� ���� ������� � ������ 5 % , \n";
		cout << "����� 10 ������� � 10 % .\n";
		cout << "������� ��� � �������� ������, ������ 12 ����� � 25��, 16 � 35��, 20 � 45��.\n";
		cout << "����� ��� � ������, ������ 10 ����� � 25��, 13 � 35��, 16 � 35��.\n";
		cout << "������� ��� � �������, ������ 10 ����� � 35��, 14 � 45��, 18 � 45��.\n";
		cout << "������������� ��������� ������ �����.\n";

		int ticket = 0;
		int movie = 0;
		cout << "�������� �����!\n ������� ������ - 1\n����� - 2\n ������ - 3\n";
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