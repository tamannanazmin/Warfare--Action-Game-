#define LEVEL1_H_INCLUDED

////////////////////////////////////////////////VARIABLE AND FUNCTION DECLARATIONS///////////////////////////////


//////////////////////////////////////////SCREEN/////////////////////////////////////

//screen measurements
int screenWidth =  1800;
int screenHeight = 900;

//--------------------------------------------------|------------------------------------------------------//


///////////////////////////////////////////GAME OVER///////////////////////////////////////////

//Game over variables
int gameOver;
bool over=false;
int interlevelTwoImage;
bool interLevelTwo=false;
//-------------------------------------------------|----------------------------------------------------//


////////////////////////////////////////BACKGROUD///////////////////////////////////

/*Background variables*/
int background[2];
int background_x[] = {1800,0},background_y[]={0,0};

//--------------------------------------------------|------------------------------------------------------//

/////////////////////////////////////////SCORE///////////////////////////////////

//score variables
char scoress[3000];
int score=0;

//--------------------------------------------------|------------------------------------------------------//


///////////////////////////////////HIGHSCORE//////////////////////////////////

//highscore variables
int highScore=0;
int FinalScore;

//--------------------------------------------------|------------------------------------------------------//


//////////////////////////////////COLOUR///////////////////////////////

//color change 
int r = 0;
int g = 0;
int b = 0;

//--------------------------------------------------|------------------------------------------------------//

///////////////////////////////////////////PLAYER///////////////////////////////

//variables for player picture and cordinate 
int pic[5];
int  playerCorX = 0;
int playerCorY = 80;
int playerIndex = 0;
int playerLife = 100;


//player death showing.
int playerDeadImage[8];
int playerDeadIndex=0;
int playerDeadX=0;
int playerDeadY=80;
bool playerDead=false;
//function for player run
void changForRun();

//variables for player jumping
int jumpOne;                   
int jumpTwo;

bool jump = false;
bool jumpUp = false;

int playerCordinateJumpSpeedup = 5;
int playerCordinateJumpSpeeddown = 5;
int jumpLimit = 350;
int playerCordinateJump = 0;


//variables for bullet one movement of player 
int bulletimage;
int bulx = 90;                           
int buly = 195;
bool bulletRun = false;

//function for bullet one movement of player
void FunctionForBullets();

//vriables for bullet two movement of player 
int btwoimage;
int bultwox=50;
int bultwoy =195;
bool bullettwoRun=false;

//function bullet two movement of player
void functionforbulletstwo(); 

//variables for bullet three movement of player 
int bthreeimage;
int bulthreex=10;
int bulthreey =195;
bool bulletthreeRun=false;

//function for bullet three movement of player
void functionforbulletsthree();




//--------------------------------------------------|------------------------------------------------------//




//////////////////////////////////////////////ENEMY ONE/////////////////////////
//variables for enemy one 
int enemypicture[6];
int enemyCorX=screenWidth;
int enemyCorY=80;
int enemyIndex = 0;

int enemyLife = 10000;

//function for enemy one
void enemymove();

//variables for enemy bullet one
int enemyBulletImage;
int bx = enemyCorX;
int by =180;
bool showBullet = false;


//function for enemy bullet one
void FucntionForEnemyBullet();


//--------------------------------------------------|------------------------------------------------------//


/////////////////////////////////////////ENEMY TWO//////////////////////////////////
//variables for enemy two
int enemytwopicture[6];
int enemytwoCorX=screenWidth;
int enemytwoCorY=80;
int enemytwoIndex = 0;
int enemytwoLife = 10000;


//function for enemy two
void enemytwomove();

//variables for enemy bullet two
int enemytwoBulletImage;
int btwox = enemytwoCorX;
int btwoy = 220;
bool showBullettwo = false;


//function for enemy bullet two
void FucntionForEnemytwoBullet();

//--------------------------------------------------|------------------------------------------------------//



/////////////////////////////////////////ENEMY THREE//////////////////////////////////
//variables for enemy three
int enemythreepicture[6];
int enemythreeCorX=screenWidth;
int enemythreeCorY=80;
int enemythreeIndex = 0;
int enemythreeLife = 10000;

//function for enemy three
void enemythreemove();

//variables for enemy bullet three
int enemythreeBulletImage;
int bthreex = enemythreeCorX;
int bthreey = 180;
bool showBulletthree = false;



//variables for enemy bullet three
void FucntionForEnemythreeBullet();

//--------------------------------------------------|------------------------------------------------------//



/////////////////////////////////////////ENEMY FOUR//////////////////////////////////
//variables for enemy four
int enemyfourpicture[6];
int enemyfourCorX=screenWidth;
int enemyfourCorY=80;
int enemyfourIndex = 0;
int enemyfourLife = 10000;

