#include <iostream>
#include "TicTac.h"

using namespace std;

TicTac::TicTac()
{
	x = 0;
	o = 0;
	c = 0;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{

			area[i][j] = 1;
		}
	}

}

TicTac::TicTac(int xpos, int opos)
{
	x = xpos;
	o = opos;
}

void TicTac::insert()
{
switch (x)
{
case 1: area[0][0] = 'X';
break;
case 2: area[0][1] = 'X';
break;
case 3: area[0][2] = 'X';
break;
case 4: area[1][0] = 'X';
break;
case 5: area[1][1] = 'X';
break;
case 6: area[1][2] = 'X';
break;
case 7: area[2][0] = 'X';
break;
case 8: area[1][1] = 'X';
break;
case 9: area[2][2] = 'X';
break;
default: cout << "Invalid!" << endl;

}

switch (o)
{
case 1: area[0][0] = 'O';
break;
case 2: area[0][1] = 'O';
break;
case 3: area[0][2] = 'O';
break;
case 4: area[1][0] = 'O';
break;
case 5: area[1][1] = 'O';
break;
case 6: area[1][2] = 'O';
break;
case 7: area[2][0] = 'O';
break;
case 8: area[2][1] = 'O';
break;
case 9: area[2][2] = 'O';
break;
default: cout << "Invalid!" << endl;

}

}

void TicTac::display()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << area[i][j] << "    ";
		}
		cout << endl;
	}

}

bool TicTac::checkfull()
{
int flag = 0;
for (int i = 0; i < 3; i++)
{
for (int j = 0; j < 3; j++)
{
if (area[i][j] == 'X' || area[i][j] == 'O')
{
flag = flag + 1;
}
}
}

if (flag == 9)
{
return true;
cout << "Matrix is full" << endl;
}
else
{
return false;
insert();
}
}