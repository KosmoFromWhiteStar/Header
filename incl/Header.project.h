// Header.project.h : включаемый файл для стандартных системных включаемых файлов
// или включаемые файлы для конкретного проекта.
#pragma once
#define ENDL std::endl
#define POINT(x) x[0]  << '.' << x[1]
#include <iostream>

bool compare(std::string inP_word, std::string command)
{
	for (int i = 0; i < inP_word.length() && i < command.length(); i++)
	{
		if (inP_word[i] != command[i])
		{
			return false;
		}
	}
	return true;
}

int coordinate()
{
	int x;
	std::cout << "Input coordinate: " << std::endl;
	std::cin >> x;
	return x;
}

void scalpel(int x[2], int y[2])
{
	std::cout << "Cut from " << POINT(x) << " to " << POINT(y) << ENDL;
}

void hemostat(int pos[2])
{
	std::cout << "Clamped " << POINT(pos) << ENDL;
}

void tweezers(int pos[2])
{
	std::cout << "Tweezers: " << POINT(pos) << ENDL;
}

void suture(int x[2], int y[2])
{
	std::cout << "Sew from " << POINT(x) << " to " << POINT(y) << ENDL;
}

// TODO: установите здесь ссылки на дополнительные заголовки, требующиеся для программы.