//function for enemy four
void enemyfourmove();

//variables for enemy bullet four
int enemyfourBulletImage;
int bfourx = enemyfourCorX;
int bfoury = 180;
bool showBulletfour = false;


//function for enemy bullet four
void FucntionForEnemyfourBullet();

//--------------------------------------------------|------------------------------------------------------//


/////////////////////////////////////////ENEMY FIVE//////////////////////////////////
//variables for enemy five
int enemyfivepicture[6];
int enemyfiveCorX=screenWidth;
int enemyfiveCorY=80;
int enemyfiveIndex = 0;
int enemyfiveLife = 10000;



//function for enemy five
void enemyfivemove();

//variables for enemy bullet five
int enemyfiveBulletImage;
int bfivex = enemyfiveCorX;
int bfivey = 220;
bool showBulletfive = false;

//function for enemy bullet five
void FucntionForEnemyfiveBullet();


//--------------------------------------------------|------------------------------------------------------//


/////////////////////////////////////////ENEMY SIX//////////////////////////////////
//variables for enemy six
int enemysixpicture[6];
int enemysixCorX=screenWidth;
int enemysixCorY=80;
int enemysixIndex = 0;
int enemysixLife = 10000;

//functions for enemy six
void enemysixmove();

////variables for enemy six bullet
int enemysixBulletImage;
int bsixx = enemysixCorX;
int bsixy = 150;
bool showBulletsix = false;

//function for enemy six bullet
void FucntionForEnemysixBullet();



//--------------------------------------------------|------------------------------------------------------//



/////////////////////////////////////////ENEMY SEVEN//////////////////////////////////
//variables for enemy seven
int enemysevenpicture[6];
int enemysevenCorX=screenWidth;
int enemysevenCorY=80;
int enemysevenIndex = 0;
int enemysevenLife = 100000;


//function for enemy seven
void enemysevenmove();

//variables for enemy seven bullet
int enemysevenBulletImage;
int bsevenx = enemysevenCorX;
int bseveny = 130;
bool showBulletseven = false;

//function for enemy seven bullet
void FucntionForEnemysevenBullet();

//enemy seven death showing
int enemysevenDeadImage[8];
int enemysevenDeadIndex=0;
int enemysevenDeadX;
int enemysevenDeadY;
bool enemysevenDead=false;

//--------------------------------------------------|------------------------------------------------------//


//////////////////////////////////////COLLSSION OF PLAYER AND ENEMY AND BULLETS////////////////////////////////

////////////////////////////////////PLAYER/////////////////////
void collisionCheckForPlayer();
bool collisionCheck = false;

//--------------------------------------------------|------------------------------------------------------//


////////////////////////////////ENEMY ONE////////////////////
void collisionCheckForEnemy();
bool enemyCheck=false;

//--------------------------------------------------|------------------------------------------------------//

////////////////////////////////ENEMY TWO////////////////////
void collisionCheckForEnemytwo();
bool enemytwoCheck=false;

//--------------------------------------------------|------------------------------------------------------//

////////////////////////////////ENEMY THREE////////////////////
void collisionCheckForEnemythree();
bool enemythreeCheck=false;

//--------------------------------------------------|------------------------------------------------------//

////////////////////////////////ENEMY FOUR////////////////////
void collisionCheckForEnemyfour();
bool enemyfourCheck=false;

//--------------------------------------------------|------------------------------------------------------//

////////////////////////////////ENEMY FIVE////////////////////
void collisionCheckForEnemyfive();
bool enemyfiveCheck=false;

//--------------------------------------------------|------------------------------------------------------//

////////////////////////////////ENEMY SIX////////////////////
void collisionCheckForEnemysix();
bool enemysixCheck=false;
//--------------------------------------------------|------------------------------------------------------//


////////////////////////////////ENEMY SEVEN////////////////////
void collisionCheckForEnemyseven();
bool enemysevenCheck=false;

//--------------------------------------------------|------------------------------------------------------//


////////////////////////////////////OBSTACLE///////////////////////////
//variables for spike type of obstacle 
	int obstacle;
	int obx=screenWidth;
	int oby=50;
	bool showOb=false;


//function for spike type of obstacle 
	void obs();

//--------------------------------------------------|------------------------------------------------------//

////////////////////////////////////////HEART//////////////////////////////
//variables for score collection/extra points (shape heart)
	int heart;
	int hx=screenWidth;
	int hy=400;
	bool showHeart=false;
	
//--------------------------------------------------|------------------------------------------------------//

