
#define Screen_h

#include "Image.h"
#include <iostream>
#include "SDL.h"
#include "SDL_image.h"
#include "Songfile.h"

using namespace std;

class Screen : public Image{
	
	public :
		Screen(){
			mTexture = loadImage("./Song/screen_image.png");
			//cout<<"rendering"<<endl;
			buttoms = new Image [3] ;
			for(int i = 0 ; i < 3; i++){
				buttoms[i].pass_file_location("./Song/test1.png");
			} 
		}
		~Screen(){
			delete [] buttoms;
		}
		void lecting();
		void projecting(int nows, int difficulty, Songfile* s,bool SelectDiff); 
		//void SongSelecting(int , Songfile*);
		
	private : 
		int index ;
		Image* buttoms;
};
