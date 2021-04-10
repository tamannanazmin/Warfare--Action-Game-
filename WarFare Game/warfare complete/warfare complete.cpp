#include "iGraphics.h"               //inclusion of header files
#include "bitmap_loader.h"
#include "myheader.h"
#include "Level 1.h"
#include "level2.h"

///////////////////////////////////////////VARIABLE DECLARATIONS///////////////////////////

/////////////////////////MENU VARIABLES/////////////////
// for menu
int credit;
int home;
int ins;
int hg;
int lev;
int logo;

//menu_variables
int mposx,  mposy; 
int mode=0;
int start=0;
int point_x=200,point_y=200;
int n=0,m=0;

//menu timer
int timer1,timer2,timer3,timer4,timer5,timer6;

//----------------------------------------------------|------------------------------------------------------------------------//



////////////////////////GAME LOADING VARIABLES//////////////////
//for loading
int load[5];
int loadIndex=0;
bool loadfinish=false;
void functionForLoad();

//----------------------------------------------------|------------------------------------------------------------------------//

///////////////////////////////LEVEL CHANGE VARIABLES////////////////////////////
//level change  variables;
bool level1=false;
bool level2=false;

//----------------------------------------------------|------------------------------------------------------------------------//

///////////////////////FUNCTION FOR REINITIALIZING VALUES OF VARIABLE FOR NEW GAME OF LEVEL ONE/////////////////////////////
void newGame(){
	over=false; interLevelTwo=false;//for game over 
	 scoress[3000]; score=0;//for score
	highScore=0; FinalScore;//for high score
	r = 0; g = 0; b = 0; //for color
	playerCorX = 0; playerCorY = 80; playerIndex = 0;playerLife = 100;playerDeadX=0;playerDeadY=80;playerDeadIndex=0;playerDead=false;playerDeadImage[5];//player coordinate and life
	jump = false; jumpUp = false; playerCordinateJumpSpeedup = 2; playerCordinateJumpSpeeddown = 2; jumpLimit = 350; playerCordinateJump = 0;//player jump 
	bulx = 90; buly = 195; bulletRun = false;//player bullet one
	bultwox=50; bultwoy =195; bullettwoRun=false;//player bullet two
	bulthreex=10; bulthreey =195; bulletthreeRun=false;//player bullet three
	enemyCorX=screenWidth; enemyCorY=80; enemyIndex = 0; enemyLife = 10000;//enemy one
	bx = enemyCorX; by = 180; showBullet = false;//enemy one bullet
	enemytwoCorX=screenWidth; enemytwoCorY=80; enemytwoIndex = 0; enemytwoLife = 10000;//enemy two
	btwox = enemytwoCorX; btwoy = 220; showBullettwo = false;//enemy two bullet
	enemythreeCorX=screenWidth; enemythreeCorY=80; enemythreeIndex = 0; enemythreeLife = 10000;//enemy three
	bthreex = enemythreeCorX; bthreey = 180; showBulletthree = false;//enemy three bullet
	enemyfourCorX=screenWidth;enemyfourCorY=80;enemyfourIndex = 0; enemyfourLife = 10000;//enemy four
	bfourx = enemyfourCorX;bfoury = 180;showBulletfour = false;//enemy four bullet
	enemyfiveCorX=screenWidth;enemyfiveCorY=80;enemyfiveIndex = 0;enemyfiveLife = 10000;//enemy five
	bfivex = enemyfiveCorX;bfivey = 220;showBulletfive = false;//enemy five bullet
	enemysixCorX=screenWidth;enemysixCorY=80;enemysixIndex = 0;//enemy six
	enemysixLife = 10000;bsixx = enemysixCorX;bsixy = 150;showBulletsix = false;//enemy six bullet
	enemysevenCorX=screenWidth;enemysevenCorY=80;enemysevenIndex = 0;enemysevenLife = 100000;//enemy seven
	bsevenx = enemysevenCorX;bseveny = 130;showBulletseven = false;//enemy seven bullet
	enemysevenDeadImage[8];enemysevenDeadIndex=0;enemysevenDeadX;enemysevenDeadY;enemysevenDead=false;//enemy seven death showing
	collisionCheck = false;//collision for player
	enemyCheck=false;enemytwoCheck=false;enemythreeCheck=false;enemyfourCheck=false;enemyfiveCheck=false;enemysixCheck=false;enemysevenCheck=false;//collision for enemy 1,2,3,4,5,6,7
	obx=screenWidth;oby=50;showOb=false;//obstacle	
	hx=screenWidth;hy=400;showHeart=false;//for collecting extra point(heart)
	
	//bird flying
	for(int i = 0 ; i<3 ;i++)
	{
		bird[i].bird_x = 0;
		bird[i].bird_index = 0;
	}

	bird[0].bird_y = 800;
	bird[1].bird_y = 700;
	bird[2].bird_y = 750;
}

