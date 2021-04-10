#define LEVEL2_H_INCLUDED

////////////////////////////////////////VARIABLE AND FUNCTION DECLARATION///////////////////


//////////////////////////////////////////////BACKGROUND///////////////////////////////
//variables for level2 background
int LevelTwoBackground_x[] = {0 , 1800};

//image variables for level2 background
int LevelTwoBackgroundImages[2];

//function for level2 background
void LevelTwoChangeBackground();

//////////------------------------------------------------|-------------------------------------------------////////////////////

///////////////////////////////////////////////GAME OVER////////////////////////////////
// variables for Game over page
int gameOver2;
bool over2=false;

//////////------------------------------------------------|-------------------------------------------------////////////////////


///////////////////////////////////////////////PLAYER MOVEMENT///////////////////////


//variables for movement of player
int planImage[4];
int planCorX=0;
int planCorY=20;
int planIndex=0;
int planLife=10000;
int bar=planLife/20;


//function for movement of player
void planChange();

//////////------------------------------------------------|-------------------------------------------------////////////////////


///////////////////////////PLAYER BULLET ONE////////////////////


//variables for movement of player bullet
int LevelTwoBulletImage;
int bulletx = 130;                           
int bullety = 25;
bool bulletMove = false;

//function for movement of player bullet
void planBullets();


//////////------------------------------------------------|-------------------------------------------------////////////////////

///////////////////////////PLAYER BULLET TWO////////////////////


//variables for movement of player bullet two
int bulletimagetwo;
int bullettwox =130;                           
int bullettwoy = 30;
bool bullettwoMove = false;

//function for movement of player bullet two
void plantwoBullets();

//////////------------------------------------------------|-------------------------------------------------////////////////////


///////////////////////////PLAYER BULLET THREE////////////////////


//variables for movement of player bullet three
int bulletimagethree;
int bulletthreex = 130;                           
int bulletthreey = 60;
bool bulletthreeMove = false;

//function for movement of player bullet three
void planthreeBullets();

//////////------------------------------------------------|-------------------------------------------------////////////////////


//////////////////////////////////ENEMY ONE//////////////////////////
//variables for enemy one 
int enemypic[4];
int enemyX=screenWidth;
int enemyY=100;
int enemyIn = 0;
int enemylife = 1000;

//function for enemy one
void enemyRun();
//showing death of enemy one
int dead1image[8];
int dead1x;
int dead1y;
int dead1index=0;
bool dead1=false;
//////////------------------------------------------------|-------------------------------------------------////////////////////

////////////////////////////////////////ENEMY ONE  BULLET////////////////////////////
//variables for enemy one bullet 
int enemyBulletPic;
int enemybx =enemyY+20;
int enemyby = 120;
bool showEnemyBullet = false;

//function for enemy one bullet
void EnemyBullet();


//////////------------------------------------------------|-------------------------------------------------////////////////////


//////////////////////////////////ENEMY TWO//////////////////////////
//variables for enemy two
int enemytwopic[4];
int enemytwoX=screenWidth;
int enemytwoY=800;
int enemytwoIn = 0;
int enemytwolife = 1000;
//function for enemy two
void enemytwoRun();

//showing death of enemy two
int dead2image[8];
int dead2x;
int dead2y;
int dead2index=0;
bool dead2=false;
//////////------------------------------------------------|-------------------------------------------------////////////////////

////////////////////////////////////////ENEMY TWO BULLET////////////////////////////
//variables for enemy two bullet
int enemytwoBulletPic;
int enemytwobx = enemytwoY+20;
int enemytwoby = 820;
bool enemybulletShow = false;

//function for enemy two bullet
void EnemytwoBullet();

//////////------------------------------------------------|-------------------------------------------------////////////////////


//////////////////////////////////ENEMY THREE//////////////////////////
///variables for enemy three
int enemythreepic[4];
int enemythreeX=screenWidth+400;
int enemythreeY=500;
int enemythreeIn = 0;
int enemythreelife = 1000;
bool e3=false;
//function for enemy three
void enemythreeRun();

//showing death of enemy one
int dead3image[8];
int dead3x;
int dead3y;
int dead3index=0;
bool dead3=false;

//////////------------------------------------------------|-------------------------------------------------////////////////////


////////////////////////////////////////ENEMY THREE BULLET////////////////////////////
//variables for enemy three bullet
int enemythreeBulletPic;
int enemythreebx = enemythreeX;
int enemythreeby = 520;
bool showEnemythreeBullet = false;

//function for enemy three bullet
void EnemythreeBullet();


//////////------------------------------------------------|-------------------------------------------------////////////////////


//////////////////////////////////ENEMY FOUR//////////////////////////

//variables for enemy four  (the enemy which will come after the enemy one)
int enemyfourpic[4];
int enemyfourX=screenWidth+500;
int enemyfourY=200;
int enemyfourIn = 0;
int enemyfourlife = 1000;
bool e4=false;
//function for enemy four
void enemyfourRun();
//showing death of enemy 4
int dead4image[8];
int dead4x;
int dead4y;
int dead4index=0;
bool dead4=false;

//////////------------------------------------------------|-------------------------------------------------////////////////////


////////////////////////////////////////ENEMY FOUR BULLET////////////////////////////
//variables for enemy four bullet
int enemyfourBulletPic;
int enemyfourbx = enemyfourX;
int enemyfourby = 220;

//function for enemy four bullet
void EnemyfourBullet();


//////////------------------------------------------------|-------------------------------------------------////////////////////


//////////////////////////////////ENEMY FIVE//////////////////////////
//variables for enemy five (behind enemy three)
int enemyfivepic[4];
int enemyfiveX=screenWidth+680;
int enemyfiveY=500;
int enemyfiveIn = 0;
int enemyfivelife = 1000;
bool e5=false;
//function for enemy five
void enemyfiveRun();
//showing death of enemy 5
int dead5image[8];
int dead5x;
int dead5y;
int dead5index=0;
bool dead5=false;

//////////------------------------------------------------|-------------------------------------------------////////////////////


////////////////////////////////////////ENEMY FIVE BULLET////////////////////////////
//variables for enemy five bullet
int enemyfiveBulletPic;
int enemyfivebx = enemyfiveX;
int enemyfiveby = 520;

//function for enemy five bullet
void EnemyfiveBullet();

//////////------------------------------------------------|-------------------------------------------------////////////////////


//////////////////////////////////ENEMY SIX//////////////////////////
//variables for enemy six(behind enemy five)
int enemysixpic[4];
int enemysixX=screenWidth+940;
int enemysixY=400;
int enemysixIn = 0;
int enemysixlife = 1000;
bool e6=false;
//function for enemy six
void enemysixRun();

//showing death of enemy 6
int dead6image[8];
int dead6x;
int dead6y;
int dead6index=0;
bool dead6=false;
//////////------------------------------------------------|-------------------------------------------------////////////////////


////////////////////////////////////////ENEMY SIX BULLET////////////////////////////
//variables for enemy six bullet
int enemysixBulletPic;
int enemysixbx = enemysixX;
int enemysixby = 420;

//function for enemy six bullet
void EnemysixBullet();


//////////------------------------------------------------|-------------------------------------------------////////////////////


//////////////////////////////////ENEMY SEVEN//////////////////////////
//variables for enemy seven(behind enemy four)
int enemysevenpic[4];
int enemysevenX=screenWidth+950;
int enemysevenY=150;
int enemysevenIn = 0;
int enemysevenlife = 1000;
bool e7=false;
//function for enemy seven
void enemysevenRun();
//showing death of enemy 7
int dead7image[8];
int dead7x;
int dead7y;
int dead7index=0;
bool dead7=false;

//////////------------------------------------------------|-------------------------------------------------////////////////////


////////////////////////////////////////ENEMY SEVEN BULLET////////////////////////////
//variables for enemy seven bullet
int enemysevenBulletPic;
int enemysevenbx = enemysevenX;
int enemysevenby = 170;

//function for enemy seven bullet
void EnemysevenBullet();

//////////------------------------------------------------|-------------------------------------------------////////////////////


//////////////////////////////////ENEMY EIGHT//////////////////////////
//variables for enemy eight(behind enemy two)
int enemyeightpic[4];
int enemyeightX=screenWidth+560;
int enemyeightY=750;
int enemyeightIn = 0;
int enemyeightlife = 1000;
bool e8=false;
//function for enemy eight
void enemyeightRun();
//showing death of enemy 8
int dead8image[8];
int dead8x;
int dead8y;
int dead8index=0;
bool dead8=false;

//////////------------------------------------------------|-------------------------------------------------////////////////////

////////////////////////////////////////ENEMY EIGHT BULLET////////////////////////////
//variables for enemy eight bullet
int enemyeightBulletPic;
int enemyeightbx = enemyeightX;
int enemyeightby = 770;

//function for enemy eight bullet
void EnemyeightBullet();


//////////------------------------------------------------|-------------------------------------------------////////////////////


//////////////////////////////////ENEMY NINE//////////////////////////
//variables for enemy nine(behind enemy five and up enemy six)
int enemyninepic[4];
int enemynineX=screenWidth+960;
int enemynineY=550;
int enemynineIn = 0;
int enemyninelife = 1000;
bool e9=false;

//function for enemy nine
void enemynineRun();

//showing death of enemy 9
int dead9image[8];
int dead9x;
int dead9y;
int dead9index=0;
bool dead9=false;

//////////------------------------------------------------|-------------------------------------------------////////////////////


////////////////////////////////////////ENEMY NINE BULLET////////////////////////////
//variables for enemy nine bullet
int enemynineBulletPic;
int enemyninebx = enemynineX;
int enemynineby = 570;

//function for enemy nine bullet
void EnemynineBullet();


//////////------------------------------------------------|-------------------------------------------------////////////////////


//////////////////////////////////ENEMY TEN//////////////////////////
//variables for enemy ten(behind enemy eight and up of enemy nine)
int enemytenpic[4];
int enemytenX=screenWidth+950;
int enemytenY=750;
int enemytenIn = 0;
int enemytenlife = 1000;
bool e10=false;

//function for enemy ten
void enemytenRun();

//showing death of enemy 10
int dead10image[8];
int dead10x;
int dead10y;
int dead10index=0;
bool dead10=false;

//////////------------------------------------------------|-------------------------------------------------////////////////////

////////////////////////////////////////ENEMY TEN BULLET////////////////////////////
//variables for enemy ten bullet
int enemytenBulletPic;
int enemytenbx = enemytenX;
int enemytenby = 770;

//function for enemy ten bullet
void EnemytenBullet();


//////////------------------------------------------------|-------------------------------------------------////////////////////


//////////////////////////////////ENEMY ELEVEN//////////////////////////
//variables for enemy eleven(behind enemy ten)
int enemyelevenpic[4];
int enemyelevenX=screenWidth+1300 ;
int enemyelevenY=750;
int enemyelevenIn = 0;
int enemyelevenlife = 1000;
bool e11=false;

