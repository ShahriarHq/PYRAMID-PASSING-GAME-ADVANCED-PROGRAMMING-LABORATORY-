/*
project done by
S.M. Shahriar Haque
*/

#include "iGraphics.h"
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <dos.h>
int mummy_x = 368, mummy_y = 5, mummy_x1 = 250, mummy_y1 = 120, mummy_x2 = 100, mummy_y2 = 240, mummy_x3 = 460, mummy_y3 = 360, mummy_x4 = 200, mummy_y4 = 480;
int pball_x = 0, pball_y = 64, score = 0, run = 25, stop[100];
int mode = 0, mummy = 0, move = 5, level = 1, k, gameover;
char scoretxt[20];
char str[8][13] = { "image\\1L.bmp", "image\\2L.bmp", "image\\3L.bmp", "image\\4L.bmp", "image\\1R.bmp", "image\\2R.bmp", "image\\3R.bmp", "image\\4R.bmp" };
int index = 0;


void movement(){
	if (pball_y == 64){
		if (mummy_x <= 0 || mummy_x >= 536){
			move *= (-1);
		}
		mummy_x = mummy_x + move;
		pball_x = mummy_x + move;
	}
	if (mummy == 1){
		mummy_x = mummy_x + 0;
	}
	if (pball_y == 184 && pball_x >= mummy_x1 - 32 && pball_x <= mummy_x1 + 64){
		k = 1;
		if (k == 1){
			if (mummy_x1 <= 0 || mummy_x1 >= 536){
				move *= (-1);
			}
			mummy_x1 = mummy_x1 + move;
			pball_x = pball_x + move;
		}
		if (mummy == 2){
			k = mummy;
			mummy_x1 = mummy_x1 + 50;
		}
	}
	if (pball_y == 184 && (pball_x<mummy_x1 - 32 || pball_x>mummy_x1 + 64)){
		stop[0] = 1;
	}
	if (stop[0] == 1){
		pball_y = pball_y + 5;
		gameover = 1;
	}
	if (pball_y == 304 && pball_x >= mummy_x2 - 32 && pball_x <= mummy_x2 + 64){
		k = 2;
		if (k == 2){
			if (mummy_x2 <= 0 || mummy_x2 >= 536)
			{
				move = move*-1;

			}
			mummy_x2 = mummy_x2 + move;
			pball_x = pball_x + move;
		}
		if (mummy == 3){
			k = mummy;
			mummy_x2 = mummy_x2 + 50;

		}
	}
	if (pball_y == 304 && (pball_x<mummy_x2 - 32 || pball_x>mummy_x2 + 64))
	{
		stop[1] = 1;

	}
	if (stop[1] == 1)
	{
		pball_y = pball_y + 5;
		gameover = 1;
	}
	if (pball_y == 424 && pball_x >= mummy_x3 - 32 && pball_x <= mummy_x3 + 64){
		k = 3;
		if (k == 3){
			if (mummy_x3 <= 0 || mummy_x3 >= 536)
			{
				move = move*-1;

			}
			mummy_x3 = mummy_x3 + move;
			pball_x = pball_x + move;
		}
		if (mummy == 4){
			k = mummy;
			mummy_x3 = mummy_x3 + 50;

		}
	}
	if (pball_y == 424 && (pball_x<mummy_x3 - 32 || pball_x>mummy_x3 + 64))
	{
		stop[2] = 1;

	}
	if (stop[2] == 1)
	{
		pball_y = pball_y + 5;
		gameover = 1;
	}
	if (pball_y == 544 && (pball_x<mummy_x4 - 32 || pball_x>mummy_x4 + 64)){
		stop[3] == 1;
	}
	if (stop[3] == 1){
		pball_y = pball_y + 5;
		gameover = 1;
	}
}
void pball(){
	pball_y = pball_y + 120;
}
void iDraw()