//----------------------------------------------------|------------------------------------------------------------------------//


///////////////////////FUNCTION FOR REINITIALIZING VALUES OF VARIABLE FOR NEW GAME OF LEVEL TWO/////////////////////////////
void forStartingLevelTwo()
{ 
 over2=false;//game over 
 planCorX=0;planCorY=20;planIndex=0;planLife=10000;bar=planLife/20;//movement of player
 bulletx = 130;bullety = 25;bulletMove = false;//movement of player bullet
 bullettwox =130;bullettwoy = 30;bullettwoMove = false;//movement of player bullet two
 bulletthreex = 130;bulletthreey = 60;bulletthreeMove = false;//movement of player bullet three
 enemyX=screenWidth;enemyY=100;enemyIn = 0;enemylife = 1000;//enemy one 
 enemybx =enemyY+20;enemyby = 120;showEnemyBullet = false;//enemy bullet one
 dead1image[8];dead1x;dead1y;dead1index=0;dead1=false;//showing death of enemy 1
 enemytwoX=screenWidth;enemytwoY=800;enemytwoIn = 0;enemytwolife = 1000;//enemy two
 enemytwobx = enemytwoY+20;enemytwoby = 820;enemybulletShow = false;//enemy bullet two
 dead2image[8];dead2x;dead2y;dead2index=0;dead2=false;//showing death of enemy 2
 enemythreeX=screenWidth+400;enemythreeY=500;enemythreeIn = 0;enemythreelife = 1000;e3=false;//enemy three
 enemythreebx = enemythreeX;enemythreeby = 520;showEnemythreeBullet = false;//enemy bullet three
 dead3image[8];dead3x;dead3y;dead3index=0;dead3=false;//showing death of enemy 3
 enemyfourX=screenWidth+500;enemyfourY=200;enemyfourIn = 0;enemyfourlife = 1000;e4=false;//enemy four  (the enemy which will come after the enemy one)
 enemyfourbx = enemyfourX;enemyfourby = 220;//enemy bullet four
 dead4image[8];dead4x;dead4y;dead4index=0;dead4=false;//showing death of enemy 4
 enemyfiveX=screenWidth+680;enemyfiveY=500;enemyfiveIn = 0;enemyfivelife = 1000;e5=false;//enemy five (behind enemy three)
 enemyfivebx = enemyfiveX;enemyfiveby = 520;//enemy bullet five
 dead5image[8];dead5x;dead5y;dead5index=0;dead5=false;//showing death of enemy 5
 enemysixX=screenWidth+940;enemysixY=400;enemysixIn = 0;enemysixlife = 1000;e6=false;//enemy six(behind enemy five)
 enemysixbx = enemysixX;enemysixby = 420;//enemy bullet six
 dead6image[8];dead6x;dead1y;dead6index=0;dead6=false;//showing death of enemy 6
 enemysevenX=screenWidth+950;enemysevenY=150;enemysevenIn = 0;enemysevenlife = 1000;e7=false;//enemy seven(behind enemy four)
 enemysevenbx = enemysevenX;enemysevenby = 170;//enemy bullet seven
 dead7image[8];dead7x;dead7y;dead7index=0;dead7=false;//showing death of enemy 7
 enemyeightX=screenWidth+560;enemyeightY=750;enemyeightIn = 0;enemyeightlife = 1000;e8=false;//enemy eight(behind enemy two)
 enemyeightbx = enemyeightX;enemyeightby = 770;//enemy bullet eight
 dead8image[8];dead8x;dead8y;dead8index=0;dead8=false;//showing death of enemy 8
 enemynineX=screenWidth+960;enemynineY=550;enemynineIn = 0;enemyninelife = 1000;e9=false;//enemy nine(behind enemy five and up enemy six)
 enemyninebx = enemynineX;enemynineby = 570;//enemy bullet nine
 dead9image[8];dead9x;dead9y;dead9index=0;dead9=false;//showing death of enemy 9
 enemytenX=screenWidth+950;enemytenY=750;enemytenIn = 0;enemytenlife = 1000;e10=false;//enemy ten(behind enemy eight and up of enemy nine)
 enemytenbx = enemytenX;enemytenby = 770;//enemy bullet ten
 dead10image[8];dead10x;dead1y;dead10index=0;dead10=false;//showing death of enemy 10
 enemyelevenX=screenWidth+1300 ; enemyelevenY=750;enemyelevenIn = 0;enemyelevenlife = 1000;e11=false;//enemy eleven(behind enemy ten)
 enemyelevenbx = enemyelevenX;enemyelevenby = 770;//enemy bullet eleven
 dead11image[8];dead11x;dead11y;dead11index=0;dead11=false;//showing death of enemy 11
 enemytwelveX=screenWidth+1300;enemytwelveY=150;enemytwelveIn = 0;enemytwelvelife = 1000;e12=false;//enemy twelve(behind enemy seven)
 enemytwelvebx = enemytwelveX;enemytwelveby = 170;//enemy bullet twelve
 dead12image[8];dead12x;dead12y;dead12index=0;dead12=false;//showing death of enemy 12
 enemythirteenX=screenWidth+1400;enemythirteenY=550;enemythirteenIn = 0;enemythirteenlife = 1000;e13=false;//enemy thirteen()
 enemythirteenbx = enemynineX;enemythirteenby = 570;//enemy bullet thirteen
 dead13image[8];dead13x;dead13y;dead13index=0;dead13=false;//showing death of enemy 13
 enemyfourteenX=screenWidth+1400;enemyfourteenY=300;enemyfourteenIn = 0;enemyfourteenlife = 1000;e14=false;//enemy fourteen()
 enemyfourteenbx = enemyfourteenX;enemyfourteenby = 320;//enemy bullet fourteen
 dead14image[8];dead14x;dead14y;dead14index=0;dead14=false;//showing death of enemy 14
 enemyfifteenX=screenWidth+1900;enemyfifteenY=100;enemyfifteenIn = 0;enemyfifteenlife = 1000;e15=false;//enemy fifteen()
 enemyfifteenbx = enemyfifteenX;enemyfifteenby = enemyfifteenY+50;//enemy bullet fifteen
 bossx = enemyfifteenX;bossy = enemyfifteenY+20;//enemy bullet  two for fifteen enemy
dead15image[8];dead15x;dead15y;dead15index=0;dead15=false;
 collisionCheckPlan = false;collisionCheckPlantwo = false;//collision 
 collisionCheckEnemy=false;collisionCheckEnemytwo=false;collisionCheckEnemythree=false;collisionCheckEnemyfour=false;collisionCheckEnemyfive=false;//enemy collision (1-5)
 collisionCheckEnemysix=false;collisionCheckEnemyseven=false;collisionCheckEnemyeight=false;collisionCheckEnemynine=false;collisionCheckEnemyten=false;//enemy collision (6-10)
 collisionCheckEnemyeleven=false;collisionCheckEnemytwelve=false;collisionCheckEnemythirteen=false;collisionCheckEnemyfourteen=false;collisionCheckEnemyfifteen=false;//enemy collision (11-15)
}

