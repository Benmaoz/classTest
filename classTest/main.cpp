#include<iostream>
#include"clock.h"
#include"config.h"
#include"io_utils.h"

#define ESC 27

using namespace std;


int main(){
	system("cls");
	clock gameClock;

	gameClock.setClock();
	 while(!_kbhit() ||  _getch()!=ESC){
		 gameClock.printClock();

		 Sleep(5);
		 gameClock.addSecToClock();
		 gotoxy(0,0);
	 }
	return 0;	 
}