//function for enemy eleven
void enemyelevenRun();
//showing death of enemy 11
int dead11image[8];
int dead11x;
int dead11y;
int dead11index=0;
bool dead11=false;

//////////------------------------------------------------|-------------------------------------------------////////////////////


////////////////////////////////////////ENEMY ELEVEN BULLET////////////////////////////
//variables for enemy eleven bullet
int enemyelevenBulletPic;
int enemyelevenbx = enemyelevenX;
int enemyelevenby = 770;

//function for enemy eleven bullet
void EnemyelevenBullet();


//////////------------------------------------------------|-------------------------------------------------////////////////////


//////////////////////////////////ENEMY TWELVE//////////////////////////
//variables for enemy twelve(behind enemy seven)
int enemytwelvepic[4];
int enemytwelveX=screenWidth+1300;
int enemytwelveY=150;
int enemytwelveIn = 0;
int enemytwelvelife = 1000;
bool e12=false;

//function for enemy twelve
void enemytwelveRun();

//showing death of enemy 12
int dead12image[8];
int dead12x;
int dead12y;
int dead12index=0;
bool dead12=false;
//////////------------------------------------------------|-------------------------------------------------////////////////////


////////////////////////////////////////ENEMY TWELVE BULLET////////////////////////////

//variables for enemy twelve bullet
int enemytwelveBulletPic;
int enemytwelvebx = enemytwelveX;
int enemytwelveby = 170;

//function for enemy twelve bullet
void EnemytwelveBullet();

//////////------------------------------------------------|-------------------------------------------------////////////////////


//////////////////////////////////ENEMY THIRTEEN//////////////////////////
//variables for enemy thirteen()
int enemythirteenpic[4];
int enemythirteenX=screenWidth+1400;
int enemythirteenY=550;
int enemythirteenIn = 0;
int enemythirteenlife = 1000;
bool e13=false;
//function for enemy thirteen
void enemythirteenRun();
//showing death of enemy 13
int dead13image[8];
int dead13x;
int dead13y;
int dead13index=0;
bool dead13=false;
//////////------------------------------------------------|-------------------------------------------------////////////////////


////////////////////////////////////////ENEMY THIRTEEN BULLET////////////////////////////
//variables for enemy thirteen bullet
int enemythirteenBulletPic;
int enemythirteenbx = enemynineX;
int enemythirteenby = 570;


//function for enemy thirteen bullet
void EnemythirteenBullet();


//////////------------------------------------------------|-------------------------------------------------////////////////////

//////////////////////////////////ENEMY FOURTEEN//////////////////////////
//variables for enemy fourteen()
int enemyfourteenpic[4];
int enemyfourteenX=screenWidth+1400;
int enemyfourteenY=300;
int enemyfourteenIn = 0;
int enemyfourteenlife = 1000;
bool e14=false;

//function for enemy fourteen
void enemyfourteenRun();
//showing death of enemy 14
int dead14image[8];
int dead14x;
int dead14y;
int dead14index=0;
bool dead14=false;
//////////------------------------------------------------|-------------------------------------------------////////////////////


////////////////////////////////////////ENEMY FOURTEEN BULLET////////////////////////////

//variables for enemy fourteen  bullet
int enemyfourteenBulletPic;
int enemyfourteenbx = enemyfourteenX;
int enemyfourteenby = 320;

//function for enemy fourteen bullet
void EnemyfourteenBullet();


//////////------------------------------------------------|-------------------------------------------------////////////////////

//////////////////////////////////ENEMY FIFTEEN//////////////////////////

//variables for enemy fifteen()
int enemyfifteenpic[4];
int enemyfifteenX=screenWidth+1900;
int enemyfifteenY=100;
int enemyfifteenIn = 0;
int enemyfifteenlife = 1000;
bool e15=false;

//function for enemy fifteen
void enemyfifteenRun();

//////////------------------------------------------------|-------------------------------------------------////////////////////


////////////////////////////////////////ENEMY FIFTEEN BULLET////////////////////////////
//variables for enemy fifteen bullet
int enemyfifteenBulletPic;
int enemyfifteenbx = enemyfifteenX;
int enemyfifteenby = enemyfifteenY+50;

//function for enemy fifteen bullet
void EnemyfifteenBullet();


//variables for enemy bullet  two for fifteen enemy
int bossbullet;
int bossx = enemyfifteenX;
int bossy = enemyfifteenY+20;

//showing death of enemy fifteen
int dead15image[8];
int dead15x;
int dead15y;
int dead15index=0;
bool dead15=false;
//////////------------------------------------------------|-------------------------------------------------////////////////////







/////////////////////////////////////////////////////COLLISSION FOR PLAYER AND ENEMY/////////////////////////////
//variables and functions for collision 

//////////////////////////////////////////////PLAYER///////////////////////////////////
void collisionPlan();
bool collisionCheckPlan = false;

void collisionPlantwo();
bool collisionCheckPlantwo = false;

///////////////////////////ENEMY ONE/////////////////////////////////

void collisionEnemy();
bool collisionCheckEnemy=false;

///////////////////////////ENEMY TWO/////////////////////////////////

void collisionEnemytwo();
bool collisionCheckEnemytwo=false;

///////////////////////////ENEMY THREE/////////////////////////////////

void collisionEnemythree();
bool collisionCheckEnemythree=false;

///////////////////////////ENEMY FOUR/////////////////////////////////

void collisionEnemyfour();
bool collisionCheckEnemyfour=false;

///////////////////////////ENEMY FIVE/////////////////////////////////

void collisionEnemyfive();
bool collisionCheckEnemyfive=false;


///////////////////////////ENEMY SIX/////////////////////////////////

void collisionEnemysix();
bool collisionCheckEnemysix=false;


///////////////////////////ENEMY SEVEN/////////////////////////////////

void collisionEnemyseven();
bool collisionCheckEnemyseven=false;


///////////////////////////ENEMY EIGHT/////////////////////////////////

void collisionEnemyeight();
bool collisionCheckEnemyeight=false;

///////////////////////////ENEMY NINE/////////////////////////////////

void collisionEnemynine();
bool collisionCheckEnemynine=false;

///////////////////////////ENEMY TEN/////////////////////////////////

void collisionEnemyten();
bool collisionCheckEnemyten=false;

///////////////////////////ENEMY ELEVEN/////////////////////////////////

void collisionEnemyeleven();
bool collisionCheckEnemyeleven=false;

///////////////////////////ENEMY TWELVE/////////////////////////////////

void collisionEnemytwelve();
bool collisionCheckEnemytwelve=false;

///////////////////////////ENEMY THIRTEEN/////////////////////////////////

void collisionEnemythirteen();
bool collisionCheckEnemythirteen=false;

///////////////////////////ENEMY FOURTEEN/////////////////////////////////

void collisionEnemyfourteen();
bool collisionCheckEnemyfourteen=false;

///////////////////////////ENEMY FIFTEEN/////////////////////////////////

void collisionEnemyfifteen();
bool collisionCheckEnemyfifteen=false;


//////////------------------------------------------------|-------------------------------------------------////////////////////


//////////////////////////////////BACKGROUND CHANGE FUNCTION///////////////////////

//function level2 background change
void LevelTwoChangeBackground()
{
	if(playstart2)
	{
	for(int i =0 ; i<2 ; i++)
	{
		LevelTwoBackground_x[i] -= 10;
		if(LevelTwoBackground_x[i]<=-1800)
		{
			LevelTwoBackground_x[i] = 1800;
		}
	}
	}
}

//////////------------------------------------------------|-------------------------------------------------////////////////////


 //////////////////////////////////////////DRAWING OF LEVEL TWO/////////////////////////////


