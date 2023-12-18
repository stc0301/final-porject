//
//  Image.h
//  Project
//
//  Created by Richard on 2023/12/5.
//

#ifndef Image_h
#define Image_h
#include <iostream>
#include "SDL.h"
#include "SDL_image.h"
using namespace std;


class Image
{
    
    protected:
        
        int mWidth=100;
        int mHeight=10;
        int posx;
        int posy;
        int initx;
        int inity;
    
    public:
    
    	Image(){}
        Image(string path)
        {
        	mTexture = loadImage(path);
		}
		~Image()
		{
			free();
		}

        void pass_file_location(string path)
        {
        	//added
			if(mTexture!=NULL){
				SDL_DestroyTexture(mTexture);
			} 
        	//added
        	mTexture = loadImage(path);
        	if(mTexture==NULL)cout<<"fail"<<endl;
		}        
        //virtual ~Image(){};
    
        // Deallocates texture
        void free()
		{
			if(mTexture != NULL)
			{
				SDL_DestroyTexture( mTexture );
    			mTexture = NULL;
			}
		}
    
        // ???
        SDL_Texture* loadImage(string path);
    
        //Set color modulation
        void setColor(Uint8 red, Uint8 green, Uint8 blue);
    
        //Set blending
        void setBlendMode(SDL_BlendMode blending);

        //Set alpha modulation
        void setAlpha(Uint8 alpha);
    
    	void render( int x, int y, SDL_Rect* clip = NULL, double angle = 0.0, SDL_Point* center = NULL, SDL_RendererFlip flip = SDL_FLIP_NONE );
    	void render( int x, int y, int _h, int _w);
    
        int getWidth(){return mWidth;};
        int getHeight(){return mHeight;};
        
    	void setPosx(int x){posx = x;};
        void setPosy(int y){posy = y;};
        void setInitx(int x){initx = x;};
        void setInity(int y){inity = y;};
        
        int getPosx(){return posx;};
        int getPosy(){return posy;};
    
        //The actual hardware texture
        SDL_Texture* mTexture;

    
    
    
};

#endif /* Image_h */
