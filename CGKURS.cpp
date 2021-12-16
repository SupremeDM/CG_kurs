// CGKURS.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <conio.h>
#include <Windows.h>

#include "cube.h"

#include "pyramid.h"

void cur();

int main() {

	SetConsoleDisplayMode(GetStdHandle(STD_OUTPUT_HANDLE), CONSOLE_FULLSCREEN_MODE, nullptr);

	cur();

	return 0;

}

void cur() {

	int c;

	char flag = '+';

	BitMap bmp1(

		(int)DIM_BMP_ONE::width,

		(int)DIM_BMP_ONE::height,

		(int)DIM_BMP_ONE::left_margin,

		(int)DIM_BMP_ONE::top_margin,

		(COLORREF)COL_BMP::clear

	);

	BitMap bmp2(

		(int)DIM_BMP_TWO::width,

		(int)DIM_BMP_TWO::height,

		(int)DIM_BMP_TWO::left_margin,

		(int)DIM_BMP_TWO::top_margin,

		(COLORREF)COL_BMP::clear

	);

	cube b1(

		&bmp1,

		(size_t)NUM_VER::cube,

		(size_t)NUM_FACE::cube

	);

	pyramid b2(

		&bmp2,

		(size_t)NUM_VER::pyr,

		(size_t)NUM_FACE::pyr

	);

	figure* ptr = &b1;

	bmp1.DrawBitmap();

	bmp2.DrawBitmap();

	while (1) {

		c = _getch();

		switch (c) {

		case 43:

			ptr->move('z', '+');

			b1.SetBitMap();

			b2.SetBitMap();

			bmp1.DrawBitmap();

			bmp2.DrawBitmap();

			break;

		case 45:

			ptr->move('z', '-');

			b1.SetBitMap();

			b2.SetBitMap();

			bmp1.DrawBitmap();

			bmp2.DrawBitmap();

			break;

		case 72:

			ptr->move('y', '-');

			b1.SetBitMap();

			b2.SetBitMap();

			bmp1.DrawBitmap();

			bmp2.DrawBitmap();

			break;

		case 77:

			ptr->move('x', '+');

			b1.SetBitMap();

			b2.SetBitMap();

			bmp1.DrawBitmap();

			bmp2.DrawBitmap();

			break;

		case 80:

			ptr->move('y', '+');

			b1.SetBitMap();

			b2.SetBitMap();

			bmp1.DrawBitmap();

			bmp2.DrawBitmap();

			break;

		case 75:

			ptr->move('x', '-');

			b1.SetBitMap();

			b2.SetBitMap();

			bmp1.DrawBitmap();

			bmp2.DrawBitmap();

			break;

		case 49:

			ptr = &b1;

			break;

		case 50:

			ptr = &b2;

			break;

		case 32:

			(flag == '+') ? flag = '-' : flag = '+';

			break;

		case 120:

			ptr->rotate('x', flag);

			b1.SetBitMap();

			b2.SetBitMap();

			bmp1.DrawBitmap();

			bmp2.DrawBitmap();

			break;

		case 121:

			ptr->rotate('y', flag);

			b1.SetBitMap();

			b2.SetBitMap();

			bmp1.DrawBitmap();

			bmp2.DrawBitmap();

			break;

		case 122:

			ptr->rotate('z', flag);

			b1.SetBitMap();

			b2.SetBitMap();

			bmp1.DrawBitmap();

			bmp2.DrawBitmap();

			break;

		case 115:

			ptr->zoom('-');

			b1.SetBitMap();

			b2.SetBitMap();

			bmp1.DrawBitmap();

			bmp2.DrawBitmap();

			break;

		case 116:

			ptr->zoom('+');

			b1.SetBitMap();

			b2.SetBitMap();

			bmp1.DrawBitmap();

			bmp2.DrawBitmap();

			break;

		}

	}

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
