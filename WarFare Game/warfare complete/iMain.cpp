#include "iGraphics.h"
#include "bitmap_loader.h"
#include "myheader.h"
/*GLUT_KEY_UP = jump
' ' = shoot(player)*/
//screen 
int screenHeight = 900;
int screenWidth = 1800;

//color change 
int r = 0;
int g = 0;
int b = 0;

//player picture and cordinate 
int pic[5];
int  playerCorX = 0;
int playerCorY = 0;
int playerIndex = 0;
int playerLife = 10000;

//player run
void changForRun();

//player jumping
int jumpOne;                   
int jumpTwo;

bool jump = false;
bool jumpUp = false;

int playerCordinateJumpSpeedup = 2;
int playerCordinateJumpSpeeddown = 2;
int jumpLimit = 600;
int playerCordinateJump = 0;

//bullet movement of player 
int bulletimage;
int bulx = 90;                           
int buly = 120;
bool bulletRun = false;
void FunctionForBullets();

//enemy one 
int enemypicture[6];
int enemyCorX=screenWidth;
int enemyCorY=0;
int enemyIndex = 0;
void enemymove();
int enemyLife = 10000;

//enemy bullet one
int enemyBulletImage;
int bx = enemyCorX;
int by = 100;
bool showBullet = false;
void FucntionForEnemyBullet();

//enemy two
int enemytwopicture[6];
int enemytwoCorX=screenWidth;
int enemytwoCorY=0;
int enemytwoIndex = 0;
void enemytwomove();
int enemytwoLife = 10000;

//enemy bullet two
int enemytwoBulletImage;
int btwox = enemytwoCorX;
int btwoy = 100;
bool showBullettwo = false;
void FucntionForEnemytwoBullet();

//enemy three
int enemythreepicture[6];
int enemythreeCorX=screenWidth;
int enemythreeCorY=0;
int enemythreeIndex = 0;
void enemythreemove();
int enemythreeLife = 10000;

//enemy bullet three
int enemythreeBulletImage;
int bthreex = enemythreeCorX;
int bthreey = 100;
bool showBulletthree = false;
void FucntionForEnemythreeBullet();

//enemy four
int enemyfourpicture[6];
int enemyfourCorX=screenWidth;
int enemyfourCorY=0;
int enemyfourIndex = 0;
void enemyfourmove();
int enemyfourLife = 10000;

//enemy bullet four
int enemyfourBulletImage;
int bfourx = enemyfourCorX;
int bfoury = 100;
bool showBulletfour = false;
void FucntionForEnemyfourBullet();

//enemy five
int enemyfivepicture[6];
int enemyfiveCorX=screenWidth;
int enemyfiveCorY=0;
int enemyfiveIndex = 0;
void enemyfivemove();
int enemyfiveLife = 10000;

//enemy bullet five
int enemyfiveBulletImage;
int bfivex = enemyfiveCorX;
int bfivey = 100;
bool showBulletfive = false;
void FucntionForEnemyfiveBullet();

//enemy six
int enemysixpicture[6];
int enemysixCorX=screenWidth;
int enemysixCorY=0;
int enemysixIndex = 0;
void enemysixmove();
int enemysixLife = 10000;

//enemy bullet six
int enemysixBulletImage;
int bsixx = enemysixCorX;
int bsixy = 100;
bool showBulletsix = false;
void FucntionForEnemysixBullet();

//enemy seven
int enemysevenpicture[6];
int enemysevenCorX=screenWidth;
int enemysevenCorY=0;
int enemysevenIndex = 0;
void enemysevenmove();
int enemysevenLife = 100000;

//enemy bullet seven
int enemysevenBulletImage;
int bsevenx = enemysevenCorX;
int bseveny = 132;
bool showBulletseven = false;
void FucntionForEnemysevenBullet();

//collision
void collisionCheckForPlayer();
bool collisionCheck = false;
void collisionCheckForEnemy();
bool enemyCheck=false;

void collisionCheckForEnemytwo();
bool enemytwoCheck=false;
void collisionCheckForEnemythree();
bool enemythreeCheck=false;
void collisionCheckForEnemyfour();
bool enemyfourCheck=false;
void collisionCheckForEnemyfive();
bool enemyfiveCheck=false;
void collisionCheckForEnemysix();
bool enemysixCheck=false;
void collisionCheckForEnemyseven();
bool enemysevenCheck=false;