/////////////////////////////////BIRDS FLYING////////////////////////////////
//inclusion of bird images
	//char images[9][15] = {"images\\a1.bmp","images\\a2.bmp","images\\a3.bmp","images\\a4.bmp","images\\a5.bmp","images\\a6.bmp","images\\a7.bmp","images\\a8.bmp","images\\a9.bmp"};
	int birdImage[9];
	//structure for birds
struct Bird{
	int bird_x;
	int bird_y;
	int bird_index;

};


//Bird variable
Bird bird[3];

//functions for birds
void changeBird();
void setBird();

//--------------------------------------------------|------------------------------------------------------//

///////////////////////////////////////////////SCORE//////////////////////////////////
//function for showing score in game over page
void ScoreDraw(){
	//iShowImage(790, 525, 200, 60, gameOver);
	sprintf(scoress, "%d", score);
	iSetColor(0,51,102);
	iText(200, 850, scoress, GLUT_BITMAP_TIMES_ROMAN_24);
	iText(20, 850, "SCORE : ", GLUT_BITMAP_TIMES_ROMAN_24);
}

//--------------------------------------------------|------------------------------------------------------//

////////////////////////////HIGHSCORE////////////////////////////////////////
/////////function for showing highscore in highscore page
void HighScoreShow(){
	FILE *fp = fopen("high_score.txt", "r");
	fscanf(fp, "%d", &highScore);

	sprintf(scoress, "%d", highScore);
	iSetColor(255,0,0);
	iText(900, 300, scoress, GLUT_BITMAP_TIMES_ROMAN_24);

	iText(700, 300, "High score : ", GLUT_BITMAP_TIMES_ROMAN_24);
	fclose(fp);
}


//function for calculating highscore
void HighScoreCalculate(){
	FinalScore = score;
	FILE *fp = fopen("high_score.txt", "r");
	fscanf(fp, "%d", &highScore);

	if (highScore < FinalScore){
		highScore = FinalScore;
		FILE *fp = fopen("high_score.txt", "w");
		fprintf(fp, "%d", highScore);
		fclose(fp);
	}
	fclose(fp);
}


//--------------------------------------------------|------------------------------------------------------//

/////////////////////////////////////////////JUMPING AND RUNNING////////////////////////
// the function is created for jumping and running

//My added Lines----------------------------------------------
bool playstart=false;
bool playstart2=false;
//--------------------------------------------------------------


//function for player jump and run

void jumpAndRun()
{
	if(playstart)
	{
	if (jump)
	{
		if (jumpUp)
		{
			iShowImage(playerCorX, playerCorY + playerCordinateJump, 220, 190, jumpOne);
			collisionCheck = false;
		}
		else
		{

			iShowImage(playerCorX, playerCorY + playerCordinateJump, 220, 190, jumpTwo);
			collisionCheck = false;
		}
		
	}
	else{
		if(playerDead==false)
			{
			iShowImage(playerCorX, playerCorY, 220, 190, pic[playerIndex]);
			collisionCheck = false;
			
			}
		else if(playerDead==true)
		{
			iShowImage(playerDeadX, playerDeadY, 220, 190, playerDeadImage[playerDeadIndex]);
		}

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
		if(jump)
	{
		bulx=15000;
		buly=15000;

	}
	else
	{bulx=90;
	buly=195;
	}
		if(jump)
	{
		bultwox=15000;
		bultwoy=15000;

	}
	else
	{bultwox=50;
	bultwoy=195;
	}
		if(jump)
	{
		bulthreex=15000;


		bulthreey=15000;

	}
	else
	{
	bulthreex=10;
	bulthreey=195;
	}
	
	}
	}

}


//--------------------------------------------------|------------------------------------------------------//