//iDraw Functions of level2
void LevelTwoDrawFunctions()
{
	
	iClear();
	if(playstart2)
	{

		///////////////////BACKGROUND DRAWING///////////////////////////////
	for(int i = 0; i<2 ;i++)
	{
		iShowImage(LevelTwoBackground_x[i],0,1800,900,LevelTwoBackgroundImages[i]);
	}

	////////////////////////////////PLAYER BULLET///////////////////////////////
	iShowImage(bulletx ,bullety,50,50,LevelTwoBulletImage);
	iShowImage(bullettwox ,bullettwoy,80,80,bulletimagetwo);
	iShowImage(bulletthreex ,bulletthreey,50,50,bulletimagethree);

	//////////////////////////PLAYER CO-ORDINATES/////////////////////////////
	iShowImage(planCorX ,planCorY,300,100,planImage[planIndex]);
	
	//////////////////PLAYER BULLETS////////////////////
	if (bulletMove)
	{
		bulletx +=4;
		if (bulletx >= screenWidth)
			bulletMove = false;
		
	}
	if (bulletMove)
	{
		{
			bulletx +=4;
			if (bulletx >= screenWidth)
			{
				
				
			}
		}
	}


	if (bullettwoMove)
	{
		bullettwox +=4;
		if (bullettwox >= screenWidth)
			bullettwoMove = false;
		collisionEnemy();
		 collisionEnemytwo();
		 collisionEnemythree();
		 collisionEnemyfour();
		 collisionEnemyfive();
		 collisionEnemysix();
		 collisionEnemyseven();
		 collisionEnemyeight();
		 collisionEnemynine();
		 collisionEnemyten();
		 collisionEnemyeleven();
		 collisionEnemytwelve();
		 collisionEnemythirteen();
		 collisionEnemyfourteen();
		 collisionEnemyfifteen();
	}
	if (bullettwoMove)
	{
		{
			bullettwox +=4;
			if (bullettwox >= screenWidth)
			{
				bullettwoMove = false;
				bullettwox = 130;
				bulletMove = false;
				bulletx = 130;
				collisionEnemy();
				collisionEnemytwo();
				collisionEnemythree();
				collisionEnemyfour();
				collisionEnemyfive();
				collisionEnemysix();
				collisionEnemyseven();
				collisionEnemyeight();
				collisionEnemynine();
				collisionEnemyten();
				collisionEnemyeleven();
				collisionEnemytwelve();
				collisionEnemythirteen();
				collisionEnemyfourteen();
				collisionEnemyfifteen();
			}
		}
	}

	if (bulletthreeMove)
	{
		bulletthreex +=4;
		if (bulletthreex >= screenWidth)
			bulletthreeMove = false;
	}
	if (bulletthreeMove)
	{
		{
			bulletthreex +=4;
			if (bulletthreex >= screenWidth)
			{
				bulletthreeMove = false;
				bulletthreex = 130;
			}
		}
	}
	
	/////////////////////////////////ENEMY ONE/////////////////////////////////
	
	if(dead1==false)
	{
		iShowImage(enemyX, enemyY, 300, 90, enemypic[enemyIn]);
		iShowImage(enemybx, enemyby, 50, 60, enemyBulletPic);
		dead1x=enemyX;
		dead1y=enemyY;
		iSetColor(255,153,153);
		iRectangle(enemyX+50,enemyY+100,200,20);
		iFilledRectangle(enemyX+50,enemyY+100,enemylife/5,20);

	}
	else if(dead1==true)
	{
		iShowImage(dead1x, dead1y, 250, 120, dead1image[dead1index]);
	}
	
	/////////////////////////////////ENEMY TWO/////////////////////////////////

	if(dead2==false)
	{
		iShowImage(enemytwoX, enemytwoY, 300, 90, enemytwopic[enemytwoIn]);
		iShowImage(enemytwobx, enemytwoby, 50, 60, enemytwoBulletPic);
		dead2x=enemytwoX;
		dead2y=enemytwoY;
		iSetColor(255,153,153);
		iRectangle(enemytwoX+50,enemytwoY+100,200,20);
		iFilledRectangle(enemytwoX+50,enemytwoY+100,enemytwolife/5,20);
	}
	else if(dead2==true)
	{
		iShowImage(dead2x, dead2y, 250, 120, dead2image[dead2index]);
	}
	
	
	/////////////////////////////////ENEMY THREE/////////////////////////////////
	
	if(dead3==false)
	{
		iShowImage(enemythreeX, enemythreeY, 300, 90, enemythreepic[enemythreeIn]);
		iShowImage(enemythreebx, enemythreeby, 50, 60, enemythreeBulletPic);
		dead3x=enemythreeX;
		dead3y=enemythreeY;
		iSetColor(255,153,153);
		iRectangle(enemythreeX+50,enemythreeY+100,200,20);
		iFilledRectangle(enemythreeX+50,enemythreeY+100,enemythreelife/5,20);

	}
	else if(dead3==true)
	{
		iShowImage(dead3x, dead3y, 250, 120, dead3image[dead3index]);
	}

	/////////////////////////////////ENEMY FOUR/////////////////////////////////

	if(dead4==false)
	{
		iShowImage(enemyfourX, enemyfourY, 300, 90, enemyfourpic[enemyfourIn]);
		iShowImage(enemyfourbx, enemyfourby, 50, 60, enemyfourBulletPic);
		dead4x=enemyfourX;
		dead4y=enemyfourY;
		iSetColor(255,153,153);
		iRectangle(enemyfourX+50,enemyfourY+100,200,20);
		iFilledRectangle(enemyfourX+50,enemyfourY+100,enemyfourlife/5,20);
	}
	else if(dead4==true)
	{
		iShowImage(dead4x, dead4y, 250, 120, dead4image[dead4index]);
	}

	/////////////////////////////////ENEMY FIVE/////////////////////////////////

	
	if(dead5==false)
	{
		iShowImage(enemyfiveX, enemyfiveY, 300, 90, enemyfivepic[enemyfiveIn]);
		iShowImage(enemyfivebx, enemyfiveby, 50, 60, enemyfiveBulletPic);
		dead5x=enemyfiveX;
		dead5y=enemyfiveY;
		iSetColor(255,153,153);
		iRectangle(enemyfiveX+50,enemyfiveY+100,200,20);
		iFilledRectangle(enemyfiveX+50,enemyfiveY+100,enemyfivelife/5,20);
	}
	else if(dead5==true)
	{
		iShowImage(dead5x, dead5y, 250, 120, dead5image[dead5index]);
	}

	/////////////////////////////////ENEMY ONE/////////////////////////////////
	if(dead6==false)
	{
		iShowImage(enemysixX, enemysixY, 300, 90, enemysixpic[enemysixIn]);
		iShowImage(enemysixbx, enemysixby, 50, 60, enemysixBulletPic);
		dead6x=enemysixX;
		dead6y=enemysixY;
		iSetColor(255,153,153);
		iRectangle(enemysixX+50,enemysixY+100,200,20);
		iFilledRectangle(enemysixX+50,enemysixY+100,enemysixlife/5,20);
	}
	else if(dead6==true)
	{
		iShowImage(dead6x, dead6y, 250, 120, dead6image[dead6index]);
	}
	/////////////////////////////////ENEMY Seven/////////////////////////////////
	if(dead7==false)
	{
		iShowImage(enemysevenX, enemysevenY, 300, 90, enemysevenpic[enemysevenIn]);
		iShowImage(enemysevenbx, enemysevenby, 50, 60, enemysevenBulletPic);
		dead7x=enemysevenX;
		dead7y=enemysevenY;
		iSetColor(255,153,153);
		iRectangle(enemysevenX+50,enemysevenY+100,200,20);
		iFilledRectangle(enemysevenX+50,enemysevenY+100,enemysevenlife/5,20);

	}
	else if(dead7==true)
	{
		iShowImage(dead7x, dead7y, 250, 120, dead7image[dead7index]);
	}

	/////////////////////////////////ENEMY EIGHT/////////////////////////////////
	if(dead8==false)
	{
		iShowImage(enemyeightX, enemyeightY, 300, 90, enemyeightpic[enemyeightIn]);
		iShowImage(enemyeightbx, enemyeightby, 50, 60, enemyeightBulletPic);
		dead8x=enemyeightX;
		dead8y=enemyeightY;
		iSetColor(255,153,153);
		iRectangle(enemyeightX+50,enemyeightY+100,200,20);
		iFilledRectangle(enemyeightX+50,enemyeightY+100,enemyeightlife/5,20);

	}
	else if(dead8==true)
	{
		iShowImage(dead8x, dead8y, 250, 120, dead8image[dead8index]);
	}
	/////////////////////////////////ENEMY NINE/////////////////////////////////
	
	
	if(dead9==false)
	{
		iShowImage(enemynineX, enemynineY, 300, 90, enemyninepic[enemynineIn]);
		iShowImage(enemyninebx, enemynineby, 50, 60, enemynineBulletPic);
		dead9x=enemynineX;
		dead9y=enemynineY;
		iSetColor(255,153,153);
		iRectangle(enemynineX+50,enemynineY+100,200,20);
		iFilledRectangle(enemynineX+50,enemynineY+100,enemyninelife/5,20);

	}
	else if(dead9==true)
	{
		iShowImage(dead9x, dead9y, 250, 120, dead9image[dead9index]);
	}
	
	/////////////////////////////////ENEMY TEN/////////////////////////////////
	
	
	if(dead10==false)
	{
		iShowImage(enemytenX, enemytenY, 300, 90, enemytenpic[enemytenIn]);
		iShowImage(enemytenbx, enemytenby, 50, 60, enemytenBulletPic);
		dead10x=enemytenX;
		dead10y=enemytenY;
		iSetColor(255,153,153);
		iRectangle(enemytenX+50,enemytenY+100,200,20);
		iFilledRectangle(enemytenX+50,enemytenY+100,enemytenlife/5,20);


	}
	else if(dead10==true)
	{
		iShowImage(dead10x, dead10y, 250, 120, dead10image[dead10index]);
	}
	
	/////////////////////////////////ENEMY ELEVEN/////////////////////////////////

	
	if(dead11==false)
	{
		iShowImage(enemyelevenX, enemyelevenY, 300, 90, enemyelevenpic[enemyelevenIn]);
		iShowImage(enemyelevenbx, enemyelevenby, 50, 60, enemyelevenBulletPic);
		dead11x=enemyelevenX;
		dead11y=enemyelevenY;
		iSetColor(255,153,153);
		iRectangle(enemyelevenX+50,enemyelevenY+100,200,20);
		iFilledRectangle(enemyelevenX+50,enemyelevenY+100,enemyelevenlife/5,20);

	}
	else if(dead11==true)
	{
		iShowImage(dead11x, dead11y, 250, 120, dead11image[dead11index]);
	}

	/////////////////////////////////ENEMY TWELVE/////////////////////////////////

	
	if(dead12==false)
	{
		iShowImage(enemytwelveX, enemytwelveY, 300, 90, enemytwelvepic[enemytwelveIn]);
		iShowImage(enemytwelvebx, enemytwelveby, 50, 60, enemytwelveBulletPic);
		dead12x=enemytwelveX;
		dead12y=enemytwelveY;
		iSetColor(255,153,153);
		iRectangle(enemytwelveX+50,enemytwelveY+100,200,20);
		iFilledRectangle(enemytwelveX+50,enemytwelveY+100,enemytwelvelife/5,20);

	}
	else if(dead12==true)
	{
		iShowImage(dead12x, dead12y, 250, 120, dead12image[dead12index]);
	}

	/////////////////////////////////ENEMY THIRTEEN/////////////////////////////////

	
	if(dead13==false)
	{
		iShowImage(enemythirteenX, enemythirteenY, 300, 90, enemythirteenpic[enemythirteenIn]);
		iShowImage(enemythirteenbx, enemythirteenby, 50, 60, enemythirteenBulletPic);
		dead13x=enemythirteenX;
		dead13y=enemythirteenY;
		iSetColor(255,153,153);
		iRectangle(enemythirteenX+50,enemythirteenY+100,200,20);
		iFilledRectangle(enemythirteenX+50,enemythirteenY+100,enemythirteenlife/5,20);
	}
	else if(dead13==true)
	{
		iShowImage(dead13x, dead13y, 250, 120, dead13image[dead13index]);
	}

	/////////////////////////////////ENEMY FOURTEEN/////////////////////////////////

	
	if(dead14==false)
	{
		iShowImage(enemyfourteenX, enemyfourteenY, 300, 90, enemyfourteenpic[enemyfourteenIn]);
		iShowImage(enemyfourteenbx, enemyfourteenby, 50, 60, enemyfourteenBulletPic);
		dead14x=enemyfourteenX;
		dead14y=enemyfourteenY;
		iSetColor(255,153,153);
		iRectangle(enemyfourteenX+50,enemyfourteenY+100,200,20);
		iFilledRectangle(enemyfourteenX+50,enemyfourteenY+100,enemyfourteenlife/5,20);
	}
	else if(dead14==true)
	{
		iShowImage(dead14x, dead14y, 250, 120, dead14image[dead14index]);
	}

	/////////////////////////////////ENEMY FIFTEEN///////////////////////////////// 
	if(dead15==false)
	{
	iShowImage(enemyfifteenX, enemyfifteenY, 600, 180, enemyfifteenpic[enemyfifteenIn]);
	iShowImage(enemyfifteenbx, enemyfifteenby, 70, 80, enemyfifteenBulletPic);
	iShowImage(bossx,bossy,70,80,bossbullet);
	dead15x=enemyfifteenX;
	dead15y=enemyfifteenY;
	iSetColor(255,153,153);
	iRectangle(enemyfifteenX+50,enemyfifteenY+200,500,20);
	iFilledRectangle(enemyfifteenX+50,enemyfifteenY+200,enemyfifteenlife/2,20);

	}
	else if(dead15==true)
	{
	
	iShowImage(dead15x, dead15y, 350, 120, dead15image[dead15index]);
	}

	/////////////////////////////////SCORE/////////////////////////////////
	//for score showing in screen 
	sprintf(scoress,"%d",score);
	iSetColor(153,204,255);
	iText(160,860,scoress,GLUT_BITMAP_TIMES_ROMAN_24);
	iText(10,860,"SCORE : ",GLUT_BITMAP_TIMES_ROMAN_24);

	/////////////////HEALTH BAR///////////////////////
	iSetColor(139,0,0);
	iText(10,800,"HEALTH BAR : ",GLUT_BITMAP_TIMES_ROMAN_24);
	iRectangle(250,800,100,40);
	iFilledRectangle(250,800,planLife/100,40);

	/////////////////GAME OVER PAGE//////////////////////////
	if(over2)
	{
		iShowImage(0,0,1800,900,gameOver2);
		iSetColor(153,204,255);
		iText(950,300,scoress,GLUT_BITMAP_TIMES_ROMAN_24);
	iText(800,300,"SCORE : ",GLUT_BITMAP_TIMES_ROMAN_24);
	}
	}
}

