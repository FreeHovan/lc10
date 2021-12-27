#include "Header.h"
#include <conio.h>
#include<iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "RUS");
	Queue a;
	int b;
	bool flag = true;
	while (flag)
	{
		cout << "1. Добавить элемент в очередь\n";
		cout << "2. Получить элемент из очереди\n";
		cout << "3. Посмотреть элемент из очереди\n";
		cout << "4. Длина очереди\n";
		cout << "5. Выход\n";
		switch (_getch())
		{
		case '1':
			cout << "Добавить элемент: ";
			cin >> b;
			a.Push(b);
			break;
		case '2':
			try
			{
				a.Pop(b);
				cout << "Полученный элемент " << b << endl;
			}
			catch (NoElementsException ex)
			{
				cout << "Очередь пуста\n";
			}
			break;
		case '3':
			try
			{
				a.Peek(b);
				cout << "Последний элемент " << b << endl;
			}
			catch (NoElementsException ex)
			{
				cout << "Очередь пуста\n";
			}
			break;
		case '4':
			b = a.GetSize();
			cout << "Длина очереди: " << b << endl;
			break;
		case '5':
			flag = false;
			break;

		}
	}

}