//
//  Note.h
//  Project
//
//  Created by Richard on 2023/11/21.
//

#ifndef Note_h
#define Note_h
#include "Image.h"
#include "GameInfo.h"
#include <iostream>
#include "SDL.h"
#include "SDL_image.h"
using namespace std;

//JudgelineInit[][2] = {{75, 360}, {205, 360}, {335, 360}, {465, 360}};

enum NoteName
{
    HIT,
    HOLD,
    NOTE_TOTAL
};

static int notecount = 0;

class Note : public Image
{
    friend class GameInfo;
	
	public:
        //Initializes variables
        Note(){}
        Note(int data[9])
        {
			result = -1;
			stime = data[0];
            dtime = data[1];
            type = data[2];
            goal = data[3];
            endx = data[4];
            endy = data[5];
            speed = data[6];
            sdegree = data[7] / 10.0;
            ddegree = data[8] / 10.0;
            
            //loadNote(NoteAddr[data[2]]);
            mTexture = loadNote("./Element/hit.png");
            SDL_SetTextureBlendMode(mTexture, SDL_BLENDMODE_BLEND);
            
            //printNoteInfo();
            //notecount++;
            //cout << "load " << notecount << " times." << endl;
        }
        
        ~Note()
        {
        	//cout << stime << " Note Destoried." << endl;
		}

        //Deallocates memory
        //~Judgeline();
        bool hited = 0;
        int posx = 100;
        int posy = 100;
        //Deallocates texture
        //void free();

        //Set color modulation
        //void setColor(Uint8 red, Uint8 green, Uint8 blue);

        //Set blending
        //void setBlendMode(SDL_BlendMode blending);

        //Set alpha modulation
        //void setAlpha(Uint8 alpha);
        
        SDL_Texture* loadNote(string path);
        //bool loadNote(int index);
    
        //Renders texture at given point
        void render(int& posx, int& posy, SDL_Rect* clip, double angle, SDL_Point* center, SDL_RendererFlip flip, int goalx, int goaly, int speed, int time, long double Mi);
    
        bool judge(int goal, int time, GameInfo* mGameinfo, long double Mi);
        void playsfx();
        
        //Gets image dimensions
        //int getWidth(){return mWidth;};
        //int getHeight(){return mHeight;};
        int getdtime(){return dtime;};
        int getgoal(){return goal;};
        int getEndx(){return endx;};
        int getEndy(){return endy;};
        int getspeed(){return speed;};
        int getResult(){return result;};
        int getTrans(){return trans;};
    
        Uint8 setTrans(int time);
        int setResult(int r){result = r;}
        
        void printNoteInfo();
        
        //The actual hardware texture
        //SDL_Texture* mTexture;
        
        
    private:
        //Image dimensions
        //int mWidth = 100;
        //int mHeight = 10;
        int stime;
        int dtime;
        int type;
        int goal;
        int endx;
        int endy;
        int speed;
        double sdegree;
        double ddegree;
        
        int result = -1;//0: miss, 1: fair, 2: good, 3: great, 4: perfect, 5: disappeared
        int trans = 255;
        int hittime;
};

#endif /* Note_h */