//////////------------------------------------------------|-------------------------------------------------////////////////////

////////////////////////////////////////////////FUNCTION FOR ENEMY MOVEMENT/////////////////////////////
void enemyRun()
{
	//plan change also
	if(playstart2)
	{
	planIndex++;
	if(planIndex>3)
	{
		planIndex=0;
	}

	//for enemy one
	enemyX -= 5; 
	enemyY+=7;
	if(enemyY>=750)
	{
		enemyY=750;
		
	}
	//enemyY=rand()%100;
	enemyIn++;
	if (enemyIn >= 4)
	{
		enemyIn = 0;
	}

	if(dead1==true)
	{
		dead1index++;
		if(dead1index>=8)
		{
			dead1x=150000;
			dead1y=150000;
		}
	}

	//for enemy two
	enemytwoX -= 5;      
	enemytwoY-=7;
	if(enemytwoY<=150)
	{
		enemytwoY=150;
		
	}
	enemytwoIn++;
	if (enemytwoIn >= 4)
	{
		enemytwoIn = 0;
	}
	if(dead2==true)
	{
		dead2index++;
		if(dead2index>=8)
		{
			dead2x=150000;
			dead2y=150000;
		}
	}
	//for enemy three
	enemythreeX -= 5;      
	if(e3==false)
	{
		enemythreeY+=5;
		if(enemythreeY>=500){
			e3=true;
		}
	}
	if(e3==true)
	{
		enemythreeY-=5;
		if(enemythreeY<=450)
		{
			e3=false;
		}
	}
	
	enemythreeIn++;
	if (enemythreeIn >= 4)
	{
		enemythreeIn = 0;
	}
	if(dead3==true)
	{
		dead3index++;
		if(dead3index>=8)
		{
			dead3x=150000;
			dead3y=150000;
		}
	}
	//for enemy four
	enemyfourX -= 5; 
	if(e4==false)
	{
		enemyfourY+=5;
		if(enemyfourY>=200){
			e4=true;
		}
	}
	if(e4==true)
	{
		enemyfourY-=5;
		if(enemyfourY<=150)
		{
			e4=false;
		}
	}
	enemyfourIn++;
	if (enemyfourIn >= 4)
	{
		enemyfourIn = 0;
	}
	if(dead4==true)
	{
		dead4index++;
		if(dead4index>=8)
		{
			dead4x=150000;
			dead4y=150000;
		}
	}
	//for enemy five
	enemyfiveX -= 5;      
	if(e5==false)
	{
		enemyfiveY+=5;
		if(enemyfiveY>=500){
			e5=true;
		}
	}
	if(e5==true)
	{
		enemyfiveY-=5;
		if(enemyfiveY<=450)
		{
			e5=false;
		}
	}
	enemyfiveIn++;
	if (enemyfiveIn >= 4)
	{
		enemyfiveIn = 0;
	}
	if(dead5==true)
	{
		dead5index++;
		if(dead5index>=8)
		{
			dead5x=150000;
			dead5y=150000;
		}
	}
	//for enemy six
	enemysixX -= 5;      
	if(e6==false)
	{
		enemysixY+=5;
		if(enemysixY>=400){
			e6=true;
		}
	}
	if(e6==true)
	{
		enemysixY-=5;
		if(enemysixY<=350)
		{
			e6=false;
		}
	}
	enemysixIn++;
	if (enemysixIn >= 4)
	{
		enemysixIn = 0;
	}
	if(dead6==true)
	{
		dead6index++;
		if(dead6index>=8)
		{
			dead6x=150000;
			dead6y=150000;
		}
	}
	
	//for enemy seven
	enemysevenX -= 5;      
	if(e7==false)
	{
		enemysevenY+=5;
		if(enemysevenY>=150){
			e7=true;
		}
	}
	if(e7==true)
	{
		enemysevenY-=5;
		if(enemysevenY<=100)
		{
			e7=false;
		}
	}
	enemysevenIn++;
	if (enemysevenIn >= 4)
	{
		enemysevenIn = 0;
	}
	if(dead7==true)
	{
		dead7index++;
		if(dead7index>=8)
		{
			dead7x=150000;
			dead7y=150000;
		}
	}
	//for enemy eight
	enemyeightX -= 5;      
	if(e8==false)
	{
		enemyeightY+=5;
		if(enemyeightY>=750){
			e8=true;
		}
	}
	if(e8==true)
	{
		enemyeightY-=5;
		if(enemyeightY<=700)
		{
			e8=false;
		}
	}
	enemyeightIn++;
	if (enemyeightIn >= 4)
	{
		enemyeightIn = 0;
	}
	if(dead8==true)
	{
		dead8index++;
		if(dead8index>=8)
		{
			dead8x=150000;
			dead8y=150000;
		}
	}
	//for enemy nine
	enemynineX -= 5;      
	if(e9==false)
	{
		enemynineY+=5;
		if(enemynineY>=550){
			e9=true;
		}
	}
	if(e9==true)
	{
		enemynineY-=5;
		if(enemynineY<=500)
		{
			e9=false;
		}
	}
	enemynineIn++;
	if (enemynineIn >= 4)
	{
		enemynineIn = 0;
	}

	if(dead9==true)
	{
		dead9index++;
		if(dead9index>=8)
		{
			dead9x=150000;
			dead9y=150000;
		}
	}
//for enemy ten
	enemytenX -= 5;      
	if(e10==false)
	{
		enemytenY+=5;
		if(enemytenY>=750){
			e10=true;
		}
	}
	if(e10==true)
	{
		enemytenY-=5;
		if(enemytenY<=700)
		{
			e10=false;
		}
	}
	enemytenIn++;
	if (enemytenIn >= 4)
	{
		enemytenIn = 0;
	}
	if(dead10==true)
	{
		dead10index++;
		if(dead10index>=8)
		{
			dead10x=150000;
			dead10y=150000;
		}
	}
	//for enemy eleven
	enemyelevenX -= 5;      
	if(e11==false)
	{
		enemyelevenY+=5;
		if(enemyelevenY>=750){
			e11=true;
		}
	}
	if(e11==true)
	{
		enemyelevenY-=5;
		if(enemyelevenY<=700)
		{
			e11=false;
		}
	}
	enemyelevenIn++;
	if (enemyelevenIn >= 4)
	{
		enemyelevenIn = 0;
	}
	if(dead11==true)
	{
		dead11index++;
		if(dead11index>=8)
		{
			dead11x=150000;
			dead11y=150000;
		}
	}
	//for enemy twelve
	enemytwelveX -= 5;      
	if(e12==false)
	{
		enemytwelveY+=5;
		if(enemytwelveY>=150){
			e12=true;
		}
	}
	if(e12==true)
	{
		enemytwelveY-=5;
		if(enemytwelveY<=100)
		{
			e12=false;
		}
	}
	enemytwelveIn++;
	if (enemytwelveIn >= 4)
	{
		enemytwelveIn = 0;
	}
	if(dead12==true)
	{
		dead12index++;
		if(dead12index>=8)
		{
			dead12x=150000;
			dead12y=150000;
		}
	}
	//for enemy thirteen
	enemythirteenX -= 5;      
	if(e13==false)
	{
		enemythirteenY+=5;
		if(enemythirteenY>=550){
			e13=true;
		}
	}
	if(e13==true)
	{
		enemythirteenY-=5;
		if(enemythirteenY<=500)
		{
			e13=false;
		}
	}
	enemythirteenIn++;
	if (enemythirteenIn >= 4)
	{
		enemythirteenIn = 0;
	}
	if(dead13==true)
	{
		dead13index++;
		if(dead13index>=8)
		{
			dead13x=150000;
			dead13y=150000;
		}
	}
	//for enemy fourteen
	enemyfourteenX -= 5;      
	if(e14==false)
	{
		enemyfourteenY+=5;
		if(enemyfourteenY>=300){
			e14=true;
		}
	}
	if(e14==true)
	{
		enemyfourteenY-=5;
		if(enemyfourteenY<=250)
		{
			e14=false;
		}
	}
	enemyfourteenIn++;
	if (enemyfourteenIn >= 4)
	{
		enemyfourteenIn = 0;
	}
	if(dead14==true)
	{
		dead14index++;
		if(dead14index>=8)
		{
			dead14x=150000;
			dead14y=150000;
		}
	}
	//for enemy fifteen
	
	enemyfifteenX -= 5;      
	if(e15==false)
	{
		enemyfifteenY+=10;
		if(enemyfifteenY>=650){
			e15=true;
		}
	}
	if(e15==true)
	{
		enemyfifteenY-=10;
		if(enemyfifteenY<=100)
		{
			e15=false;
		}
	}
	enemyfifteenIn++;
	if (enemyfifteenIn >= 4)
	{
		enemyfifteenIn = 0;
	}

	if (enemyfifteenX <= 1000)
	{

			if(e15==false)
		{
			enemyfifteenY+=5;
			if(enemyfifteenY>=650){
			e15=true;
		}
		}
			if(e15==true)
		{
			enemyfifteenY-=5;
			if(enemyfifteenY<=100)
		{
			e15=false;
		}
		}
			
			enemyfifteenX = 1000;

	}
	
	if(dead15==true)
	{
		dead15index++;
		if(dead15index>=8)
		{
			dead15x=150000;
			dead15y=150000;
			over2 =true;
		}
	}
	}
}


//////////------------------------------------------------|-------------------------------------------------////////////////////


