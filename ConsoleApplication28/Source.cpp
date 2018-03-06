#include <stdio.h>
#include<locale.h>
#include<iostream>
#include<time.h>
using namespace std;
int G;
void main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	do
	{
		cout << "Введите номер задания:" << endl;
		cin >> G;
		switch (G)
		{
		case 1:
		{
			int a[6][6], sum = 0;
			for (int i = 0; i < 6; i++)
			{
				for (int j = 0; j < 6; j++)
				{
					a[i][j] = 1000 + rand() % 2000;
					cout << a[i][j] << "\t";
				}
				cout << endl;
			}
			for (int i = 0; i < 6; i++)
			{
				for (int j = 0; j < 6; j++)
				{
					sum += a[i][j];
				}
				
			}
			cout << "Прибыль за 6 месяцев: " << sum << endl;
		}
		break;
		case 2:
		{
			int a[10];
			for (int i = 0; i < 10; i++)
			{
				a[i] = 1 + rand() % 90;
				cout << a[i] << "\t";
			}
			cout << endl;
			cout << "Одномерный массив в обратном порядке:" << endl;
			for (int i = 9; i >=0; i--)
			{
				cout << a[i] << "\t";
			}
			cout << endl;
		}
		break;
		case 3:
		{
			int a[5],P=0;
			for (int i = 0; i < 5; i++)
			{
				a[i] = 5 + rand() % 20;
				cout << a[i] << "\t";
			}
			cout << endl;
			for (int i = 0; i < 5; i++)
			{
				P += a[i];
			}
			cout << "Периметр пятиуголнька: "<<P << endl;
		}
		break;
		case 4:
		{
			int a[12][12] = { { 0 },{ 0 } },  min = 0, max = 0;
			for (int i = 0; i < 12; i++)
			{
				for (int j = 0; j < 12; j++)
				{
					a[i][j] = 1000 + rand() % 2000;
					cout << a[i][j] << "\t";
				}
				cout << endl;
			}

			max = a[0][0];
			for (int i = 0; i < 12; i++)
			{
				for (int j = 0; j < 12; j++)
				{
					if (a[i][j] > max)
					{
						max = a[i][j];
					}
				}
			}
			cout << "Максимальный прибыль: " << max << endl;
			min = a[0][0];
			for (int i = 0; i < 12; i++)
			{
				for (int j = 0; j <12; j++)
				{
					if (a[i][j] < min)
					{
						min = a[i][j];
					}
				}

			}
			cout << "Минимальный прибыль: " << min << endl;
		}
		break;
		case 5:
		{
			int a[5][10], sum = 0;
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 10; j++)
				{
					a[i][j] = -5 + rand() % 50;
					cout << a[i][j] << "\t";
				}
				cout << endl;
			}
			cout << "Удалить 0, заменить на -1: " << endl;
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 10; j++)
				{
					if (a[i][j] == 0)
					{
						a[i][j] = -1;
					}
				}				
			}
			cout << endl;
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 10; j++)
				{
					cout << a[i][j] << "\t";
				}
				cout << endl;
			}
		}
		break;
		case 6:
		{
			int a[10], temp = 0;
			for (int i = 0; i < 10; i++)
			{
				a[i] = 1 + rand() % 100;
				cout << a[i] << "\t";
			}
			cout << endl;
			cout << "Сортировка пузырьковый" << endl;
			for (int i = 0; i < 10; i++)
			{
				for (int j =9; j >=0; j--)
				{
					if (a[j - 1] > a[j])
					{
						temp = a[j - 1];
						a[j - 1] = a[j];
						a[j] = temp;
					}
				}
			}
			for (int i = 0; i < 10; i++)
			{
				cout << a[i] << "\t";
			}
			cout << endl;
		}
		break;
		case 7:
		{
			int a[10], min = 0,temp=0;
			for (int i = 0; i < 10; i++)
			{
				a[i] = 1 + rand() % 100;
				cout << a[i] << "\t";
			}
			cout << endl;
			cout << "Сортировка выбором" << endl;
			for (int i = 0; i < 9; i++)
			{
				min = i;
				for (int j = i+1; j <10; j++)
				{
					if (a[j] < a[min])
						min = j;
				}
				temp = a[i];
				a[i] = a[min];
				a[min] = temp;
			}
			for (int i = 0; i < 10; i++)
			{
				cout << a[i] << "\t";
			}
			cout << endl;
		}
		break;
		case 8:
		{
			int a[10];
			for (int i = 0; i < 10; i++)
			{
				a[i] = 1 + rand() % 100;
				cout << a[i] << "\t";
			}
			cout << endl;
			cout << "Сортировка вставками" << endl;
			for (int i = 1; i < 10; i++)
			{
				int value = a[i];
				int index = i;
				while ((index > 0) && (a[index - 1] > value))
				{
					a[index] = a[index - 1];
					index--;
				}
				a[index] = value;
			}
			for (int i = 0; i < 10; i++)
			{
				cout << a[i] << "\t";
			}
			cout << endl;
		}

		break;
		default:
			break;
		}
	} while (G>0);
}