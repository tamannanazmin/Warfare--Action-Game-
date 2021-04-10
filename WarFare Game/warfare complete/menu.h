#ifndef MENU_H
#define MENU_H

#include "iGraphics.h"
int mposx,  mposy; 

int mode=0;
int start=0;
int point_x=200,point_y=200;
int n=0,m=0;


void iDraw()
{
	iClear();
	
	if(n==0)
	{
	
		iShowBMP(0, 0, "images\\home.bmp");

	}
	
	if(n==1 )
	{
	
		iShowBMP(0,0,"images\\startgame.bmp");
		
		
	}

	if (n == 2) 
	{ 
		iShowBMP(0, 0, "images\\instruction.bmp"); 
	}

	if (n == 3) 
	{ 
		iShowBMP(0, 0, "images\\highscore.bmp"); 
	}


	if (n == 4) 
	{
		
		iShowBMP(0, 0, "images\\credit.bmp"); 
	}
	
	if (n == 5) 
	{
		
		iClear();
	}

	if ( n==6)
	{
		iShowBMP(0, 0, "images\\home.bmp");
	}
	
}

void iMouseMove(int mx, int my)
{
	
}


void iMouse(int button, int state, int mx, int my)
{
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		
		//for start game
		if (my <350 && my>295) { n = 1; }

		//for Instruction
		if (my <290 && my>250) { n = 2; }

		//For Highscore
		if (my <240 && my>190) { n = 3; }

		//for about
		if (my <180 && my>140){ n = 4;}

		//for exit
		if (my <130 && my>100) { exit(0);}
		
		
		
		
		
	}
	if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		
	}
}

void iPassiveMouseMove(int mx,int my)
{
	
	point_x =mx;
	point_y = my;
		
	
  
}


void iKeyboard(unsigned char key)
{
	
	if(key == 'm')
	{
		PlaySound(0,0,0);
		
	}

	if(key == 'p')
	{
		PlaySound("music\\sound",NULL,SND_LOOP | SND_ASYNC);
		
	}
	


	if(key == 'n')
	{
		
		n = 1;
	}
	
	
	if(key == 'i')
	{
		
		n = 2;
	}
	if(key == 'h')
	{
		
		n = 3;
	}
	if(key == 'a')
	{
		
		n = 4;
	}
	if(key == 'e')
	{
		
		n = 5;
	}
	if(key =='b')
	{
		n = 6;
	}
	
}


void iSpecialKeyboard(unsigned char key)
{

	if(key == GLUT_KEY_END)
	{
		exit(0);	
	}
}
#endif