//////////////////////FUNCTION FOR ENEMY BULLET MOVEMENT////////////////////////
void EnemyBullet()
{
	 if(playstart2)
	 {
	//enemy bullet one
		enemybx-=15;
		
		if (enemybx <= 0)
		{
			enemybx = enemyX;
			enemyby=enemyY+20;
		}
	collisionPlan();
	
	//enemy bullet two
	enemytwobx-=15;
		if (enemytwobx <= 0)
		{
			enemytwobx = enemytwoX;
			enemytwoby=enemytwoY+20;
		}
		

	collisionPlan();

	//enemy bullet three
	enemythreebx-=15;
		if (enemythreebx <= 0)
		{
			enemythreebx = enemythreeX;
		}
		if(enemythreeX>=screenWidth-50)
		{
			
			enemythreeby=15000;
		}
		else
		{
			 enemythreeby=520;
		}
	collisionPlan();
//enemy bullet four
	enemyfourbx-=15;
		if (enemyfourbx <= 0)
		{
			enemyfourbx = enemyfourX;
		}
		if(enemyfourX>=screenWidth-50)
		{
			
			enemyfourby=15000;
		}
		else
		{
			 enemyfourby=220;
		}
	collisionPlan();

	//enemy bullet five
	enemyfivebx-=15;
		if (enemyfivebx <= 0)
		{
			enemyfivebx = enemyfiveX;
		}
		if(enemyfiveX>=screenWidth-50)
		{
			
			enemyfiveby=15000;
		}
		else
		{
			 enemyfiveby=520;
		}
	collisionPlan();

	//enemy bullet six
	enemysixbx-=15;
		if (enemysixbx <= 0)
		{
			enemysixbx = enemysixX;
		}
		if(enemysixX>=screenWidth-50)
		{
			
			enemysixby=15000;
		}
		else
		{
			 enemysixby=420;
		}
	collisionPlan();

	//enemy bullet seven
	enemysevenbx-=15;
		if (enemysevenbx <= 0)
		{
			enemysevenbx = enemysevenX;
		}
		if(enemysevenX>=screenWidth-50)
		{
			
			enemysevenby=15000;
		}
		else
		{
			 enemysevenby=170;
		}
	collisionPlan();

	//enemy bullet eight
	enemyeightbx-=15;
		if (enemyeightbx <= 0)
		{
			enemyeightbx = enemyeightX;
		}
		if(enemyeightX>=screenWidth-50)
		{
			
			enemyeightby=15000;
		}
		else
		{
			 enemyeightby=770;
		}
	collisionPlan();

	//enemy bullet nine
	enemyninebx-=15;
		if (enemyninebx <= 0)
		{
			enemyninebx = enemynineX;
		}
		if(enemynineX>=screenWidth-50)
		{
			
			enemynineby=15000;
		}
		else
		{
			 enemynineby=570;
		}
	collisionPlan();

	//enemy bullet ten
	enemytenbx-=15;
		if (enemytenbx <= 0)
		{
			enemytenbx = enemytenX;
		}
		if(enemytenX>=screenWidth-50)
		{
			
			enemytenby=15000;
		}
		else
		{
			 enemytenby=770;
		}
	collisionPlan();
//enemy bullet eleven
	enemyelevenbx-=15;
		if (enemyelevenbx <= 0)
		{
			enemyelevenbx = enemyelevenX;
		}
		if(enemyelevenX>=screenWidth-50)
		{
			
			enemyelevenby=15000;
		}
		else
		{
			 enemyelevenby=770;
		}
	collisionPlan();

	//enemy bullet twelve
	enemytwelvebx-=15;
		if (enemytwelvebx <= 0)
		{
			enemytwelvebx = enemytwelveX;
		}
		if(enemytwelveX>=screenWidth-50)
		{
			
			enemytwelveby=15000;
		}
		else
		{
			 enemytwelveby=170;
		}
	collisionPlan();
	//enemy bullet thirteen
	enemythirteenbx-=15;
		if (enemythirteenbx <= 0)
		{
			enemythirteenbx = enemythirteenX;
		}
		if(enemythirteenX>=screenWidth-50)
		{
			
			enemythirteenby=15000;
		}
		else
		{
			 enemythirteenby=570;
		}
	collisionPlan();

	//enemy bullet fourteen
	enemyfourteenbx-=15;
		if (enemyfourteenbx <= 0)
		{
			enemyfourteenbx = enemyfourteenX;
		}
		if(enemyfourteenX>=screenWidth-50)
		{
			
			enemyfourteenby=15000;
		}
		else
		{
			 enemyfourteenby=320;
		}
	collisionPlan();

	//enemy bullet fifteen
	enemyfifteenbx-=15;
		if (enemyfifteenbx <= 0)
		{
			enemyfifteenbx = enemyfifteenX;
			enemyfifteenby=enemyfifteenY+50;
		}
		if(enemyfifteenX>=screenWidth-50)
		{
			
			enemyfifteenby=15000;
		}
		else
		{
			 enemyfifteenby=enemyfifteenY+50;
		}
	collisionPlan();

	//enemy two bullet for fifteen enemy
	bossx-=15;
		if (bossx <= 0)
		{
			bossx = enemyfifteenX;
			bossy=enemyfifteenY+20;
		}
		
		if(enemyfifteenX>=screenWidth-50)
		{
			
			bossy=15000;
		}
		else
		{
			bossy=enemyfifteenY+20;
		}
	collisionPlan();
	}
}

//////////------------------------------------------------|-------------------------------------------------////////////////////

///////////////////////////////////PLAYER COLLISSION///////////////////////////////////
void collisionPlan()
{
	//for enemy one
	if(playstart2)
	{
	collisionCheckPlan = true;
	if ( enemybx+70 > planCorX && enemybx<planCorX+300 ){
			if ( enemyby+15>planCorY && enemyby < planCorY+80)
			{
				planLife -= 1;
		printf("%d\n", planLife);
		if (planLife <= 0)
		{
			planCorX = 1500000;
			planCorY = 1500000;
			bulletx=1500000;
			bullety=150000;
			bullettwox=1500000;
			bullettwoy=150000;
			bulletthreex=1500000;
			bulletthreey=150000;
			
			//collisionCheck = true;
		}
			}
	}
	
	//for enemy two
	

     collisionCheckPlan = true;
	if ( enemytwobx+70 > planCorX && enemytwobx<planCorX+300 ){
			if ( enemytwoby+15>planCorY && enemytwoby < planCorY+80)
			{
				planLife -= 1;
		//printf("%d\n", planLife);
		if (planLife <= 0)
		{
			planCorX = 1500000;
			planCorY = 1500000;
			bulletx=1500000;
			bullety=150000;
			bullettwox=1500000;
			bullettwoy=150000;
			bulletthreex=1500000;
			bulletthreey=150000;
			
			
			//collisionCheck = true;
		}
			}
	}
	//for enemy three

	collisionCheckPlan = true;
	if ( enemythreebx+70 > planCorX && enemythreebx<planCorX+300 ){
			if ( enemythreeby+15>planCorY && enemythreeby < planCorY+80)
			{
				planLife -= 1;
		//printf("%d\n", planLife);
		if (planLife <= 0)
		{
			planCorX = 1500000;
			planCorY = 1500000;
			bulletx=1500000;
			bullety=150000;
			bullettwox=1500000;
			bullettwoy=150000;
			bulletthreex=1500000;
			bulletthreey=150000;
			
			
			//collisionCheck = true;
		}
			}
	}

	//for enemy four

	collisionCheckPlan = true;
	if ( enemyfourbx+70 > planCorX && enemyfourbx<planCorX+300 ){
			if ( enemyfourby+15>planCorY && enemyfourby < planCorY+80)
			{
				planLife -= 1;
		//printf("%d\n", planLife);
		if (planLife <= 0)
		{
			planCorX = 1500000;
			planCorY = 1500000;
			bulletx=1500000;
			bullety=150000;
			bullettwox=1500000;
			bullettwoy=150000;
			bulletthreex=1500000;
			bulletthreey=150000;
			
			
			//collisionCheck = true;
		}
			}
	}

	//for enemy five

	collisionCheckPlan = true;
	if ( enemyfivebx+70 > planCorX && enemyfivebx<planCorX+300 ){
			if ( enemyfiveby+15>planCorY && enemyfiveby < planCorY+80)
			{
				planLife -= 1;
		//printf("%d\n", planLife);
		if (planLife <= 0)
		{
			planCorX = 1500000;
			planCorY = 1500000;
			bulletx=1500000;
			bullety=150000;
			bullettwox=1500000;
			bullettwoy=150000;
			bulletthreex=1500000;
			bulletthreey=150000;
			
			
			//collisionCheck = true;
		}
			}
	}

	//for enemy six

	collisionCheckPlan = true;
	if ( enemysixbx+70 > planCorX && enemysixbx<planCorX+300 ){
			if ( enemysixby+15>planCorY && enemysixby < planCorY+80)
			{
				planLife -= 1;
		//printf("%d\n", planLife);
		if (planLife <= 0)
		{
			planCorX = 1500000;
			planCorY = 1500000;
			bulletx=1500000;
			bullety=150000;
			bullettwox=1500000;
			bullettwoy=150000;
			bulletthreex=1500000;
			bulletthreey=150000;
			
			
			//collisionCheck = true;
		}
			}
	}

	//for enemy seven
	collisionCheckPlan = true;
	if ( enemysevenbx+70 > planCorX && enemysevenbx<planCorX+300 ){
			if ( enemysevenby+15>planCorY && enemysevenby < planCorY+80)
			{
				planLife -= 1;
		//printf("%d\n", planLife);
		if (planLife <= 0)
		{
			planCorX = 1500000;
			planCorY = 1500000;
			bulletx=1500000;
			bullety=150000;
			bullettwox=1500000;
			bullettwoy=150000;
			bulletthreex=1500000;
			bulletthreey=150000;
			
			
			//collisionCheck = true;
		}
			}
	}

	//for enemy eight
	collisionCheckPlan = true;
	if ( enemyeightbx+70 > planCorX && enemyeightbx<planCorX+300 ){
			if ( enemyeightby+15>planCorY && enemyeightby < planCorY+80)
			{
				planLife -= 1;
		//printf("%d\n", planLife);
		if (planLife <= 0)
		{
			planCorX = 1500000;
			planCorY = 1500000;
			bulletx=1500000;
			bullety=150000;
			bullettwox=1500000;
			bullettwoy=150000;
			bulletthreex=1500000;
			bulletthreey=150000;
			
			
			//collisionCheck = true;
		}
			}
	}

	//for enemy nine
	collisionCheckPlan = true;
	if ( enemyninebx+70 > planCorX && enemyninebx<planCorX+300 ){
			if ( enemynineby+15>planCorY && enemynineby < planCorY+80)
			{
				planLife -= 1;
		//printf("%d\n", planLife);
		if (planLife <= 0)
		{
			planCorX = 1500000;
			planCorY = 1500000;
			bulletx=1500000;
			bullety=150000;
			bullettwox=1500000;
			bullettwoy=150000;
			bulletthreex=1500000;
			bulletthreey=150000;
			
			
			//collisionCheck = true;
		}
			}
	}

	//for enemy ten
	collisionCheckPlan = true;
	if ( enemytenbx+70 > planCorX && enemytenbx<planCorX+300 ){
			if ( enemytenby+15>planCorY && enemytenby < planCorY+80)
			{
				planLife -= 1;
		//printf("%d\n", planLife);
		if (planLife <= 0)
		{
			planCorX = 1500000;
			planCorY = 1500000;
			bulletx=1500000;
			bullety=150000;
			bullettwox=1500000;
			bullettwoy=150000;
			bulletthreex=1500000;
			bulletthreey=150000;
			
			
			//collisionCheck = true;
		}
			}
	}

	//for enemy eleven
	collisionCheckPlan = true;
	if ( enemyelevenbx+70 > planCorX && enemyelevenbx<planCorX+300 ){
			if ( enemyelevenby+15>planCorY && enemyelevenby < planCorY+80)
			{
				planLife -= 1;
		//printf("%d\n", planLife);
		if (planLife <= 0)
		{
			planCorX = 1500000;
			planCorY = 1500000;
			bulletx=1500000;
			bullety=150000;
			bullettwox=1500000;
			bullettwoy=150000;
			bulletthreex=1500000;
			bulletthreey=150000;
			
			
			//collisionCheck = true;
		}
			}
	}

	//for enemy twelve
	collisionCheckPlan = true;
	if ( enemytwelvebx+70 > planCorX && enemytwelvebx<planCorX+300 ){
			if ( enemytwelveby+15>planCorY && enemytwelveby < planCorY+80)
			{
				planLife -= 1;
		//printf("%d\n", planLife);
		if (planLife <= 0)
		{
			planCorX = 1500000;
			planCorY = 1500000;
			bulletx=1500000;
			bullety=150000;
			bullettwox=1500000;
			bullettwoy=150000;
			bulletthreex=1500000;
			bulletthreey=150000;
			
			
			//collisionCheck = true;
		}
			}
	}

	//for enemy thirteen
	collisionCheckPlan = true;
	if ( enemythirteenbx+70 > planCorX && enemythirteenbx<planCorX+300 ){
			if ( enemythirteenby+15>planCorY && enemythirteenby < planCorY+80)
			{
				planLife -= 1;
		//printf("%d\n", planLife);
		if (planLife <= 0)
		{
			planCorX = 1500000;
			planCorY = 1500000;
			bulletx=1500000;
			bullety=150000;
			bullettwox=1500000;
			bullettwoy=150000;
			bulletthreex=1500000;
			bulletthreey=150000;
			
			
			//collisionCheck = true;
		}
			}
	}

	//for enemy fourteen 
	collisionCheckPlan = true;
	if ( enemyfourteenbx+70 > planCorX && enemyfourteenbx<planCorX+300 ){
			if ( enemyfourteenby+15>planCorY && enemyfourteenby < planCorY+80)
			{
				planLife -= 1;
		//printf("%d\n", planLife);
		if (planLife <= 0)
		{
			planCorX = 1500000;
			planCorY = 1500000;
			bulletx=1500000;
			bullety=150000;
			bullettwox=1500000;
			bullettwoy=150000;
			bulletthreex=1500000;
			bulletthreey=150000;
			
			
			//collisionCheck = true;
		}
			}
	}

	//for enemy fifteen
	collisionCheckPlan = true;
	if ( enemyfifteenbx+70 > planCorX && enemyfifteenbx<planCorX+300 ){
			if ( enemyfifteenby+15>planCorY && enemyfifteenby < planCorY+80)
			{
				planLife -= 1;
		//printf("%d\n", planLife);
		if (planLife <= 0)
		{
			planCorX = 1500000;
			planCorY = 1500000;
			bulletx=1500000;
			bullety=150000;
			bullettwox=1500000;
			bullettwoy=150000;
			bulletthreex=1500000;
			bulletthreey=150000;
			
			
			//collisionCheck = true;
		}
			}
	}
	if(planLife==0)
	{
		over2 =true;
	}
	}
}