///////////////////FUNCTION FOR GAME LOADING/////////////////////////
//for loading
void fuctionForLoad(){
	loadIndex++;
	if(loadIndex>=5)
	{
		 loadfinish=true;
	}
}

//----------------------------------------------------|------------------------------------------------------------------------//



///////////////////////////////LEVEL TWO BACKGROUND CHANGE////////////////////////////
//background changing functions
void change_background()
{ 
	for(int i=0;i<2;i++)
	{
	background_x[i]-=10;
	if(background_x[i]<=-1800)

	background_x[i]= 1800;
	}
}


////////////////////////////FUNCTION FOR SWITCHING PAGES FROM MENU//////////////////////////
//game page logic
void gameState()
{
	if(n==0)                   //////////////////////FOR LOADING AND LOGO PAGE
	{
		if(loadfinish==true)
		{
			iShowImage(0,0,1800,900,logo);
			iPauseTimer(timer1);
			iPauseTimer(timer2);
			iPauseTimer(timer3);
			iPauseTimer(timer4);
			iPauseTimer(timer5);
			iPauseTimer(timer6);
		}
	}

	if(n==10)
	{
		iShowImage(0,0,1800,900,home);
		iPauseTimer(timer1);
		iPauseTimer(timer2);
		iPauseTimer(timer3);
		iPauseTimer(timer4);
		iPauseTimer(timer5);
		iPauseTimer(timer6);
		

	}
	
	if(n==1 )           //////////////STARTING LEVEL 1
	{

		iResumeTimer(timer1);
		iResumeTimer(timer2);
		iResumeTimer(timer3);
		iResumeTimer(timer4);
		iResumeTimer(timer5);
		iResumeTimer(timer6);
		drawFunctions();

	}
	if (n == 2)    //////////////////INSTRUCTION PAGE
	{ 
	iShowImage(0,0,1800,900,ins);
	}

	if (n == 3)  ///////////////////HIGHSCORE PAGE
	{ 
		
		iShowImage(0,0,1800,900,hg);
		HighScoreCalculate();
		HighScoreShow();
	}


	if (n == 4)     ////////////////CREDIT PAGE
	{
		
		iShowImage(0,0,1800,900,credit);
	}
	
	if (n == 5) 
	{
		
		iPauseTimer(timer1);
		iPauseTimer(timer2);
		iPauseTimer(timer3);
		iPauseTimer(timer4);
		iPauseTimer(timer5);
		iPauseTimer(timer6);
	}

	if ( n==6)                      /////////////////COMING BACK TO MENU
	{
		iPauseTimer(timer1);
		iPauseTimer(timer2);
		iPauseTimer(timer3);
		iPauseTimer(timer4);
		iPauseTimer(timer5);
		iPauseTimer(timer6);
		
	iShowImage(0,0,1800,900,home);
	
	}

	if ( n==7)           ////////////LEVEL CHOOSING PAGE
	{
		
	iShowImage(0,0,1800,900,lev);
	
	}
	
	//level_1
	if ( n==8)             ///////////////FOR PLAYING LEVEL 1
	{
		
		iResumeTimer(timer1);
		iResumeTimer(timer2);
		iResumeTimer(timer3);
		iResumeTimer(timer4);
		iResumeTimer(timer5);
		iResumeTimer(timer6);
		
		drawFunctions();
	}
	//level2
	if ( n==9)                  ///////////////FOR PLAYING LEVEL 2
	{
		iResumeTimer(timer1);
		iResumeTimer(timer2);
		iResumeTimer(timer3);
		iResumeTimer(timer4);
		iResumeTimer(timer5);
		iResumeTimer(timer6);
		
		LevelTwoDrawFunctions();
	}

}