{      //stage change
	iClear();
		if (score >= 0 && score<3)
		{
			iShowBMP(0, 0, "image\\l2.bmp");
			
		}
		if (score >= 3 && score<6)
		{
			iShowBMP(0, 0, "image\\3.bmp");
			
		}
		if (score >= 6 && score<9)
		{
			iShowBMP(0, 0, "image\\2.bmp");
			
		}
		if (score >= 9 && score<12)
		{
			iShowBMP(0, 0, "image\\4.bmp");
		
		}
		if (score >= 12 && score<15)
		{
			iShowBMP(0, 0, "image\\5.bmp");
		
		}
		if (score >= 15 && score<18)
		{
			iShowBMP(0, 0, "image\\6.bmp");
		
		}
		if (score >= 18 && score<21)
		{
			iShowBMP(0, 0, "image\\7.bmp");
		
		}
		if (score >= 21 && score<24)
		{
			iShowBMP(0, 0, "image\\8.bmp");
		
		}
		if (score >= 24 && score<27)
		{
			iShowBMP(0, 0, "image\\9.bmp");
			
		}
		if (score >= 27 && score<30)
		{
			iShowBMP(0, 0, "image\\11.bmp");
			
		}
		
		//bmp file add
		iShowBMP2(mummy_x, mummy_y, str[index], 0);
		iSetColor(193, 164, 155);
		iFilledRectangle(0, 0, 600, 5);
		iShowBMP2(pball_x, pball_y, "image\\ball.bmp", 0);

		iShowBMP2(mummy_x1, mummy_y1, str[index], 0);
		iSetColor(193, 164, 155);
		iFilledRectangle(0, 120, 600, 5);

		iShowBMP2(mummy_x2, mummy_y2, str[index], 0);
		iSetColor(193, 164, 155);
		iFilledRectangle(0, 240, 600, 5);

		iShowBMP2(mummy_x3, mummy_y3, str[index], 0);
		iSetColor(193, 164, 155);
		iFilledRectangle(0, 360, 600, 5);

		iShowBMP2(mummy_x4, mummy_y4, str[index], 0);
		iSetColor(193, 164, 155);
		iFilledRectangle(0, 480, 600, 5);

		if (gameover == 1){
			iShowBMP2(pball_x, pball_y + 32, "image\\ghost.bmp", 0); //gameover ghost
			if (pball_y >= 600){
				iShowBMP(0, 0, "image\\gameover.bmp");

			}
		}
		if (level == 1){
			if (pball_y == 544 && pball_x >= mummy_x4 - 32 && pball_x <= mummy_x4 + 64){
				iClear();

				mode = 1;
				if (mode == 1){
					mummy_x = 368;
					pball_y = 64;

					iShowBMP2(mummy_x, mummy_y, str[index], 0);
					iSetColor(193, 164, 155);
					iFilledRectangle(0, 0, 600, 5);
					iShowBMP2(pball_x, pball_y, "image\\ball.bmp", 0);

					iShowBMP2(mummy_x1, mummy_y1, str[index], 0);
					iSetColor(193, 164, 155);
					iFilledRectangle(0, 120, 600, 5);

					iShowBMP2(mummy_x2, mummy_y2, str[index], 0);
					iSetColor(193, 164, 155);
					iFilledRectangle(0, 240, 600, 5);

					iShowBMP2(mummy_x3, mummy_y3, str[index], 0);
					iSetColor(193, 164, 155);
					iFilledRectangle(0, 360, 600, 5);

					iShowBMP2(mummy_x4, mummy_y4, str[index], 0);
					iSetColor(193, 164, 155);
					iFilledRectangle(0, 480, 600, 5);
				}
			}
		}

		iSetColor(129, 254, 228);
	iText(0, 580, "SCORE:", GLUT_BITMAP_TIMES_ROMAN_24);
	iText(100, 580, scoretxt, GLUT_BITMAP_TIMES_ROMAN_24);
	sprintf_s(scoretxt, "%d", score);

	
}


void iMouseMove(int mx, int my)

{

	//place your codes here

}

void iMouse(int button, int state, int mx, int my)

{

	//place your codes here

}

void iKeyboard(unsigned char key)

{
	//place your codes here score code
	if (key == 'a'|| key=='A'){
		pball();
		mummy = mummy + 1;

		if (pball_y == 184 && (pball_x>mummy_x1 - 32 && pball_x<mummy_x1 + 64))
		{
			score++;

		}
		if (pball_y == 304 && (pball_x>mummy_x2 - 32 && pball_x<mummy_x2 + 64))
		{
			score++;

		}
		if (pball_y == 424 && (pball_x>mummy_x3 - 32 && pball_x>mummy_x3 + 64))
		{
			score++;

		}
		if (pball_y == 544 && (pball_x >= mummy_x4 - 32 && pball_x <= mummy_x4 + 64)){
			score++;
		}
	}
	
}

void iSpecialKeyboard(unsigned char key)

{

	if (key == GLUT_KEY_END){
		exit(0);
	}

}
void change(){
	index++;
	if (index == 8){
		index = 0;
	}
}

int main()

{

	//place your own initialization codes here.
	iSetTimer(20, movement);
	iSetTimer(200, change);
	iInitialize(600, 600, "PYRAMID BUILD");

	return 0;

}