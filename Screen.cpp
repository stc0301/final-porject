#include <iostream>
#include <cmath>
#include "Screen.h"


void Screen::projecting(int music, int difficulty, Songfile* s,bool SelectDiff){
	cout<<s[(music) % 3];
	if(SelectDiff){
		buttoms[difficulty].pass_file_location("./Song/test2.png");
		for(int i=0;i<3;i++){
			buttoms[i].render( 50+80*i, 300, 60, 60);
		}
	}
	//cout<<difficulty<<endl;
}