//----------------------------------------------------|------------------------------------------------------------------------//

void iMouseMove(int mx, int my)
{
	
}

void iPassiveMouse(int mx, int my)
{
	
}

void iMouse(int button, int state, int mx, int my)
{
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		
		//for start game
		if (my <610 && my>552) { n = 1; }

		//for level
		if (my <540 && my>462) {
			n = 7;
			if(n==7)
			{
				if(my<540 && my>462)
			{
				n=8;
			}
			if(my<450 && my>362)
			{
				n=9;
			}
			}
			
		}

		//For instruction
		if (my <450 && my>362) { n = 2; }

		//for highscore
		if (my <340 && my>262){ n = 3;}

		//for about
		if (my <240 && my>162) { n = 4;}

		//for exit
		if (my <140 && my>62) { exit(0);}
		
	}
}

//----------------------------------------------------|------------------------------------------------------------------------//

void iPassiveMouseMove(int mx,int my)
{
	
	point_x =mx;
	point_y = my;
		
	
  
}




void iKeyboard(unsigned char key)
{
	if (key == ' ')
	{
		//level1
		bulletRun = true;
		bullettwoRun=true;
		bulletthreeRun=true;
		
		//level2
		bulletMove = true;
		bullettwoMove=true;
		bulletthreeMove=true;
		//bullettwoMove=true;
	
	}

	if(key == 'm')              ////////TURNING SOUND OFF
	{
		PlaySound(0,0,0);
		
	}

	if(key == 'p')             ////////TURNING SOUND ON
	{
		PlaySound("music\\sound",NULL,SND_LOOP | SND_ASYNC);
		
	}
	


	if(key == 's')       ///////////////GOING TO MENU PAGE FROM LOGO PAGE
	{
		n = 10;
		playstart=false;
		playstart2= false;
	}
	if(key == 'n')            ////////////STARTING LEVEL 1
	{
		n = 1;
		playstart=true;
		playstart2= false;
		newGame();
	}


	
	if(key == 'i')             /////////////INSTRUCTION PAGE
	{
		
		n = 2;
	}
	if(key == 'h')         ////////////HIGHSCORE PAGE
	{
		
		n = 3;
	}
	if(key == 'a')        ///////////ABOUT/CREDITS PAGE
	{
		
		n = 4;
	}
	if(key == 'e')
	{
		
		n = 5;
	}
	if(key =='b')         //////////////COMING BACK TO MENU PAGE
	{
		n = 6;
	}

	if(key =='l')         ///////CHOOSING LEVEL PAGE
	{
		n = 7;
	}
	
	if(key =='1')           ////////////PLAYING LEVEL 1
	{
		n = 8;
		playstart= true;
		newGame();
	}

	if(key =='2')          //////////////PLAYING LEVEL 2
	{
		n = 9;
		playstart2= true;
		forStartingLevelTwo();
	}

}
//----------------------------------------------------|------------------------------------------------------------------------//