//mine type of obstacle 
	int obstacle;
	int obx=screenWidth;
	int oby=100;
	bool showOb=false;
	void obs();


// the function is created for jumping and running 
void jumpAndRun()
{
	if (jump)
	{
		if (jumpUp)
		{
			iShowImage(playerCorX, playerCorY + playerCordinateJump, 100, 200, jumpOne);
			collisionCheck = false;
		}
		else
		{
			iShowImage(playerCorX, playerCorY + playerCordinateJump, 100, 200, jumpTwo);
			collisionCheck = false;
		}
		
	}
	else{
		iShowImage(playerCorX, playerCorY, 100, 200, pic[playerIndex]);
		

	}
	if (jump)
	{
		if (jumpUp)
		{
			playerCordinateJump += playerCordinateJumpSpeedup;
			if (playerCordinateJump >= jumpLimit)
			{
				jumpUp = false;
			}
		}
		else{
			playerCordinateJump -= playerCordinateJumpSpeeddown;
			if (playerCordinateJump < 0)
			{
				jump = false;
				playerCordinateJump = 0;
			}
		}
		collisionCheck = false;
	
	}


}
//the function is created for shooting (player)
void FunctionForBullets()
{
	if (bulletRun)
	{
		bulx += 5;
		if (bulx >= screenWidth)
			bulletRun = false;
		collisionCheckForEnemy();
		collisionCheckForEnemytwo();
		collisionCheckForEnemythree();
		collisionCheckForEnemyfour();
		collisionCheckForEnemyfive();
		collisionCheckForEnemysix();
		collisionCheckForEnemyseven();
	}
	if (bulletRun)
	{
		{
			bulx += 5;
			if (bulx >= screenWidth)
			{
				bulletRun = false;
				bulx = 90;
				collisionCheckForEnemy();
				collisionCheckForEnemytwo();
				collisionCheckForEnemythree();
				collisionCheckForEnemyfour();
				collisionCheckForEnemyfive();
				collisionCheckForEnemysix();
				collisionCheckForEnemyseven();
			}
		}
	}
}

void iDraw()
{

	iClear();
	iSetColor(r, g, b);

	jumpAndRun();
	//image for player bullet
	iShowImage(bulx, buly, 8, 7, bulletimage);
	 
	FunctionForBullets();
	iShowImage(enemyCorX, enemyCorY, 100, 150, enemypicture[enemyIndex]);//enemy image one
	iShowImage(enemytwoCorX, enemytwoCorY, 100, 150, enemytwopicture[enemytwoIndex]);//enemy image two
	iShowImage(enemythreeCorX, enemythreeCorY, 100, 150, enemythreepicture[enemythreeIndex]);//enemy image three
	iShowImage(enemyfourCorX, enemyfourCorY, 100, 150, enemyfourpicture[enemyfourIndex]);//enemy image four
	iShowImage(enemyfiveCorX, enemyfiveCorY, 100, 150, enemyfivepicture[enemyfiveIndex]);//enemy image five
	iShowImage(enemysixCorX, enemysixCorY, 100, 150, enemysixpicture[enemysixIndex]);//enemy image six
	iShowImage(enemysevenCorX, enemysevenCorY, 400, 200, enemysevenpicture[enemysevenIndex]);//enemy image seven
	

	
	iShowImage(bx, by, 8, 7, enemyBulletImage);//image for enemy bullet one
	iShowImage(btwox, btwoy, 8, 7, enemytwoBulletImage);//image for enemy bullet two
	iShowImage(bthreex, bthreey, 8, 7, enemythreeBulletImage);//image for enemy bullet three
	iShowImage(bfourx, bfoury, 8, 7, enemyfourBulletImage);//image for enemy bullet four
	iShowImage(bfivex, bfivey, 8, 7, enemyfiveBulletImage);//image for enemy bullet five
	iShowImage(bsixx, bsixy, 8, 7, enemysixBulletImage);//image for enemy bullet six
	iShowImage(bsevenx, bseveny, 10, 10, enemysevenBulletImage);//image for enemy bullet seven
	iShowImage(obx, oby, 50, 50, obstacle);

}

