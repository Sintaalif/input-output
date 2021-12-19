#include <ncurses\ncurses.h>

using namespace std;
int main(){
	initscr();
    
    //inisialisasi variabel
    char nama[25];
	char alamat[25];
	char hobi[20];
 
    //Input
    getstr(nama);
    getstr(alamat);
    getstr(hobi);
    
    //Output
    printw("\n");
	mvprintw(5,5, "Nama   : %s \n", nama);
	mvprintw(6,5, "Alamat : %s \n", alamat);
	mvprintw(7,5, "Hobi   : %s \n", hobi);
    
	refresh();
	getch();
	endwin();

}