/////////////////////////////////COLLISSION FOR ENEMY ONE//////////////////////////////////
void collisionEnemy()
{
	if(playstart2)
	{
	collisionCheckEnemy=true;
	 if (bullettwox + 100 > enemyX && bullettwox <enemyX+ 300)
		 
	{
		if(bullettwoy+90>enemyY && bullettwoy<enemyY+90)
		{
		enemylife -= 10;
		printf("%d\n",enemylife);
		if (enemylife <= 0)
		{
			score+=100;
			//enemyX = 1500000;
			//enemyY = 1500000;
			enemybx=1500000;
			enemyby=1500000;
			dead1=true;
			
		}
	 }
	 }
	}
}
/////////////////////////////////COLLISSION FOR ENEMY TWO//////////////////////////////////

void collisionEnemytwo()
{
	if(playstart2)
	{
	collisionCheckEnemytwo=true;
	 if (bullettwox + 100 > enemytwoX && bullettwox <enemytwoX+ 300)
		 
	{
		if(bullettwoy+90>enemytwoY && bullettwoy<enemytwoY+90)
		{
		enemytwolife -= 10;
		//printf("%d\n",enemytwolife);
		if (enemytwolife <= 0)
		{
			score+=100;
			//enemytwoX = 1500000;
			//enemytwoY = 1500000;
			enemytwobx=1500000;
			enemytwoby=1500000;
			dead2=true;
			
		}
	 }
	 }
	}
}
/////////////////////////////////COLLISSION FOR ENEMY THREE//////////////////////////////////

void collisionEnemythree()
{
	if(playstart2)
	{
	collisionCheckEnemythree=true;
	 if (bullettwox + 100 > enemythreeX && bullettwox <enemythreeX+ 300)
		 
	{
		if(bullettwoy+90>enemythreeY && bullettwoy<enemythreeY+90)
		{
		enemythreelife -= 10;
		//printf("%d\n",enemytwolife);
		if (enemythreelife <= 0)
		{
			score+=100;
			//enemythreeX = 1500000;
			//enemythreeY = 1500000;
			enemythreebx=1500000;
			enemythreeby=1500000;
			dead3=true;
		}
	 }
	 }
	}
}

/////////////////////////////////COLLISSION FOR ENEMY FOUR//////////////////////////////////

void collisionEnemyfour()
{	 
	if(playstart2)
	{
	collisionCheckEnemyfour=true;
	 if (bullettwox + 100 > enemyfourX && bullettwox <enemyfourX+ 300)
		 
	{
		if(bullettwoy+90>enemyfourY && bullettwoy<enemyfourY+90)
		{
		enemyfourlife -= 10;
		//printf("%d\n",enemylife);
		if (enemyfourlife <= 0)
		{
			score+=100;
			//enemyfourX = 1500000;
			//enemyfourY = 1500000;
			enemyfourbx=1500000;
			enemyfourby=1500000;
			dead4=true;
		}
	 }
	 }
	}
}

/////////////////////////////////COLLISSION FOR ENEMY FIVE//////////////////////////////////
void collisionEnemyfive()
{
	if(playstart2)
	{
	collisionCheckEnemyfive=true;
	 if (bullettwox + 100 > enemyfiveX && bullettwox <enemyfiveX+ 300)
		 
	{
		if(bullettwoy+90>enemyfiveY && bullettwoy<enemyfiveY+90)
		{
		enemyfivelife -= 10;
		//printf("%d\n",enemylife);
		if (enemyfivelife <= 0)
		{
			score+=100;
			//enemyfiveX = 1500000;
			//enemyfiveY = 1500000;
			enemyfivebx=1500000;
			enemyfiveby=1500000;
			dead5=true;
		}
	 }
	 }
	}
}

/////////////////////////////////COLLISSION FOR ENEMY SIX//////////////////////////////////
void collisionEnemysix()
{
	if(playstart2)
	{
	collisionCheckEnemysix=true;
	 if (bullettwox + 100 > enemysixX && bullettwox <enemysixX+ 300)
		 
	{
		if(bullettwoy+90>enemysixY && bullettwoy<enemysixY+90)
		{
		enemysixlife -= 10;
		//printf("%d\n",enemylife);
		if (enemysixlife <= 0)
		{
			score+=100;
			//enemysixX = 1500000;
			//enemysixY = 1500000;
			enemysixbx=1500000;
			enemysixby=1500000;
			dead6=true;
		}
	 }
	 }
	}
}

/////////////////////////////////COLLISSION FOR ENEMY SEVEN//////////////////////////////////
void collisionEnemyseven()
{
	if(playstart2)
	{
	collisionCheckEnemyseven=true;
	 if (bullettwox + 100 > enemysevenX && bullettwox <enemysevenX+ 300)
		 
	{
		if(bullettwoy+90>enemysevenY && bullettwoy<enemysevenY+90)
		{
		enemysevenlife -= 10;
		//printf("%d\n",enemylife);
		if (enemysevenlife <= 0)
		{
			score+=100;
			//enemysevenX = 1500000;
			//enemysevenY = 1500000;
			enemysevenbx=1500000;
			enemysevenby=1500000;
			dead7=true;
		}
	 }
	 }
	}
}

/////////////////////////////////COLLISSION FOR ENEMY EIGHT//////////////////////////////////
void collisionEnemyeight()
{
	if(playstart2)
	{
	collisionCheckEnemyeight=true;
	 if (bullettwox + 100 > enemyeightX && bullettwox <enemyeightX+ 300)
		 
	{
		if(bullettwoy+90>enemyeightY && bullettwoy<enemyeightY+90)
		{
		enemyeightlife -= 10;
		//printf("%d\n",enemylife);
		if (enemyeightlife <= 0)
		{
			score+=100;
			//enemyeightX = 1500000;
			//enemyeightY = 1500000;
			enemyeightbx=1500000;
			enemyeightby=1500000;
			dead8=true;
		}
	 }
	 }
	}
}

/////////////////////////////////COLLISSION FOR ENEMY NINE//////////////////////////////////
void collisionEnemynine()
{
	if(playstart2)
	{
	collisionCheckEnemynine=true;
	 if (bullettwox + 100 > enemynineX && bullettwox <enemynineX+ 300)
		 
	{
		if(bullettwoy+90>enemynineY && bullettwoy<enemynineY+90)
		{
		enemyninelife -= 10;
		//printf("%d\n",enemylife);
		if (enemyninelife <= 0)
		{
			score+=100;
			//enemynineX = 1500000;
			//enemynineY = 1500000;
			enemyninebx=1500000;
			enemynineby=1500000;
			dead9=true;
		}
	 }
	 }
	}
}
/////////////////////////////////COLLISSION FOR ENEMY TEN//////////////////////////////////
void collisionEnemyten()
{
	if(playstart2)
	{
	collisionCheckEnemyten=true;
	 if (bullettwox + 100 > enemytenX && bullettwox <enemytenX+ 300)
		 
	{
		if(bullettwoy+90>enemytenY && bullettwoy<enemytenY+90)
		{
		enemytenlife -= 10;
		//printf("%d\n",enemylife);
		if (enemytenlife <= 0)
		{
			score+=100;
			//enemytenX = 1500000;
			//enemytenY = 1500000;
			enemytenbx=1500000;
			enemytenby=1500000;
			dead10=true;
		}
	 }
	 }
	}
}
/////////////////////////////////COLLISSION FOR ENEMY ELEVEN//////////////////////////////////
void collisionEnemyeleven()
{
	if(playstart2)
	{
	collisionCheckEnemyeleven=true;
	 if (bullettwox + 100 > enemyelevenX && bullettwox <enemyelevenX+ 300)
		 
	{
		if(bullettwoy+90>enemyelevenY && bullettwoy<enemyelevenY+90)
		{
		enemyelevenlife -= 10;
		//printf("%d\n",enemylife);
		if (enemyelevenlife <= 0)
		{
			score+=100;
			//enemyelevenX = 1500000;
			//enemyelevenY = 1500000;
			enemyelevenbx=1500000;
			enemyelevenby=1500000;
			dead11=true;
		}
	 }
	 }
	}
}

