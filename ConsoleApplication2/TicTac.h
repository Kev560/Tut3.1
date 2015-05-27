#ifndef TICTAC_H
#define TICTAC_H

class TicTac
{
	int x;
	int o;
	int c;
	char area[2][2];

public:
	TicTac();
	TicTac(int, int);
	//~TicTac();

	void insert();
	void display();
	bool checkfull();



};
#endif