//the function for player shooting 
void FunctionForBullets()
{
	if(playstart)
	{
	if (bulletRun)
	{
		bulx += 4;
		if (bulx >= screenWidth-200)
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
			bulx += 4;
			if (bulx >= screenWidth-200)
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
}

//--------------------------------------------------|------------------------------------------------------//

//////////////////////////////////////////DRAWING OF LEVEL1/////////////////////////////


//iDraw Functions of level1
void drawFunctions()
{
	if(playstart)
	{
		///////////////BACKGROUND SHOWING//////////////
	for(int i=0;i<2;i++){
		iShowImage(background_x[i],0,1800,900,background[i]);
		}
		
	
	///////////////PLAYER BULLET ONE//////////////////////////
	iShowImage(bulx, buly, 50, 80 , bulletimage);
	iShowImage(bultwox, bultwoy, 50, 80 , btwoimage);
	iShowImage(bulthreex, bulthreey, 50, 80 , bthreeimage);


	///////////////PLAYER BULLET TWO//////////////////////////
	//code for player bullet two
	if(bullettwoRun)
	{
		bultwox+=4;
		if(bultwox>=screenWidth-200)
		{
			bullettwoRun=false;
		}
	}
		if(bullettwoRun)
		{
			bultwox+=4;
			if(bultwox>=screenWidth-200)
			{
				bullettwoRun=false;
				bultwox=50;
			}
		}


		if(bulletthreeRun)
	{
		bulthreex+=4;
		if(bulthreex>=screenWidth-200)
		{
			bulletthreeRun=false;
		}
	}
		if(bulletthreeRun)
		{
			bulthreex+=4;
			if(bulthreex>=screenWidth-200)
			{
				bulletthreeRun=false;
				bulthreex=10;
			}
		}
		

		////////////////////PLAYER JUMP AND BULLET SHOW//////////////////
	jumpAndRun();//for player
	FunctionForBullets();//for player
	
	/////////////////////////////BIRD RUNNING//////////////////////
	iShowImage(bird[0].bird_x,bird[0].bird_y,60,60,birdImage[bird[0].bird_index]);
		iShowImage(bird[1].bird_x,bird[1].bird_y,60,60,birdImage[bird[1].bird_index]);
		iShowImage(bird[2].bird_x,bird[2].bird_y,60,60,birdImage[bird[2].bird_index]);

	 
	
		
		
			iSetColor(139,0,0);
			iRectangle(enemyCorX, enemyCorY+250,100,20);
			iFilledRectangle(enemyCorX, enemyCorY+250,enemyLife/100,20);

			iRectangle(enemytwoCorX, enemytwoCorY+250,100,20);
			iFilledRectangle(enemytwoCorX, enemytwoCorY+250,enemytwoLife/100,20);

			iRectangle(enemythreeCorX, enemythreeCorY+250,100,20);
			iFilledRectangle(enemythreeCorX, enemythreeCorY+250,enemythreeLife/100,20);

			iRectangle(enemyfourCorX, enemyfourCorY+250,100,20);
			iFilledRectangle(enemyfourCorX, enemyfourCorY+250,enemyfourLife/100,20);

			iRectangle(enemyfiveCorX, enemyfiveCorY+250,100,20);
			iFilledRectangle(enemyfiveCorX, enemyfiveCorY+250,enemyfiveLife/100,20);

			iRectangle(enemysixCorX, enemysixCorY+250,100,20);
			iFilledRectangle(enemysixCorX, enemysixCorY+250,enemysixLife/100,20);

		
	/////////////////////////ENEMY ONE///////////////////////////
		iShowImage(bx, by, 25, 18, enemyBulletImage);//image for enemy bullet one
		iShowImage(enemyCorX, enemyCorY, 130, 230, enemypicture[enemyIndex]);//enemy image one
		
	/////////////////////////ENEMY TWO///////////////////////////
		iShowImage(btwox, btwoy, 25, 18, enemytwoBulletImage);//image for enemy bullet two
		iShowImage(enemytwoCorX, enemytwoCorY, 130, 230, enemytwopicture[enemytwoIndex]);//enemy image two

	/////////////////////////ENEMY THREE///////////////////////////
		iShowImage(bthreex, bthreey, 25, 18, enemythreeBulletImage);//image for enemy bullet three
		iShowImage(enemythreeCorX, enemythreeCorY, 130, 230, enemythreepicture[enemythreeIndex]);//enemy image three

	/////////////////////////ENEMY FOUR///////////////////////////
		iShowImage(bfourx, bfoury, 25, 18, enemyfourBulletImage);//image for enemy bullet four	
		iShowImage(enemyfourCorX, enemyfourCorY, 130, 230, enemyfourpicture[enemyfourIndex]);//enemy image three
		
	/////////////////////////ENEMY FIVE///////////////////////////
		iShowImage(bfivex, bfivey, 25, 18, enemyfiveBulletImage);//image for enemy bullet five
		iShowImage(enemyfiveCorX, enemyfiveCorY, 130, 230, enemyfivepicture[enemyfiveIndex]);//enemy image five
	
	/////////////////////////ENEMY SIX///////////////////////////
	iShowImage(bsixx, bsixy, 130, 70, enemysixBulletImage);//image for enemy bullet six
	iShowImage(enemysixCorX, enemysixCorY, 130, 230, enemysixpicture[enemysixIndex]);//enemy image six
	
	//////////////////////////////ENEMY SEVEN(BOSS/TANK)///////////////////////////
	if(enemysevenDead==false)
	{
		iShowImage(bsevenx, bseveny, 100, 200, enemysevenBulletImage);//image for enemy bullet seven
		iShowImage(enemysevenCorX, enemysevenCorY, 450, 200, enemysevenpicture[enemysevenIndex]);//enemy image seven
		enemysevenDeadX=enemysevenCorX;
		enemysevenDeadY=enemysevenCorY;
		iSetColor(139,0,0);
		iRectangle(enemysevenCorX, enemysevenCorY+250,1000,20);
		iFilledRectangle(enemysevenCorX, enemysevenCorY+250,enemysevenLife/100,20);
	}
	else if(enemysevenDead==true)
	{
		iShowImage(enemysevenDeadX, enemysevenDeadY, 300, 150, enemysevenDeadImage[enemysevenDeadIndex]);//enemy image seven
	}
	
	
	//////////////////////////////////SCORE///////////////////////
	ScoreDraw();
	
	/////////////////////HEALTH BAR DRAW////////////////////
	iSetColor(0,51,25);
	iText(10,800,"HEALTH BAR : ",GLUT_BITMAP_TIMES_ROMAN_24);
	iRectangle(250,800,100,40);
	iFilledRectangle(250,800,playerLife,40);
	
	////////////////////////////////////////OBSTACLE/////////////////////////
	iShowImage(obx, oby, 80, 80, obstacle);


	///////////////////////////////////HEART//////////////////////////////
	iShowImage(hx, hy, 80, 80, heart);

	//////////////////////////GAME OVER PAGE/////////////////////
	if(over)
	{
		iShowImage(0,0,1800,900,gameOver);
		iSetColor(0,128,128);
		iText(950,300,scoress,GLUT_BITMAP_TIMES_ROMAN_24);
	iText(800,300,"SCORE : ",GLUT_BITMAP_TIMES_ROMAN_24);
	
	}
	
	
	if(interLevelTwo)
	{
		iShowImage(0,0,1800,900,interlevelTwoImage);
		iSetColor(0,128,128);
		iText(950,300,scoress,GLUT_BITMAP_TIMES_ROMAN_24);
	iText(800,300,"SCORE : ",GLUT_BITMAP_TIMES_ROMAN_24);

	}
	}
	
}


//--------------------------------------------------|------------------------------------------------------//



///////////////////////ENEMY BULLET FUNCTION//////////////////////
void FucntionForEnemyBullet()
{
	
		if(playstart)
	{
		bx-=10;
		if (bx <= 0)
		{
			bx = enemyCorX;
		}
	
		collisionCheckForPlayer();

		if(enemyLife<=0)//enemy bullet two
	{
		btwox-=10;
		if (btwox <= 0)
		{
			btwox = enemytwoCorX;
		}
	
		collisionCheckForPlayer();
	}

		if(enemytwoLife<=0)//enemy bullet three
	{
		bthreex-=10;
		if (bthreex <= 0)
		{
			bthreex = enemythreeCorX;
		}
	
		collisionCheckForPlayer();
	}
		if(enemythreeLife<=0)//enemy bullet four
	{
		bfourx-=10;
		if (bfourx <= 0)
		{
			bfourx = enemyfourCorX;
		}
	
		collisionCheckForPlayer();
	}

		if(enemyfourLife<=0) //enemy bullet five
	{
		bfivex-=10;
		if (bfivex <= 0)
		{
			bfivex = enemyfiveCorX;
		}
	
		collisionCheckForPlayer();
	}	

		if(enemyfiveLife<=0)   //enemy bullet six
	{ 
		bsixx-=10;
		if (bsixx <= 0)
		{
			bsixx = enemysixCorX;
		}
	
		collisionCheckForPlayer();
	}
		
	if(enemysixLife<=0)   //enemy bullet seven
	{
		bsevenx-=10;
		if (bsevenx <= 0)
		{
			bsevenx = enemysevenCorX;
		}
		collisionCheckForPlayer();
	}
		}	
		
	
}


//--------------------------------------------------|------------------------------------------------------//


//////////////////FUNCTION FOR ENEMY AND PLAYER MOVEMENT/////////////////
void enemymove()
{
	//player movement also
	if(playstart)
	{
		

	playerIndex++;
	if (playerIndex >= 5)
	{
		playerIndex = 0;
	}
		
	
	if(playerDead==true)
	{
		playerCorX=150000;
		playerCorY=150000;
		bulx=15000;
		buly=15000;
		bultwox=15000;
		bultwoy=15000;
		bulthreex=15000;
		bulthreey=15000;
		playerDeadIndex++;
		
			if(playerDeadIndex>=8)
	{
			playerDeadX=150000;
			playerDeadY=150000;
			//over=true;	
	}
	}
	
		
	
	    //for enemy one

	enemyCorX -= 12;  
	enemyIndex++;
	if (enemyIndex >= 6)
	{
		enemyIndex = 0;
	}
	if (enemyCorX <= 1400)
	{
		enemyIndex++;
		if (enemyIndex >= 6)
		{
			enemyIndex = 0;
		}
		enemyCorX = 1400;
	}
	//enemy death funtion
	

	if(enemyLife<=0)   //for enemy two
	{
		enemytwoCorX -= 12;
	enemytwoIndex++;
	if (enemytwoIndex >= 6)
	{
		enemytwoIndex = 0;
	}
	if (enemytwoCorX <= 1400)
	{
		enemytwoIndex++;
		if (enemytwoIndex >= 6)
		{
			enemytwoIndex = 0;
		}
		enemytwoCorX = 1400;
	}
	}	

	if(enemytwoLife<=0)   //for enemy three
	{
		enemythreeCorX -= 12;
	enemythreeIndex++;
	if (enemythreeIndex >= 6)
	{
		enemythreeIndex = 0;
	}
	if (enemythreeCorX <= 1400)
	{
		enemythreeIndex++;
		if (enemythreeIndex >= 6)
		{
			enemythreeIndex = 0;
		}
		enemythreeCorX = 1400;
	}
	}	
	if(enemythreeLife<=0)   //for enemy four
	{
		enemyfourCorX -= 12;
	enemyfourIndex++;
	if (enemyfourIndex >= 6)
	{
		enemyfourIndex = 0;
	}
	if (enemyfourCorX <= 1400)
	{
		enemyfourIndex++;
		if (enemyfourIndex >= 6)
		{
			enemyfourIndex = 0;
		}
		enemyfourCorX = 1400;
	}
	}	
	
	if(enemyfourLife<=0)  //for enemy five
	{
		enemyfiveCorX -= 12;
	enemyfiveIndex++;
	if (enemyfiveIndex >= 6)
	{
		enemyfiveIndex = 0;
	}
	if (enemyfiveCorX <= 1400)
	{
		enemyfiveIndex++;
		if (enemyfiveIndex >= 6)
		{
			enemyfiveIndex = 0;
		}
		enemyfiveCorX = 1400;
	}
	}	

	if(enemyfiveLife<=0)  //for enemy six
	{
		enemysixCorX -= 12;
	enemysixIndex++;
	if (enemysixIndex >= 6)
	{
		enemysixIndex = 0;
	}
	if (enemysixCorX <= 1400)
	{
		enemysixIndex++;
		if (enemysixIndex >= 6)
		{
			enemysixIndex = 0;
		}
		enemysixCorX = 1400;
	}
	}

	if(enemysixLife<=0)//for enemy seven
	{
		enemysevenCorX -= 12;
	enemysevenIndex++;
	if (enemysevenIndex >= 6)
	{
		enemysevenIndex = 0;
	}
	if (enemysevenCorX <= 1300)
	{
		enemysevenIndex++;
		if (enemysevenIndex >= 6)
		{
			enemysevenIndex = 0;
		}
		enemysevenCorX = 1300;
	}
	}
	if(enemysevenDead==true)
	{
		enemysevenDeadIndex++;
		if(enemysevenDeadIndex>=7)
		{
			enemysevenDeadX=150000;
			enemysevenDeadY=150000;
			interLevelTwo=true;
		}
	}
	}
}


//--------------------------------------------------|------------------------------------------------------//



/////////////////////////////////////////////////////////COLLISSION CHECK FUNCTIONS/////////////////////////////////////////


/////////////////////////////////////////////////PLAYER////////////////////////////////
void collisionCheckForPlayer()
{
	if(playstart)
	{
	collisionCheck = true;
	//playerDead=false;
	if(jump)
	{
		if(hx+80>playerCorX && hx<playerCorX+130 && collisionCheck==true )
	{
		score+=5;
	
	}
	}
	
	collisionCheck = true;
	if (jump)
	{
		collisionCheck = false;
	}
	else if (bx + 25 > playerCorX && bx < playerCorX + 130 && collisionCheck==true)
	{
		playerLife -= 1;
		//printf("%d\n", playerLife);
		if (playerLife <= 0)
		{
			//playerCorX = 1500000;
			//playerCorY = 1500000;
			playerDead=true;
			bulx=1500000;
			
			//collisionCheck = true;
		}
	}
	collisionCheck = true;
	if (jump)
	{
		collisionCheck = false;
	}
	else if (obx + 80 > playerCorX && obx < playerCorX + 130 && collisionCheck==true )
	{
		playerLife -= 1;
		printf("%d\n", playerLife);
		if (playerLife <= 0 )
		{
			//playerCorX = 1500000;
			//playerCorY = 1500000;
			bulx=1500000;
			playerDead=true;
			//collisionCheck = true;
		}
	}
	// collision for obstacle
	collisionCheck = true;
	if (jump)
	{
		collisionCheck = false;
	}
	else if (btwox + 25 > playerCorX && btwox < playerCorX + 130 && collisionCheck==true)
	{
		playerLife -= 1;
		//printf("%d\n", playerLife);
		if (playerLife <= 0)
		{
			//playerCorX = 1500000;
			//playerCorY = 1500000;
			bulx=1500000;
			playerDead=true;
			//collisionCheck = true;
		}
	}

	collisionCheck = true;
	if (jump)
	{
		collisionCheck = false;
	}
	else if (bthreex + 25 > playerCorX && bth reex < playerCorX + 130 && collisionCheck==true)
	{
		playerLife -= 1;
		//printf("%d\n", playerLife);
		if (playerLife <= 0)
		{
			//playerCorX = 1500000;
			//playerCorY = 1500000;
			bulx=1500000;
			playerDead=true;
			//collisionCheck = true;
		}
	}

	collisionCheck = true;
	if (jump)
	{
		collisionCheck = false;
	}
	else if (bfourx + 25 > playerCorX && bfourx < playerCorX + 130 && collisionCheck==true)
	{
		playerLife -= 1;
		//printf("%d\n", playerLife);
		if (playerLife <= 0)
		{
			//playerCorX = 1500000;
			//playerCorY = 1500000;
			bulx=1500000;
			playerDead=true;
			//collisionCheck = true;
		}
	}

	collisionCheck = true;
	if (jump)
	{
		collisionCheck = false;
	}
	else if (bfivex + 25 > playerCorX && bfivex < playerCorX + 130 && collisionCheck==true)
	{
		playerLife -= 1;
		//printf("%d\n", playerLife);
		if (playerLife <= 0)
		{
			//playerCorX = 1500000;
			//playerCorY = 1500000;
			bulx=1500000;
			playerDead=true;
			//collisionCheck = true;
		}
	}
	collisionCheck = true;
	if (jump)
	{
		collisionCheck = false;
	}
	else if (bsixx + 25 > playerCorX && bsixx < playerCorX + 130 && collisionCheck==true )
	{
		playerLife -= 1;
		//printf("%d\n", playerLife);
		if (playerLife <= 0)
		{
			//playerCorX = 1500000;
			//playerCorY = 1500000;
			bulx=1500000;
			playerDead=true;
			//collisionCheck = true;
		}
	}

	collisionCheck = true;
	if (jump)
	{
		collisionCheck = false;
	}
	else if (bsevenx + 42 > playerCorX && bsevenx < playerCorX + 130 && collisionCheck==true)
	{
		playerLife -= 1;
		//printf("%d\n", playerLife);
		if (playerLife <= 0)
		{
			//playerCorX = 1500000;
			//playerCorY = 1500000;
			bulx=1500000;
			playerDead=true;
			//collisionCheck = true;
		}
	}
	if(playerDeadIndex==8)
	{
		over =true;
	}
	}
	
}

//--------------------------------------------------|------------------------------------------------------//


/////////////////////////////////////////////////ENEMY ONE////////////////////////////////
void collisionCheckForEnemy()
{
	if(playstart)
	{
	enemyCheck=true;
	 if (bulx + 40 > enemyCorX && bulx <enemyCorX+ 130 && enemyCheck==true)
	{
		enemyLife -= 100;
		//printf("      %d\n",enemyLife);
		if (enemyLife <= 0)
		{
			score+=100;
			bx=1500000;
			enemyCorX=150000;
			enemyCorY=150000;
		}
	 }
	}
}
//--------------------------------------------------|------------------------------------------------------//



/////////////////////////////////////////////////ENEMY TWO////////////////////////////////
void collisionCheckForEnemytwo()
{
	if(playstart)
	{
	enemytwoCheck=true;
	 if (bulx + 40 > enemytwoCorX && bulx <enemytwoCorX+ 130 && enemytwoCheck==true)
	{
		enemytwoLife -= 100;
		//printf("         %d\n",enemyLife);
		if (enemytwoLife <= 0)
		{
			score+=100;
			enemytwoCorX = 1500000;
			enemytwoCorY = 1500000;
			btwox=1500000;
		}
	 }
	}
}
//--------------------------------------------------|------------------------------------------------------//



/////////////////////////////////////////////////ENEMY THREE////////////////////////////////
void collisionCheckForEnemythree()
{
	if(playstart)
	{
	enemythreeCheck=true;
	 if (bulx + 40 > enemythreeCorX && bulx <enemythreeCorX+ 130 && enemythreeCheck==true)
	{
		enemythreeLife -= 100;
		//printf("         %d\n",enemyLife);
		if (enemythreeLife <= 0)
		{
			score+=100;
			enemythreeCorX = 1500000;
			enemythreeCorY = 1500000;
			bthreex=1500000;
		}
	 }
	}
}
//--------------------------------------------------|------------------------------------------------------//



/////////////////////////////////////////////////ENEMY FOUR////////////////////////////////
void collisionCheckForEnemyfour()
{
	if(playstart)
	{
	enemyfourCheck=true;
	 if (bulx + 40 > enemyfourCorX && bulx <enemyfourCorX+ 130 && enemyfourCheck==true)
	{
		enemyfourLife -= 100;
		//printf("         %d\n",enemyLife);
		if (enemyfourLife <= 0)
		{
			score+=100;
			enemyfourCorX = 1500000;
			enemyfourCorY = 1500000;
			bfourx=1500000;
		}
	 }
	}
}
//--------------------------------------------------|------------------------------------------------------//


/////////////////////////////////////////////////ENEMY FIVE////////////////////////////////
void collisionCheckForEnemyfive()
{
	if(playstart)
	{
	enemyfiveCheck=true;
	 if (bulx +40 > enemyfiveCorX && bulx <enemyfiveCorX+ 130 && enemyfiveCheck==true)
	{
		enemyfiveLife -= 100;
		//printf("         %d\n",enemyLife);
		if (enemyfiveLife <= 0)
		{
			score+=100;
			enemyfiveCorX = 1500000;
			enemyfiveCorY = 1500000;
			bfivex=1500000;
		}
	 }
	}
}
//--------------------------------------------------|------------------------------------------------------//


/////////////////////////////////////////////////ENEMY SIX////////////////////////////////
void collisionCheckForEnemysix()
{
	if(playstart)
	{
	enemysixCheck=true;
	 if (bulx + 40 > enemysixCorX && bulx <enemysixCorX+ 130 && enemysixCheck==true)
	{
		enemysixLife -= 100;
		//printf("         %d\n",enemyLife);
		if (enemysixLife <= 0)
		{
			score+=100;
			enemysixCorX = 1500000;
			enemysixCorY = 1500000;
			bsixx=1500000;
		}
	 }
	}
}
//--------------------------------------------------|------------------------------------------------------//


/////////////////////////////////////////////////ENEMY SEVEN(BOSS/TANK)////////////////////////////////
void collisionCheckForEnemyseven()
{
	if(playstart)
	{
	enemysevenCheck=true;
	 if (bulx + 40 > enemysevenCorX && bulx <enemysevenCorX+ 450 && enemysevenCheck==true) //change this code
	{
		enemysevenLife -= 100;
		//printf("         %d\n",enemyLife);
		if (enemysevenLife <= 0)
		{
			score+=500;
			bsevenx=1500000;
			enemysevenDead=true;
			//interLevelTwo=true;
		}
	 }
	}
}
//--------------------------------------------------|------------------------------------------------------//


///////////////////////FUNCTION FOR OBSTACLE AND EXTRA POINT/HEART///////////////////////////
void obs()              //obstacle
{
	if(playstart)
	{
	obx-=10;
	if(obx<=0)
	{
		obx=screenWidth;
	}
	collisionCheckForPlayer();
	hx-=12;
	//hy=400+rand()%100;
	
	if(hx<=0)
	{
		hx=screenWidth;
	}
	}
}
//--------------------------------------------------|------------------------------------------------------//



////////////////////////////BIRD FUNCTIONS///////////////////////////////

//FOR setting values
void setBird()
{
	for(int i = 0 ; i<3 ; i++)
	{
		bird[i].bird_x = 0;
		
		bird[i].bird_index = 0;
	}

	bird[0].bird_y = 850;
	bird[1].bird_y = 800;
	bird[2].bird_y = 750;
}
//--------------------------------------------------|------------------------------------------------------//

//for bird movement
void changeBird()
{
	int sum = 5;
	for(int i =0 ; i<3 ; i++)
	{
		bird[i].bird_x += sum;
		sum+=2;

		if(bird[i].bird_x>=1800)
		{
			bird[i].bird_x = 0;
		}

		bird[i].bird_index++;

		if(bird[i].bird_index >= 9)
		{
			bird[i].bird_index = 0;
		}


	}
	
}
//--------------------------------------------------|------------------------------------------------------//