/////////////////////////////////COLLISSION FOR ENEMY TWELVE//////////////////////////////////
void collisionEnemytwelve()
{
	if(playstart2)
	{
	collisionCheckEnemytwelve=true;
	 if (bullettwox + 100 > enemytwelveX && bullettwox <enemytwelveX+ 300)
		 
	{
		if(bullettwoy+90>enemytwelveY && bullettwoy<enemytwelveY+90)
		{
		enemytwelvelife -= 10;
		//printf("%d\n",enemylife);
		if (enemytwelvelife <= 0)
		{
			score+=100;
			//enemytwelveX = 1500000;
			//enemytwelveY = 1500000;
			enemytwelvebx=1500000;
			enemytwelveby=1500000;
			dead12=true;
		}
	 }
	 }
	}
}

/////////////////////////////////COLLISSION FOR ENEMY THIRTEEN//////////////////////////////////
void collisionEnemythirteen()
{
	if(playstart2)
	{
	collisionCheckEnemythirteen=true;
	 if (bullettwox + 100 > enemythirteenX && bullettwox <enemythirteenX+ 300)
		 
	{
		if(bullettwoy+90>enemythirteenY && bullettwoy<enemythirteenY+90)
		{
		enemythirteenlife -= 10;
		//printf("%d\n",enemylife);
		if (enemythirteenlife <= 0)
		{
			score+=100;
			//nemythirteenX = 1500000;
			//enemythirteenY = 1500000;
			enemythirteenbx=1500000;
			enemythirteenby=1500000;
			dead13=true;
		}
	 }
	 }
	}
}

/////////////////////////////////COLLISSION FOR ENEMY FOURTEEN//////////////////////////////////
void collisionEnemyfourteen()
{
	if(playstart2)
	{
	collisionCheckEnemyfourteen=true;
	 if (bullettwox + 100 > enemyfourteenX && bullettwox <enemyfourteenX+ 300)
		 
	{
		if(bullettwoy+90>enemyfourteenY && bullettwoy<enemyfourteenY+90)
		{
		enemyfourteenlife -= 10;
		//printf("%d\n",enemylife);
		if (enemyfourteenlife <= 0)
		{
			score+=100;
			//enemyfourteenX = 1500000;
			//enemyfourteenY = 1500000;
			enemyfourteenbx=1500000;
			enemyfourteenby=1500000;
			dead14=true;
		}
	 }
	 }
	}
}

/////////////////////////////////COLLISSION FOR ENEMY FIFTEEN//////////////////////////////////
void collisionEnemyfifteen()
{
	if(playstart2)
	{
	collisionCheckEnemyfifteen=true;
	 if (bullettwox + 100 > enemyfifteenX && bullettwox <enemyfifteenX+ 600)
		 
	{
		if(bullettwoy+90>enemyfifteenY && bullettwoy<enemyfifteenY+180)
		{
		enemyfifteenlife -= 1;
		//printf("%d\n",enemytwolife);
		if (enemyfifteenlife <= 0)
		{
			score+=1000;
			//enemyfifteenX = 1500000;
			//enemyfifteenY = 1500000;
			enemyfifteenbx=1500000;
			enemyfifteenby=1500000;
			dead15=true;
		}
	 }
	 }
	}
	/*if(dead15index==7)
	{
		over2 =true;
	}*/
	
}


//////////------------------------------------------------|-------------------------------------------------////////////////////



