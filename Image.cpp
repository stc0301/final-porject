//
//  Image.cpp
//  Project
//
//  Created by Richard on 2023/12/5.
//

#include "Image.h"
#include <iostream>
#include "SDL.h"
#include "SDL_image.h"
using namespace std;

extern SDL_Renderer* gRenderer;

/*Image::Image(int _mWidth, int _mHeight)
{
    mWidth = _mWidth;
    mHeight = _mHeight;
    
}*/

SDL_Texture* Image::loadImage(string path)
{
    //The final texture
    SDL_Texture* newTexture = NULL;

    //Load image at specified path
    SDL_Surface* loadedSurface = IMG_Load( path.c_str() );
    if( loadedSurface == NULL )
    {
        printf( "Unable to load image %s! SDL_image Error: %s\n", path.c_str(), IMG_GetError() );
    }
    else
    {
        //Create texture from surface pixels
        newTexture = SDL_CreateTextureFromSurface(gRenderer, loadedSurface);
        SDL_SetTextureBlendMode(mTexture, SDL_BLENDMODE_BLEND);
        if( newTexture == NULL )
        {
            printf( "Unable to create texture from %s! SDL Error: %s\n", path.c_str(), SDL_GetError() );
        }

        //Get rid of old loaded surface
        SDL_FreeSurface( loadedSurface );
    }

    return newTexture;
}

/*
void Image::render( int x, int y, SDL_Rect* clip, double angle, SDL_Point* center, SDL_RendererFlip flip )
{
    //Set rendering space and render to screen
    SDL_Rect renderQuad = { x, y, mWidth, mHeight };

    //Set clip rendering dimensions
    if( clip != NULL )
    {
        renderQuad.w = clip->w;
        renderQuad.h = clip->h;
    }

    //Render to screen
    SDL_RenderCopyEx( gRenderer, mTexture, clip, &renderQuad, angle, center, flip );
}
*/

void Image::render(int _x, int _y, int _h, int _w)
{
	SDL_Rect Viewport;
	Viewport.w = _w;
	Viewport.h = _h;
	Viewport.x = _x;
	Viewport.y = _y;
	SDL_RenderCopy(gRenderer, mTexture, NULL, &Viewport);
}

void Image::setBlendMode( SDL_BlendMode blending )
{
    //Set blending function
    SDL_SetTextureBlendMode( mTexture, blending );
}
        
void Image::setAlpha( Uint8 alpha )
{
    //Modulate texture alpha
    SDL_SetTextureAlphaMod( mTexture, alpha );
    //cout << "alpha is set " << (int)alpha << endl;
}