void iSpecialKeyboard(unsigned char key)
{

	if(key == GLUT_KEY_END)
	{
		exit(0);	
	}
	if (key == GLUT_KEY_UP)
	{
		//level1if (!jump)
		{
			jump = true;
			jumpUp = true;
			
		}

		//level2
		planCorY+=15;
		bullety+=15;
		bullettwoy+=15;
		bulletthreey+=15;
		//bullettwoy+=10;
		if(bullety>screenHeight-50)
		{
			bullety=screenHeight-50;
		}
		if(bullettwoy>screenHeight-50)
		{
			bullettwoy=screenHeight-50;
		}
		if(bulletthreey>screenHeight-50)
		{
			bulletthreey=screenHeight-50;
		}
		/*if(bullettwoy>screenHeight-50)
		{
			bullettwoy=screenHeight-50;
		}
		*/
		if(planCorY>screenHeight-50)
		{
			planCorY=screenHeight-50;
		}
	}
		
		else if(key==GLUT_KEY_DOWN)
	{
		planCorY-=15;
		bullety-=15;
		bullettwoy-=15;
		bulletthreey-=15;
		//bullettwoy-=10;
		/*if(bullettwoy<0)
		{
			bullettwoy=0;
		}*/
		if(bullety<0)
		{
			bullety=25;
		}
		if(bullettwoy<0)
		{
			bullettwoy=30;
		}
		if(bulletthreey<0)
		{
			bulletthreey=60;
		}
		if(planCorY<0)
		{
			planCorY=20;
		}

	}

	if(key==GLUT_KEY_F1)
	{
		playstart= true;
		playstart2= false;
	}
	if(key==GLUT_KEY_F2)
	{
		playstart2= true;
		playstart =false;
	}


}

void iDraw()
{

	iClear();
	iShowImage(0,0,1800,900,load[loadIndex]);///////LOADING
	
	gameState();
	
	
}