void iPassiveMouse(int x, int y)
{

}



void iMouseMove(int mx, int my)
{


}


void iMouse(int button, int state, int mx, int my)
{

}


void iKeyboard(unsigned char key)
{
	if (key == ' ')
	{
		bulletRun = true;
	}


}


void iSpecialKeyboard(unsigned char key)
{

	if (key == GLUT_KEY_UP)
	{
		if (!jump)
		{
			jump = true;
			jumpUp = true;
			
		}
		
	}
}
void changeForRun()
{
	playerIndex++;
	if (playerIndex >= 5)
	{
		playerIndex = 0;
	}
	
	}
void FucntionForEnemyBullet()
{
	
	
		bx-=5;
		if (bx <= 0)
		{
			bx = enemyCorX;
		}
	
		collisionCheckForPlayer();

		if(enemyLife<=0)//enemy bullet two
	{
		btwox-=5;
		if (btwox <= 0)
		{
			btwox = enemytwoCorX;
		}
	
		collisionCheckForPlayer();
	}

		if(enemytwoLife<=0)//enemy bullet three
	{
		bthreex-=5;
		if (bthreex <= 0)
		{
			bthreex = enemythreeCorX;
		}
	
		collisionCheckForPlayer();
	}
		if(enemythreeLife<=0)//enemy bullet four
	{
		bfourx-=5;
		if (bfourx <= 0)
		{
			bfourx = enemyfourCorX;
		}
	
		collisionCheckForPlayer();
	}

		if(enemyfourLife<=0) //enemy bullet five
	{
		bfivex-=5;
		if (bfivex <= 0)
		{
			bfivex = enemyfiveCorX;
		}
	
		collisionCheckForPlayer();
	}	

		if(enemyfiveLife<=0)   //enemy bullet six
	{ 
		bsixx-=5;
		if (bsixx <= 0)
		{
			bsixx = enemysixCorX;
		}
	
		collisionCheckForPlayer();
	}
		
	if(enemysixLife<=0)   //enemy bullet seven
	{
		bsevenx-=5;
		if (bsevenx <= 0)
		{
			bsevenx = enemysevenCorX;
		}
		collisionCheckForPlayer();
	}
		
	
}


void enemymove()
{
	
	enemyCorX -= 5;      //for enemy one
	enemyIndex++;
	if (enemyIndex >= 6)
	{
		enemyIndex = 0;
	}
	if (enemyCorX <= 1500)
	{
		enemyIndex++;
		if (enemyIndex >= 6)
		{
			enemyIndex = 0;
		}
		enemyCorX = 1500;
	}

	if(enemyLife<=0)   //for enemy two
	{
		enemytwoCorX -= 5;
	enemytwoIndex++;
	if (enemytwoIndex >= 6)
	{
		enemytwoIndex = 0;
	}
	if (enemytwoCorX <= 1500)
	{
		enemytwoIndex++;
		if (enemytwoIndex >= 6)
		{
			enemytwoIndex = 0;
		}
		enemytwoCorX = 1500;
	}
	}	

	if(enemytwoLife<=0)   //for enemy three
	{
		enemythreeCorX -= 5;
	enemythreeIndex++;
	if (enemythreeIndex >= 6)
	{
		enemythreeIndex = 0;
	}
	if (enemythreeCorX <= 1500)
	{
		enemythreeIndex++;
		if (enemythreeIndex >= 6)
		{
			enemythreeIndex = 0;
		}
		enemythreeCorX = 1500;
	}
	}	
	if(enemythreeLife<=0)   //for enemy four
	{
		enemyfourCorX -= 5;
	enemyfourIndex++;
	if (enemyfourIndex >= 6)
	{
		enemyfourIndex = 0;
	}
	if (enemyfourCorX <= 1500)
	{
		enemyfourIndex++;
		if (enemyfourIndex >= 6)
		{
			enemyfourIndex = 0;
		}
		enemyfourCorX = 1500;
	}
	}	
	
	if(enemyfourLife<=0)  //for enemy five
	{
		enemyfiveCorX -= 5;
	enemyfiveIndex++;
	if (enemyfiveIndex >= 6)
	{
		enemyfiveIndex = 0;
	}
	if (enemyfiveCorX <= 1500)
	{
		enemyfiveIndex++;
		if (enemyfiveIndex >= 6)
		{
			enemyfiveIndex = 0;
		}
		enemyfiveCorX = 1500;
	}
	}	

	if(enemyfiveLife<=0)  //for enemy six
	{
		enemysixCorX -= 5;
	enemysixIndex++;
	if (enemysixIndex >= 6)
	{
		enemysixIndex = 0;
	}
	if (enemysixCorX <= 1500)
	{
		enemysixIndex++;
		if (enemysixIndex >= 6)
		{
			enemysixIndex = 0;
		}
		enemysixCorX = 1500;
	}
	}

	if(enemysixLife<=0)//for enemy seven
	{
		enemysevenCorX -= 5;
	enemysevenIndex++;
	if (enemysevenIndex >= 6)
	{
		enemysevenIndex = 0;
	}
	if (enemysevenCorX <= 1400)
	{
		enemysevenIndex++;
		if (enemysevenIndex >= 6)
		{
			enemysevenIndex = 0;
		}
		enemysevenCorX = 1400;
	}
	}	
}  




