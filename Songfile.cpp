//
//  Songfile.cpp
//  Project
//
//  Created by Richard on 2023/11/29.
//

#include <iostream>
#include <cmath>
#include "Songfile.h"

extern SDL_Renderer* gRenderer;
extern const char* ButtonAddr[];
//extern const char* SongfileAddr[];
extern const char* JudgelineAddr[];

extern const int SCREEN_WIDTH;
extern const int SCREEN_HEIGHT;

const int Num_Of_Songs = 3;
enum song{
	song1 = 0, song2
};
const char* picture_file_location[Num_Of_Songs] = {"./Song/songselection1.png", "./Song/songselection2.png", "./Song/songselection3.png"};
const char* songcover_location[Num_Of_Songs] = {"./Song/UmUsic.png", "./Song/test1.png", "./Song/UmUsic.png"};
//Image * image_array = new Image[3];

//Songfile* Song = new Songfile [3];


/*
void Initialize_Selection(){

}
*/

ostream& operator<<(ostream &output,Songfile &s){
	s.getInfo().render(350, 100, 150, 225);
	return output;
}

void SongSelecting(int nows, Songfile* s, bool SelectDiff){
	if(SelectDiff){
		for(int i = 2; i >= 0; i--)
		{		
			s[(nows + i) % 3].getTag().render(80 - 20 * i, 120 - 30 * i, 100.0 * pow(1.2, 2 - i), 150.0 * pow(1.2, 2 - i));
		}
	}
	else if(!SelectDiff){
		for(int i = 2; i >= 0; i--)
		{		
			s[(nows + i) % 3].getTag().render(120 - 20 * i, 160 - 30 * i, 100.0 * pow(1.2, 2 - i), 150.0 * pow(1.2, 2 - i));
		}
	}

}

	
	


                             
