#include <ncurses/ncurses.h>

#include <windows.h>
#include <stdio.h>
using namespace std;


int main(){
initscr();

	
mvprintw(1,5,"Sedang Loading..\n");
printw("\n");

	
for(int a=1;a<30;a++){
				printw("|");
				refresh();
				Sleep(1000);
		}
	puts("Sinta Nurhalifah\n");//saya menggunakan puts karena jika menggunakan printw tidak keluar outputnya
	
	getch;
	endwin();
}