int main()
{
	///////////////LOADING PAGE///////////////////
	iSetTimer(2000,fuctionForLoad);
	
	/////////BACKGROUND CHANGE OF LEVEL 1///////////////
	iSetTimer(30,change_background);
	
	
	//iSetTimer(100, changeForRun);//for player run.
	//for enemy run

	///////////////ENEMY MOVEMENY OF LEVEL 1//////////////
	iSetTimer(100, enemymove);

	//for enemy bullet 
	iSetTimer(5, FucntionForEnemyBullet);
	iSetTimer(20,obs);

	//////BIRD FLYING OF LEVEL 1/////////////////////////
	iSetTimer(40,changeBird);

	iInitialize(screenWidth, screenHeight, "WareFare");

	/////////////////MENU///////////////////////////
	//for menu
	credit=iLoadImage("photo\\credit.png");
	home=iLoadImage("photo\\home.png");
	ins=iLoadImage("photo\\instruction.png");
	hg=iLoadImage("photo\\highscore.png");
	lev=iLoadImage("photo\\level.png");
	logo=iLoadImage("photo\\logo.png");


	////////////////INCLUSION OF PLAYER IMAGES////////////////////
	//for runinng
	pic[0] = iLoadImage("images\\1.1.png");
	pic[1] = iLoadImage("images\\1.2.png");
	pic[2] = iLoadImage("images\\1.3.png");
	pic[3] = iLoadImage("images\\1.4.png");
	pic[4] = iLoadImage("images\\1.5.png");
	
	//for jumping
	jumpOne = iLoadImage("images\\1.2.png");
	jumpTwo = iLoadImage("images\\1.1.png");
	//for shooting
	bulletimage = iLoadImage("images\\b1.png");
	btwoimage = iLoadImage("images\\b1.png");
	bthreeimage = iLoadImage("images\\b1.png");

	///////////////////////INCLUSION OF ENEMY IMAGES/////////////////////
	//enemy picture one
	enemypicture[0] = iLoadImage("images\\e2.1.png");
	enemypicture[1] = iLoadImage("images\\e2.2.png");
	enemypicture[2] = iLoadImage("images\\e2.3.png");
	enemypicture[3] = iLoadImage("images\\e2.4.png");
	enemypicture[4] = iLoadImage("images\\e2.5.png");
	enemypicture[5] = iLoadImage("images\\e2.6.png");
	//enemy bullet one
	enemyBulletImage = iLoadImage("images\\bullet2.png");
	


	//enemy picture two
	enemytwopicture[0] = iLoadImage("images\\e3.1.png");
	enemytwopicture[1] = iLoadImage("images\\e3.2.png");
	enemytwopicture[2] = iLoadImage("images\\e3.3.png");
	enemytwopicture[3] = iLoadImage("images\\e3.4.png");
	enemytwopicture[4] = iLoadImage("images\\e3.5.png");
	enemytwopicture[5] = iLoadImage("images\\e3.6.png");
	//enemy bullet two
	enemytwoBulletImage = iLoadImage("images\\bullet2.png");

	//enemy picture three
	enemythreepicture[0] = iLoadImage("images\\e2.1.png");
	enemythreepicture[1] = iLoadImage("images\\e2.2.png");
	enemythreepicture[2] = iLoadImage("images\\e2.3.png");
	enemythreepicture[3] = iLoadImage("images\\e2.4.png");
	enemythreepicture[4] = iLoadImage("images\\e2.5.png");
	enemythreepicture[5] = iLoadImage("images\\e2.6.png");
	//enemy bullet three
	enemythreeBulletImage = iLoadImage("images\\bullet2.png");

	//enemy picture four
	enemyfourpicture[0] = iLoadImage("images\\e1.png");
	enemyfourpicture[1] = iLoadImage("images\\e2.png");
	enemyfourpicture[2] = iLoadImage("images\\e3.png");
	enemyfourpicture[3] = iLoadImage("images\\e4.png");
	enemyfourpicture[4] = iLoadImage("images\\e5.png");
	enemyfourpicture[5] = iLoadImage("images\\e6.png");
	//enemy bullet four
	enemyfourBulletImage = iLoadImage("images\\bullet2.png");

	//enemy picture five
	enemyfivepicture[0] = iLoadImage("images\\e3.1.png");
	enemyfivepicture[1] = iLoadImage("images\\e3.2.png");
	enemyfivepicture[2] = iLoadImage("images\\e3.3.png");
	enemyfivepicture[3] = iLoadImage("images\\e3.4.png");
	enemyfivepicture[4] = iLoadImage("images\\e3.5.png");
	enemyfivepicture[5] = iLoadImage("images\\e3.6.png");
	//enemy bullet five
	enemyfiveBulletImage = iLoadImage("images\\bullet2.png");

	//enemy picture six
	enemysixpicture[0] = iLoadImage("images\\2.1.png");
	enemysixpicture[1] = iLoadImage("images\\2.2.png");
	enemysixpicture[2] = iLoadImage("images\\2.3.png");
	enemysixpicture[3] = iLoadImage("images\\2.4.png");
	enemysixpicture[4] = iLoadImage("images\\2.5.png");
	enemysixpicture[5] = iLoadImage("images\\2.6.png");
	//enemy bullet six
	enemysixBulletImage = iLoadImage("images\\mis2.png");

	//enemy picture seven
	enemysevenpicture[0] = iLoadImage("images\\tank.png");
	enemysevenpicture[1] = iLoadImage("images\\tank.png");
	enemysevenpicture[2] = iLoadImage("images\\tank.png");
	enemysevenpicture[3] = iLoadImage("images\\tank.png");
	enemysevenpicture[4] = iLoadImage("images\\tank.png");
	enemysevenpicture[5] = iLoadImage("images\\tank.png");
	//enemy bullet seven
	enemysevenBulletImage = iLoadImage("images\\b1.png"); 


	////////////SPIKE TYPE OBSTACLE////////////////////
	//for obstacle
	obstacle=iLoadImage("images\\ob4.png");

	//////////////////////////SCORE COLLECTION/HEART//////////////////////////
	//for heart
	heart=iLoadImage("images\\h1.png");

	
	////////////////INCLUSION OF BACKGROUND IMAGES OF LEVEL 1//////////////////////////
	background[0] = iLoadImage("images\\bg.png");
	background[1] = iLoadImage("images\\bg1.png");


	////////////ATTACHMENT OF SOUND/////////////////////
	//sound
	PlaySound("music\\sound",NULL,SND_LOOP | SND_ASYNC);


	///////////////////GAME OVER IMAGES///////////////////////
	gameOver=iLoadImage("images\\game over 2.png");
	interlevelTwoImage=iLoadImage("images\\level 2 page.png");


	////////////MAIN FUNCTION OF LEVEL 2////////////////////
	levelTwoMainFunctions();

	//loading image
	load[0]=iLoadImage("images\\loading1.png");
	load[1]=iLoadImage("images\\loading2.png");
	load[2]=iLoadImage("images\\loading3.png");
	load[3]=iLoadImage("images\\loading4.png");
	load[4]=iLoadImage("images\\loading5.png");

	//For bird image
	birdImage[0]=iLoadImage("images\\a1.png");
	birdImage[1]=iLoadImage("images\\a2.png");
	birdImage[2]=iLoadImage("images\\a3.png");
	birdImage[3]=iLoadImage("images\\a4.png");
	birdImage[4]=iLoadImage("images\\a5.png");
	birdImage[5]=iLoadImage("images\\a6.png");
	birdImage[6]=iLoadImage("images\\a7.png");
	birdImage[7]=iLoadImage("images\\a8.png");
	birdImage[8]=iLoadImage("images\\a9.png");
	
	//playerDeadImage
	playerDeadImage[0]=iLoadImage("death\\1.7.png");
	playerDeadImage[1]=iLoadImage("death\\1.7.png");
	playerDeadImage[2]=iLoadImage("death\\1.8.png");
	playerDeadImage[3]=iLoadImage("death\\1.8.png");
	playerDeadImage[4]=iLoadImage("death\\1.8.png");
	playerDeadImage[5]=iLoadImage("death\\1.9.png");
	playerDeadImage[6]=iLoadImage("death\\1.9.png");
	playerDeadImage[7]=iLoadImage("death\\1.9.png");
	
	//showing enemy seven Dead Image
	enemysevenDeadImage[0]=iLoadImage("fire\\fire1.png");
	enemysevenDeadImage[1]=iLoadImage("fire\\fire1.png");
	enemysevenDeadImage[2]=iLoadImage("fire\\fire1.png");
	enemysevenDeadImage[3]=iLoadImage("fire\\fire2.png");
	enemysevenDeadImage[4]=iLoadImage("fire\\fire1.png");
	enemysevenDeadImage[5]=iLoadImage("fire\\fire1.png");
	enemysevenDeadImage[6]=iLoadImage("fire\\fire4.png");
	enemysevenDeadImage[7]=iLoadImage("fire\\fire5.png");
	iStart(); 

	return 0;
}

//----------------------------------------------------|------------------------------------------------------------------------//