void collisionCheckForPlayer()
{
	collisionCheck = true;
	if (jump)
	{
		collisionCheck = false;
	}
	else if (bx + 8 > playerCorX && bx < playerCorX + 100 && collisionCheck==true)
	{
		playerLife -= 100;
		printf("%d\n", playerLife);
		if (playerLife <= 0)
		{
			playerCorX = 1500000;
			playerCorY = 1500000;
			bulx=1500000;
			//collisionCheck = true;
		}
	}
	
	collisionCheck = true;
	if (jump)
	{
		collisionCheck = false;
	}
	else if (btwox + 8 > playerCorX && btwox < playerCorX + 100 && collisionCheck==true)
	{
		playerLife -= 10;
		printf("%d\n", playerLife);
		if (playerLife <= 0)
		{
			playerCorX = 1500000;
			playerCorY = 1500000;
			bulx=1500000;
			//collisionCheck = true;
		}
	}

	collisionCheck = true;
	if (jump)
	{
		collisionCheck = false;
	}
	else if (bthreex + 8 > playerCorX && bthreex < playerCorX + 100 && collisionCheck==true)
	{
		playerLife -= 10;
		printf("%d\n", playerLife);
		if (playerLife <= 0)
		{
			playerCorX = 1500000;
			playerCorY = 1500000;
			bulx=1500000;
			//collisionCheck = true;
		}
	}

	collisionCheck = true;
	if (jump)
	{
		collisionCheck = false;
	}
	else if (bfourx + 8 > playerCorX && bfourx < playerCorX + 100 && collisionCheck==true)
	{
		playerLife -= 10;
		printf("%d\n", playerLife);
		if (playerLife <= 0)
		{
			playerCorX = 1500000;
			playerCorY = 1500000;
			bulx=1500000;
			//collisionCheck = true;
		}
	}

	collisionCheck = true;
	if (jump)
	{
		collisionCheck = false;
	}
	else if (bfivex + 8 > playerCorX && bfivex < playerCorX + 100 && collisionCheck==true)
	{
		playerLife -= 10;
		printf("%d\n", playerLife);
		if (playerLife <= 0)
		{
			playerCorX = 1500000;
			playerCorY = 1500000;
			bulx=1500000;
			//collisionCheck = true;
		}
	}
	collisionCheck = true;
	if (jump)
	{
		collisionCheck = false;
	}
	else if (bsixx + 8 > playerCorX && bsixx < playerCorX + 100 && collisionCheck==true)
	{
		playerLife -= 10;
		printf("%d\n", playerLife);
		if (playerLife <= 0)
		{
			playerCorX = 1500000;
			playerCorY = 1500000;
			bulx=1500000;
			//collisionCheck = true;
		}
	}

	collisionCheck = true;
	if (jump)
	{
		collisionCheck = false;
	}
	else if (bsevenx + 8 > playerCorX && bsevenx < playerCorX + 100 && collisionCheck==true)
	{
		playerLife -= 10;
		printf("%d\n", playerLife);
		if (playerLife <= 0)
		{
			playerCorX = 1500000;
			playerCorY = 1500000;
			bulx=1500000;
			//collisionCheck = true;
		}
	}
	
}
void collisionCheckForEnemy()
{
	enemyCheck=true;
	 if (bulx + 8 > enemyCorX && bulx <enemyCorX+ 100 && enemyCheck==true)
	{
		enemyLife -= 100;
		//printf("      %d\n",enemyLife);
		if (enemyLife <= 0)
		{
			enemyCorX = 1500000;
			enemyCorY = 1500000;
			bx=1500000;
			
		}
	 }
}
void collisionCheckForEnemytwo()
{
	enemytwoCheck=true;
	 if (bulx + 8 > enemytwoCorX && bulx <enemytwoCorX+ 100 && enemytwoCheck==true)
	{
		enemytwoLife -= 100;
		//printf("         %d\n",enemyLife);
		if (enemytwoLife <= 0)
		{
			enemytwoCorX = 1500000;
			enemytwoCorY = 1500000;
			btwox=1500000;
		}
	 }
}
void collisionCheckForEnemythree()
{
	enemythreeCheck=true;
	 if (bulx + 8 > enemythreeCorX && bulx <enemythreeCorX+ 100 && enemythreeCheck==true)
	{
		enemythreeLife -= 100;
		//printf("         %d\n",enemyLife);
		if (enemythreeLife <= 0)
		{
			enemythreeCorX = 1500000;
			enemythreeCorY = 1500000;
			bthreex=1500000;
		}
	 }
}
void collisionCheckForEnemyfour()
{
	enemyfourCheck=true;
	 if (bulx + 8 > enemyfourCorX && bulx <enemyfourCorX+ 100 && enemyfourCheck==true)
	{
		enemyfourLife -= 100;
		//printf("         %d\n",enemyLife);
		if (enemyfourLife <= 0)
		{
			enemyfourCorX = 1500000;
			enemyfourCorY = 1500000;
			bfourx=1500000;
		}
	 }
}
void collisionCheckForEnemyfive()
{
	enemyfiveCheck=true;
	 if (bulx + 8 > enemyfiveCorX && bulx <enemyfiveCorX+ 100 && enemyfiveCheck==true)
	{
		enemyfiveLife -= 100;
		//printf("         %d\n",enemyLife);
		if (enemyfiveLife <= 0)
		{
			enemyfiveCorX = 1500000;
			enemyfiveCorY = 1500000;
			bfivex=1500000;
		}
	 }
}
void collisionCheckForEnemysix()
{
	enemysixCheck=true;
	 if (bulx + 8 > enemysixCorX && bulx <enemysixCorX+ 100 && enemysixCheck==true)
	{
		enemysixLife -= 100;
		//printf("         %d\n",enemyLife);
		if (enemysixLife <= 0)
		{
			enemysixCorX = 1500000;
			enemysixCorY = 1500000;
			bsixx=1500000;
		}
	 }
}

