//
//  Music.cpp
//  Project
//
//  Created by Richard on 2023/12/6.
//

#include "Music.h"
#include <iostream>
#include "SDL.h"
#include "SDL_mixer.h"
using namespace std;

extern const char* MaingameMusicAddr[];

bool Music::loadMusic(int index)
{
    bool success = true;
    gMusic = Mix_LoadMUS(MaingameMusicAddr[index]);
    if(gMusic == NULL )
    {
        printf( "Failed to load music!\n" );
        success = false;
    }
    return success;
}