/////////////////////////////////////////////////MAIN FUNCTIONS OF LEVEL2 /ALL IMAGES USED IN LEVEL 2 ARE ATTACHED HERE//////////////////////////////
void levelTwoMainFunctions()
{
	

	///////////////////////////////ENEMY MOVEMENT//////////////////////////
	iSetTimer(100, enemyRun);
	

	////////////////////ENEMY BULLET MOVEMENT//////////////////////////////// 
	iSetTimer(5,EnemyBullet);
	

	////////////////////BACKGROUND MOVEMENT////////////////////////////
	iSetTimer(10,LevelTwoChangeBackground);
	
	//////////////////////////LEVEL 2 BACKGROUND IMAGES INCLUSION/////////////////////////
	LevelTwoBackgroundImages[0] = iLoadImage("images//tahiya1.png");
	LevelTwoBackgroundImages[1] = iLoadImage("images//tahiya2.png");



	/////////////////////PLAYER IMAGES INCLUSION////////////////////
	planImage[0] = iLoadImage("images\\aa1.png");
	planImage[1] = iLoadImage("images\\aa2.png");
	planImage[2] = iLoadImage("images\\aa3.png");
	planImage[3] = iLoadImage("images\\aa4.png");
	LevelTwoBulletImage=iLoadImage("images\\b1.png");
	bulletimagetwo=iLoadImage("images\\b1.png");
	bulletimagethree=iLoadImage("images\\b1.png");
	
	///////////////////////ENEMY ONE IMAGE INCLUSION/////////////
	//enemy picture one
	enemypic[0] = iLoadImage("images\\ee1.png");
	enemypic[1] = iLoadImage("images\\ee2.png");
	enemypic[2] = iLoadImage("images\\ee3.png");
	enemypic[3] = iLoadImage("images\\ee4.png");
	//enemy bullet one
	enemyBulletPic = iLoadImage("images\\eb.png");

	///////////////////////ENEMY TWO IMAGE INCLUSION/////////////
	//enemy picture two
	enemytwopic[0] = iLoadImage("images\\ee1.png");
	enemytwopic[1] = iLoadImage("images\\ee2.png");
	enemytwopic[2] = iLoadImage("images\\ee3.png");
	enemytwopic[3] = iLoadImage("images\\ee4.png");
	//enemy bullet two
	enemytwoBulletPic = iLoadImage("images\\eb.png");

	///////////////////////ENEMY THREE IMAGE INCLUSION/////////////
	//enemy picture three
	enemythreepic[0] = iLoadImage("images\\f1.png");
	enemythreepic[1] = iLoadImage("images\\f2.png");
	enemythreepic[2] = iLoadImage("images\\f3.png");
	enemythreepic[3] = iLoadImage("images\\f4.png");
	//enemy bullet two
	enemythreeBulletPic = iLoadImage("images\\eb.png");


	///////////////////////ENEMY FOUR IMAGE INCLUSION/////////////
	//enemy picture four
	enemyfourpic[0] = iLoadImage("images\\f1.png");
	enemyfourpic[1] = iLoadImage("images\\f2.png");
	enemyfourpic[2] = iLoadImage("images\\f3.png");
	enemyfourpic[3] = iLoadImage("images\\f4.png");
	//enemy bullet two
	enemyfourBulletPic = iLoadImage("images\\eb.png");


	///////////////////////ENEMY FIVE IMAGE INCLUSION/////////////
	//enemy picture five
	enemyfivepic[0] = iLoadImage("images\\f1.png");
	enemyfivepic[1] = iLoadImage("images\\f2.png");
	enemyfivepic[2] = iLoadImage("images\\f3.png");
	enemyfivepic[3] = iLoadImage("images\\f4.png");
	//enemy bullet two
	enemyfiveBulletPic = iLoadImage("images\\eb.png");
	

	///////////////////////ENEMY SIX IMAGE INCLUSION/////////////
	//enemy picture six
	enemysixpic[0] = iLoadImage("images\\k1.png");
	enemysixpic[1] = iLoadImage("images\\k2.png");
	enemysixpic[2] = iLoadImage("images\\k3.png");
	enemysixpic[3] = iLoadImage("images\\k4.png");
	//enemy bullet six
	enemysixBulletPic = iLoadImage("images\\eb.png");


	///////////////////////ENEMY SEVEN IMAGE INCLUSION/////////////
	//enemy picture seven
	enemysevenpic[0] = iLoadImage("images\\k1.png");
	enemysevenpic[1] = iLoadImage("images\\k2.png");
	enemysevenpic[2] = iLoadImage("images\\k3.png");
	enemysevenpic[3] = iLoadImage("images\\k4.png");
	//enemy bullet seven
	enemysevenBulletPic = iLoadImage("images\\eb.png");


	///////////////////////ENEMY EIGHT IMAGE INCLUSION/////////////
	//enemy picture eight
	enemyeightpic[0] = iLoadImage("images\\f1.png");
	enemyeightpic[1] = iLoadImage("images\\f2.png");
	enemyeightpic[2] = iLoadImage("images\\f3.png");
	enemyeightpic[3] = iLoadImage("images\\f4.png");
	//enemy bullet eight
	enemyeightBulletPic = iLoadImage("images\\eb.png");


	///////////////////////ENEMY NINE IMAGE INCLUSION/////////////
	//enemy picture nine
	enemyninepic[0] = iLoadImage("images\\k1.png");
	enemyninepic[1] = iLoadImage("images\\k2.png");
	enemyninepic[2] = iLoadImage("images\\k3.png");
	enemyninepic[3] = iLoadImage("images\\k4.png");
	//enemy bullet nine
	enemynineBulletPic = iLoadImage("images\\eb.png");


	///////////////////////ENEMY TEN IMAGE INCLUSION/////////////
	//enemy picture ten
	enemytenpic[0] = iLoadImage("images\\k1.png");
	enemytenpic[1] = iLoadImage("images\\k2.png");
	enemytenpic[2] = iLoadImage("images\\k3.png");
	enemytenpic[3] = iLoadImage("images\\k4.png");
	//enemy bullet ten
	enemytenBulletPic = iLoadImage("images\\eb.png");


	///////////////////////ENEMY ELEVEN IMAGE INCLUSION/////////////
	//enemy picture eleven
	enemyelevenpic[0] = iLoadImage("images\\c1.png");
	enemyelevenpic[1] = iLoadImage("images\\c2.png");
	enemyelevenpic[2] = iLoadImage("images\\c3.png");
	enemyelevenpic[3] = iLoadImage("images\\c4.png");
	//enemy bullet ten
	enemyelevenBulletPic = iLoadImage("images\\eb.png");


	///////////////////////ENEMY TWELVE IMAGE INCLUSION/////////////
	//enemy picture twelve
	enemytwelvepic[0] = iLoadImage("images\\c1.png");
	enemytwelvepic[1] = iLoadImage("images\\c2.png");
	enemytwelvepic[2] = iLoadImage("images\\c3.png");
	enemytwelvepic[3] = iLoadImage("images\\c4.png");
	//enemy bullet twelve
	enemytwelveBulletPic = iLoadImage("images\\eb.png");


	///////////////////////ENEMY THIRTEEN IMAGE INCLUSION/////////////
	//enemy picture thirteen
	enemythirteenpic[0] = iLoadImage("images\\c1.png");
	enemythirteenpic[1] = iLoadImage("images\\c2.png");
	enemythirteenpic[2] = iLoadImage("images\\c3.png");
	enemythirteenpic[3] = iLoadImage("images\\c4.png");
	//enemy bullet thirteen
	enemythirteenBulletPic = iLoadImage("images\\eb.png");


	///////////////////////ENEMY FOURTEEN IMAGE INCLUSION/////////////
	//enemy picture fourteen
	enemyfourteenpic[0] = iLoadImage("images\\c1.png");
	enemyfourteenpic[1] = iLoadImage("images\\c2.png");
	enemyfourteenpic[2] = iLoadImage("images\\c3.png");
	enemyfourteenpic[3] = iLoadImage("images\\c4.png");
	//enemy bullet fourteen
	enemyfourteenBulletPic = iLoadImage("images\\eb.png");


	///////////////////////ENEMY FIFTEEN IMAGE INCLUSION/////////////
	//enemy picture fifteen
	enemyfifteenpic[0] = iLoadImage("images\\boss1.png");
	enemyfifteenpic[1] = iLoadImage("images\\boss2.png");
	enemyfifteenpic[2] = iLoadImage("images\\boss3.png");
	enemyfifteenpic[3] = iLoadImage("images\\boss4.png");
	//enemy bullet fifteen
	enemyfifteenBulletPic = iLoadImage("images\\eb.png");
	bossbullet=iLoadImage("images\\eb.png");
	//showing death of enemy 1
	dead1image[0]=iLoadImage("fire\\fire1.png");
	dead1image[1]=iLoadImage("fire\\fire1.png");
	dead1image[2]=iLoadImage("fire\\fire1.png");
	dead1image[3]=iLoadImage("fire\\fire2.png");
	dead1image[4]=iLoadImage("fire\\fire3.png");
	dead1image[5]=iLoadImage("fire\\fire3.png");
	dead1image[6]=iLoadImage("fire\\fire4.png");
	dead1image[7]=iLoadImage("fire\\fire5.png");
	//showing death of enemy 2
	dead2image[0]=iLoadImage("fire\\fire1.png");
	dead2image[1]=iLoadImage("fire\\fire1.png");
	dead2image[2]=iLoadImage("fire\\fire1.png");
	dead2image[3]=iLoadImage("fire\\fire2.png");
	dead2image[4]=iLoadImage("fire\\fire3.png");
	dead2image[5]=iLoadImage("fire\\fire3.png");
	dead2image[6]=iLoadImage("fire\\fire4.png");
	dead2image[7]=iLoadImage("fire\\fire5.png");
	//showing death of enemy 3
	dead3image[0]=iLoadImage("fire\\fire1.png");
	dead3image[1]=iLoadImage("fire\\fire1.png");
	dead3image[2]=iLoadImage("fire\\fire1.png");
	dead3image[3]=iLoadImage("fire\\fire2.png");
	dead3image[4]=iLoadImage("fire\\fire3.png");
	dead3image[5]=iLoadImage("fire\\fire3.png");
	dead3image[6]=iLoadImage("fire\\fire4.png");
	dead3image[7]=iLoadImage("fire\\fire5.png");
	//showing death of enemy 4
	dead4image[0]=iLoadImage("fire\\fire1.png");
	dead4image[1]=iLoadImage("fire\\fire1.png");
	dead4image[2]=iLoadImage("fire\\fire1.png");
	dead4image[3]=iLoadImage("fire\\fire2.png");
	dead4image[4]=iLoadImage("fire\\fire3.png");
	dead4image[5]=iLoadImage("fire\\fire3.png");
	dead4image[6]=iLoadImage("fire\\fire4.png");
	dead4image[7]=iLoadImage("fire\\fire5.png");
	//showing death of enemy 5
	dead5image[0]=iLoadImage("fire\\fire1.png");
	dead5image[1]=iLoadImage("fire\\fire1.png");
	dead5image[2]=iLoadImage("fire\\fire1.png");
	dead5image[3]=iLoadImage("fire\\fire2.png");
	dead5image[4]=iLoadImage("fire\\fire3.png");
	dead5image[5]=iLoadImage("fire\\fire3.png");
	dead5image[6]=iLoadImage("fire\\fire4.png");
	dead5image[7]=iLoadImage("fire\\fire5.png");
	//showing death of enemy 6
	dead6image[0]=iLoadImage("fire\\fire1.png");
	dead6image[1]=iLoadImage("fire\\fire1.png");
	dead6image[2]=iLoadImage("fire\\fire1.png");
	dead6image[3]=iLoadImage("fire\\fire2.png");
	dead6image[4]=iLoadImage("fire\\fire3.png");
	dead6image[5]=iLoadImage("fire\\fire3.png");
	dead6image[6]=iLoadImage("fire\\fire4.png");
	dead6image[7]=iLoadImage("fire\\fire5.png");

	//showing death of enemy 7
	dead7image[0]=iLoadImage("fire\\fire1.png");
	dead7image[1]=iLoadImage("fire\\fire1.png");
	dead7image[2]=iLoadImage("fire\\fire1.png");
	dead7image[3]=iLoadImage("fire\\fire2.png");
	dead7image[4]=iLoadImage("fire\\fire3.png");
	dead7image[5]=iLoadImage("fire\\fire3.png");
	dead7image[6]=iLoadImage("fire\\fire4.png");
	dead7image[7]=iLoadImage("fire\\fire5.png");
	//showing death of enemy 8
	dead8image[0]=iLoadImage("fire\\fire1.png");
	dead8image[1]=iLoadImage("fire\\fire1.png");
	dead8image[2]=iLoadImage("fire\\fire1.png");
	dead8image[3]=iLoadImage("fire\\fire2.png");
	dead8image[4]=iLoadImage("fire\\fire3.png");
	dead8image[5]=iLoadImage("fire\\fire3.png");
	dead8image[6]=iLoadImage("fire\\fire4.png");
	dead8image[7]=iLoadImage("fire\\fire5.png");
	//showing death of enemy 9
	dead9image[0]=iLoadImage("fire\\fire1.png");
	dead9image[1]=iLoadImage("fire\\fire1.png");
	dead9image[2]=iLoadImage("fire\\fire1.png");
	dead9image[3]=iLoadImage("fire\\fire2.png");
	dead9image[4]=iLoadImage("fire\\fire3.png");
	dead9image[5]=iLoadImage("fire\\fire3.png");
	dead9image[6]=iLoadImage("fire\\fire4.png");
	dead9image[7]=iLoadImage("fire\\fire5.png");
	//showing death of enemy 10
	dead10image[0]=iLoadImage("fire\\fire1.png");
	dead10image[1]=iLoadImage("fire\\fire1.png");
	dead10image[2]=iLoadImage("fire\\fire1.png");
	dead10image[3]=iLoadImage("fire\\fire2.png");
	dead10image[4]=iLoadImage("fire\\fire3.png");
	dead10image[5]=iLoadImage("fire\\fire3.png");
	dead10image[6]=iLoadImage("fire\\fire4.png");
	dead10image[7]=iLoadImage("fire\\fire5.png");
	//showing death of enemy 11
	dead11image[0]=iLoadImage("fire\\fire1.png");
	dead11image[1]=iLoadImage("fire\\fire1.png");
	dead11image[2]=iLoadImage("fire\\fire1.png");
	dead11image[3]=iLoadImage("fire\\fire2.png");
	dead11image[4]=iLoadImage("fire\\fire3.png");
	dead11image[5]=iLoadImage("fire\\fire3.png");
	dead11image[6]=iLoadImage("fire\\fire4.png");
	dead11image[7]=iLoadImage("fire\\fire5.png");
	//showing death of enemy 12
	dead12image[0]=iLoadImage("fire\\fire1.png");
	dead12image[1]=iLoadImage("fire\\fire1.png");
	dead12image[2]=iLoadImage("fire\\fire1.png");
	dead12image[3]=iLoadImage("fire\\fire2.png");
	dead12image[4]=iLoadImage("fire\\fire3.png");
	dead12image[5]=iLoadImage("fire\\fire3.png");
	dead12image[6]=iLoadImage("fire\\fire4.png");
	dead12image[7]=iLoadImage("fire\\fire5.png");
	//showing death of enemy 13
	
	dead13image[0]=iLoadImage("fire\\fire1.png");
	dead13image[1]=iLoadImage("fire\\fire1.png");
	dead13image[2]=iLoadImage("fire\\fire1.png");
	dead13image[3]=iLoadImage("fire\\fire2.png");
	dead13image[4]=iLoadImage("fire\\fire3.png");
	dead13image[5]=iLoadImage("fire\\fire3.png");
	dead13image[6]=iLoadImage("fire\\fire4.png");
	dead13image[7]=iLoadImage("fire\\fire5.png");

	//showing death of enemy 14
	dead14image[0]=iLoadImage("fire\\fire1.png");
	dead14image[1]=iLoadImage("fire\\fire1.png");
	dead14image[2]=iLoadImage("fire\\fire1.png");
	dead14image[3]=iLoadImage("fire\\fire2.png");
	dead14image[4]=iLoadImage("fire\\fire3.png");
	dead14image[5]=iLoadImage("fire\\fire3.png");
	dead14image[6]=iLoadImage("fire\\fire4.png");
	dead14image[7]=iLoadImage("fire\\fire5.png");

	//showing death of boss
	dead15image[0]=iLoadImage("fire\\fire1.png");
	dead15image[1]=iLoadImage("fire\\fire1.png");
	dead15image[2]=iLoadImage("fire\\fire1.png");
	dead15image[3]=iLoadImage("fire\\fire2.png");
	dead15image[4]=iLoadImage("fire\\fire3.png");
	dead15image[5]=iLoadImage("fire\\fire3.png");
	dead15image[6]=iLoadImage("fire\\fire4.png");
	dead15image[7]=iLoadImage("fire\\fire5.png");

	///////////////GAME OVER PAGE IMAGE INCLUSION///////////////////////
	//game over page
	gameOver2=iLoadImage("images\\game over 2.png");
	

}


//////////------------------------------------------------|-------------------------------------------------////////////////////