void collisionCheckForEnemyseven()
{
	enemysevenCheck=true;
	 if (bulx + 8 > enemysevenCorX && bulx <enemysevenCorX+ 100 && enemysevenCheck==true)
	{
		enemysevenLife -= 100;
		//printf("         %d\n",enemyLife);
		if (enemysevenLife <= 0)
		{
			enemysevenCorX = 1500000;
			enemysevenCorY = 1500000;
			bsevenx=1500000;
		}
	 }
}

void obs()              //obstacle
{
	obx=-5;
	if(obx<=0)
	{
		obx=screenWidth;
	}
	//collisionCheckForPlayer();
}

int main()
{
	iSetTimer(200, changeForRun);//for player run.
	//for enemy run
	iSetTimer(100, enemymove);

	//for enemy bullet 
	iSetTimer(5, FucntionForEnemyBullet);
	iSetTimer(5,obs);
	
	

	iInitialize(screenWidth, screenHeight, "WareFare");
	//for runinng
	pic[0] = iLoadImage("images\\p1.png");
	pic[1] = iLoadImage("images\\p2.png");
	pic[2] = iLoadImage("images\\p3.png");
	pic[3] = iLoadImage("images\\p4.png");
	pic[4] = iLoadImage("images\\p5.png");
	
	//for jumping
	jumpOne = iLoadImage("images\\p1.png");
	jumpTwo = iLoadImage("images\\p1.png");
	//for shooting
	bulletimage = iLoadImage("images\\b.png");

	//enemy picture one
	enemypicture[0] = iLoadImage("images\\e1.png");
	enemypicture[1] = iLoadImage("images\\e2.png");
	enemypicture[2] = iLoadImage("images\\e3.png");
	enemypicture[3] = iLoadImage("images\\e4.png");
	enemypicture[4] = iLoadImage("images\\e5.png");
	enemypicture[5] = iLoadImage("images\\e6.png");
	//enemy bullet one
	enemyBulletImage = iLoadImage("images\\bullet1.png");
	


	//enemy picture two
	enemytwopicture[0] = iLoadImage("images\\e1.png");
	enemytwopicture[1] = iLoadImage("images\\e2.png");
	enemytwopicture[2] = iLoadImage("images\\e3.png");
	enemytwopicture[3] = iLoadImage("images\\e4.png");
	enemytwopicture[4] = iLoadImage("images\\e5.png");
	enemytwopicture[5] = iLoadImage("images\\e6.png");
	//enemy bullet two
	enemytwoBulletImage = iLoadImage("images\\bullet1.png");

	//enemy picture three
	enemythreepicture[0] = iLoadImage("images\\e1.png");
	enemythreepicture[1] = iLoadImage("images\\e2.png");
	enemythreepicture[2] = iLoadImage("images\\e3.png");
	enemythreepicture[3] = iLoadImage("images\\e4.png");
	enemythreepicture[4] = iLoadImage("images\\e5.png");
	enemythreepicture[5] = iLoadImage("images\\e6.png");
	//enemy bullet three
	enemythreeBulletImage = iLoadImage("images\\bullet1.png");

	//enemy picture four
	enemyfourpicture[0] = iLoadImage("images\\e1.png");
	enemyfourpicture[1] = iLoadImage("images\\e2.png");
	enemyfourpicture[2] = iLoadImage("images\\e3.png");
	enemyfourpicture[3] = iLoadImage("images\\e4.png");
	enemyfourpicture[4] = iLoadImage("images\\e5.png");
	enemyfourpicture[5] = iLoadImage("images\\e6.png");
	//enemy bullet four
	enemyfourBulletImage = iLoadImage("images\\bullet1.png");

	//enemy picture five
	enemyfivepicture[0] = iLoadImage("images\\e1.png");
	enemyfivepicture[1] = iLoadImage("images\\e2.png");
	enemyfivepicture[2] = iLoadImage("images\\e3.png");
	enemyfivepicture[3] = iLoadImage("images\\e4.png");
	enemyfivepicture[4] = iLoadImage("images\\e5.png");
	enemyfivepicture[5] = iLoadImage("images\\e6.png");
	//enemy bullet five
	enemyfiveBulletImage = iLoadImage("images\\bullet1.png");

	//enemy picture six
	enemysixpicture[0] = iLoadImage("images\\e1.png");
	enemysixpicture[1] = iLoadImage("images\\e2.png");
	enemysixpicture[2] = iLoadImage("images\\e3.png");
	enemysixpicture[3] = iLoadImage("images\\e4.png");
	enemysixpicture[4] = iLoadImage("images\\e5.png");
	enemysixpicture[5] = iLoadImage("images\\e6.png");
	//enemy bullet six
	enemysixBulletImage = iLoadImage("images\\bullet1.png");

	//enemy picture seven
	enemysevenpicture[0] = iLoadImage("images\\tank.png");
	enemysevenpicture[1] = iLoadImage("images\\tank.png");
	enemysevenpicture[2] = iLoadImage("images\\tank.png");
	enemysevenpicture[3] = iLoadImage("images\\tank.png");
	enemysevenpicture[4] = iLoadImage("images\\tank.png");
	enemysevenpicture[5] = iLoadImage("images\\tank.png");
	//enemy bullet seven
	enemysevenBulletImage = iLoadImage("images\\bullet1.png");
	obstacle=iLoadImage("images\\ob.png");
	
	iStart(); 

	return 0;
}