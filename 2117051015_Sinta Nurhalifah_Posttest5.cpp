#include <iostream>
#include <conio.h>
#include <windows.h>
#include <ncurses/ncurses.h>
using namespace std;

int main(){
	initscr();
	int a,i;
	for(a=0;a<=100;a++){
		cout<<"Sedang Loading.."<<a<<"%"<<endl;
	
		system ("cls");
		cout<<"\t";
		
			for(i=1;i<=a;i++){
			if(i%2==0){
			printw("|");
			Sleep(10);
			refresh();
			}
		}	getch;
			endwin();
		
	}
}



