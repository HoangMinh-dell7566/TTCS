#include <iostream>
#include <conio.h>
#include <Windows.h>
#include<graphics.h>
#include<queue>
#define MAX 50
using namespace std;
int tmp;
int x = 10; 
int y = 11;
int dl = 300;
//-----------------------------------------------
// Ham to mau chu.
void textcolor(int x)
{
	HANDLE mau;
	mau=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(mau,x);
}

//-- Mo phong tao cay
void DoHoaMoPhongVeCay() // 6 8 3 5 2 7 9 
{
	delay(dl);
	setlinestyle(3,1,3);
	setcolor(8);
	//---- node goc (7)
	settextstyle(0,0,4);
	outtextxy(435,53,"6");
	circle(450,70,25);
	
	//-- Tu (7) ve ham line() toi 8	
	
	delay(dl);
	line(467,87,583,153); 
	delay(dl);
	settextstyle(0,0,4);
	outtextxy(585,153,"8");
	circle(600,170,25);
	
	//--- Tu (7) ve ham line() toi 3
	delay(dl);
	line(433,87,317,153); 
	delay(dl);
	settextstyle(0,0,4);
	outtextxy(285,153,"3"); 
	circle(300,170,25);
	
	//-- Tu (2) ve 2 ham line()
	
	
	
	//-- Node la (3)
	delay(dl);
	line(317,187,383,253); //-- tang x1,y1 di 17, giam x2,y2 17
	delay(dl);
	settextstyle(0,0,4);
	outtextxy(385,253,"5"); //-- Giam x 15, giam y 17 
	circle(400,270,25);
	
	
	
	
	//-- Node la (1)
	delay(dl);
	line(283,187,217,253); //-- Giam x1,y2,x2 di 17, tang y1 17
	delay(dl);
	settextstyle(0,0,4);
	outtextxy(185,253,"2"); //-- Giam x 15, giam y 17 
	circle(200,270,25);
	

		
	
	
	//-- Node la (6)
	delay(dl);
	line(583,187,517,253); //-- tang y1, giam x1,x2,y2
	delay(dl);
	settextstyle(0,0,4);
	outtextxy(483,253,"7"); //-- Giam x 15, giam y 17
	circle(500,270,25);
	
	
	
	
	
	//-- Node la (8)
	delay(dl);
	line(617,187,683,253);
	delay(dl);
	settextstyle(0,0,4);
	outtextxy(685,253,"9"); //-- Giam x 15, giam y 17
	circle(700,270,25);
	
}
//--------------------------------------------------------------
void Tatsang()
{
	delay(dl);
	//-- tat den 2 ----------
	setcolor(8);
	settextstyle(0,0,4);
	outtextxy(185,253,"2"); 
	circle(200,270,25);
	
	//-- tat den 3 -------------------------------------------
	settextstyle(0,0,4);
	outtextxy(285,153,"3"); 
	circle(300,170,25);	
	
	//--- tat den 5 -------------
	settextstyle(0,0,4);
	outtextxy(385,253,"5");
	circle(400,270,25);
	
	//-- Tat den 7 ---------------------------
	settextstyle(0,0,4);
	outtextxy(435,53,"6");
	circle(450,70,25);
		
	//---- tat den 6 -----------------------
	settextstyle(0,0,4);
	outtextxy(483,253,"7"); 
	circle(500,270,25);
	
	//--- Tat den 8 ---------
	settextstyle(0,0,4);
	outtextxy(585,153,"8");
	circle(600,170,25);	
		
	//--- tat den 9 --------------------
	settextstyle(0,0,4);
	outtextxy(685,253,"9");
	circle(700,270,25);			
}	
//----------------------------------------------------------------
void tatLRN(){
	//--- in 2 -------------------
	setcolor(0);
	settextstyle(1,0,3);
	outtextxy(225,518,"2"); //-- Giam x 10, giam y 12
	circle(235,530,20);
	
	//-- in 3 ----------------------------
	settextstyle(1,0,3);
	outtextxy(325,518,"3"); //-- Giam x 10, giam y 12
	circle(335,530,20);
	
	//---- in 5 ----------------------------
	settextstyle(1,0,3);
	outtextxy(425,518,"5"); //-- Giam x 10, giam y 12
	circle(435,530,20);
	
	//--- in 7 -------------------------------------
	settextstyle(1,0,3);
	outtextxy(525,518,"7"); //-- Giam x 10, giam y 12
	circle(535,530,20);
	
		//-- in 8 ---------------------------------------
	settextstyle(1,0,3);
	outtextxy(625,518,"8"); //-- Giam x 10, giam y 12
	circle(635,530,20);
	
		//-- in 9 ------------------------------------------
	settextstyle(1,0,3);
	outtextxy(725,518,"9"); //-- Giam x 10, giam y 12
	circle(735,530,20);
	
		
	//-- in 6 -----------------------------------------
	settextstyle(1,0,3);
	outtextxy(825,518,"6"); //-- Giam x 10, giam y 12
	circle(835,530,20);
}
void tatLNR(){
		//-- in 2 -----------------
	setcolor(0);
	settextstyle(1,0,3);
	outtextxy(225,448,"2");
	circle(235,460,20);
	
	//-- in 3 ----------------------
	settextstyle(1,0,3);
	outtextxy(325,448,"3"); //x + 100
	circle(335,460,20);

	//--- in 5 -----------------------
	settextstyle(1,0,3);
	outtextxy(425,448,"5"); //x + 100
	circle(435,460,20);

	//-- in 6 ------------------------
	settextstyle(1,0,3);
	outtextxy(525,448,"6"); //-- Giam x 10, giam y 12
	circle(535,460,20);

	//---- in 7 ---------------------
	settextstyle(1,0,3);
	outtextxy(625,448,"7"); //x + 100
	circle(635,460,20);

	//--- in 8 --------------------
	settextstyle(1,0,3);
	outtextxy(725,448,"8"); //x + 100
	circle(735,460,20);

	//-- in 9 ----------------------------------
	settextstyle(1,0,3);
	outtextxy(825,448,"9"); //x + 100
	circle(835,460,20);
}
void tatNLR(){
		//-- in 6 ----------------------------------------
	setcolor(0);
	settextstyle(1,0,3);
	outtextxy(225,588,"6"); ////--  x + 100
	circle(235,600,20);

	//-- in 2 -----------------------------------------
	settextstyle(1,0,3);
	outtextxy(325,588,"2"); ////--  x + 100
	circle(335,600,20);
	
	//-- in 3 -----------------------------
	settextstyle(1,0,3);
	outtextxy(425,588,"3"); ////--  x + 100
	circle(435,600,20);
	
	//--- in 5 -----------------------------
	settextstyle(1,0,3);
	outtextxy(525,588,"5"); //--  x + 100
	circle(535,600,20);
	
	//-- in 7 ---------------------------------------
	settextstyle(1,0,3);
	outtextxy(625,588,"7"); ////--  x + 100
	circle(635,600,20);

	//-- in 8 -----------------------------------------
	settextstyle(1,0,3);
	outtextxy(725,588,"8");//--  x + 100
	circle(735,600,20);

	//-- in 9 -------------------------------------------
	settextstyle(1,0,3);
	outtextxy(825,588,"9"); //--  x + 100
	circle(835,600,20);
		
}
void tatchieurong(){
		//--- in nut  7 ----------------------
	setcolor(0);
	settextstyle(1,0,3);
	outtextxy(225,378,"6");
	circle(235,390,20);

	//--- in 3 ---------------------------
	settextstyle(1,0,3);
	outtextxy(325,378,"3"); //x + 100
	circle(335,390,20);
	
	//--- in 8 ----------
	settextstyle(1,0,3);
	outtextxy(425,378,"8"); //x + 100
	circle(435,390,20);
	
	//-- in 2 ------------------
	settextstyle(1,0,3);
	outtextxy(525,378,"2"); //x +100
	circle(535,390,20);

	//-- in 5 ---------------
	settextstyle(1,0,3);
	outtextxy(625,378,"5"); //x + 100
	circle(635,390,20);
	
	//--- in 7 --------------------------------------
	settextstyle(1,0,3);
	outtextxy(725,378,"7"); //x + 100
	circle(735,390,20);
	
	//--- in 9 -----------------------
	settextstyle(1,0,3);
	outtextxy(825,378,"9"); //x + 100
	circle(835,390,20);
		
}
//-- Duyet chieu rong --------------------------------------------
void DoHoaMoPhongDuyetCayChieuRong()
{
	Tatsang();
	tatchieurong();
	//-- Duyet cay theo chieu rong
	delay(dl); 
	setcolor(6);
	settextstyle(0,0,2);
	outtextxy(15,380,"Chieu Rong:");
	rectangle(8,370,195,410);
	//-------------------------------------------------------------------
	
	//-- sang nut 6 ------------------------
	delay(dl);
	setcolor(9);
	settextstyle(0,0,4);
	outtextxy(435,53,"6");
	circle(450,70,25);
	
	//--- in nut  6 ----------------------
	setcolor(9);
	delay(dl);
	settextstyle(1,0,3);
	outtextxy(225,378,"6");
	circle(235,390,20);
	
	
	//-- bat den 3 ------------------------------------
	delay(dl);
	setcolor(9);
	settextstyle(0,0,4);
	outtextxy(285,153,"3"); //-- Giam x 15, giam y 17 
	circle(300,170,25);
	
	//--- in 3 ---------------------------
	setcolor(9);
	delay(dl);
	settextstyle(1,0,3);
	outtextxy(325,378,"3"); //x + 100
	circle(335,390,20);
	
	
	//-- bat den 8 ------------
	delay(dl);
	setcolor(9);
	settextstyle(0,0,4);
	outtextxy(585,153,"8"); //-- giam x 15, giam y 17
	circle(600,170,25);
	
	//--- in 8 ----------
	setcolor(9);
	delay(dl);
	settextstyle(1,0,3);
	outtextxy(425,378,"8"); //x + 100
	circle(435,390,20);
	
	
	//--- bat den 2 ---------
	delay(dl);
	setcolor(9);
	settextstyle(0,0,4);
	outtextxy(185,253,"2"); //-- Giam x 15, giam y 17 
	circle(200,270,25);
	
	//-- in 2 ------------------
	setcolor(9);
	delay(dl);
	settextstyle(1,0,3);
	outtextxy(525,378,"2"); //x +100
	circle(535,390,20);

	
	//--- bat den 5 -------------
	delay(dl);
	setcolor(9);
	settextstyle(0,0,4);
	outtextxy(385,253,"5"); //-- Giam x 15, giam y 17 
	circle(400,270,25);
	
	//-- in 5 ---------------
	setcolor(9);
	delay(dl);
	settextstyle(1,0,3);
	outtextxy(625,378,"5"); //x + 100
	circle(635,390,20);
	
	
	//--- bat den 7 ------------------------
	delay(dl);
	setcolor(9);
	settextstyle(0,0,4);
	outtextxy(483,253,"7"); //-- Giam x 15, giam y 17
	circle(500,270,25);
	
	//--- in 7 --------------------------------------
	delay(dl);
	settextstyle(1,0,3);
	outtextxy(725,378,"7"); //x + 100
	circle(735,390,20);
	
	
	//--- bat den 9 ------------------------------
	delay(dl);
	setcolor(9);
	settextstyle(0,0,4);
	outtextxy(685,253,"9"); //-- Giam x 15, giam y 17
	circle(700,270,25);
	
	//--- in 9 -----------------------
	delay(dl);
	settextstyle(1,0,3);
	outtextxy(825,378,"9"); //x + 100
	circle(835,390,20);
		
}
//----------------------------------------------------------------
//-- Duyet chieu sau (3 cach) --------------------------
void DoHoaDuyetLNR()
{
	Tatsang();
	tatLNR();
	//---------------------------------------
	
	//-- Duyet LNR -----------------------------------------------
	delay(dl);
	setcolor(6);
	settextstyle(0,0,2);
	outtextxy(75,450,"LNR:");
	rectangle(8,440,195,480);
	
	//--- bat den 2 --------------------------
	delay(dl);
	setcolor(9);
	settextstyle(0,0,4);
	outtextxy(185,253,"2"); //-- Giam x 15, giam y 17 
	circle(200,270,25);
	
	//-- in 2 -----------------
	setcolor(9);
	delay(dl);
	settextstyle(1,0,3);
	outtextxy(225,448,"2");
	circle(235,460,20);
	

	
	//-- bat den 3 -----------
	delay(dl);
	setcolor(9);
	settextstyle(0,0,4);
	outtextxy(285,153,"3"); //-- Giam x 15, giam y 17 
	circle(300,170,25);
	
	//-- in 3 ----------------------
	setcolor(9);
	delay(dl);
	settextstyle(1,0,3);
	outtextxy(325,448,"3"); //x + 100
	circle(335,460,20);
	

	
	//--- bat den 5 ---------------------------
	delay(dl);
	setcolor(9);
	settextstyle(0,0,4);
	outtextxy(385,253,"5"); //-- Giam x 15, giam y 17 
	circle(400,270,25);
	
	//--- in 5 -----------------------
	setcolor(9);
	delay(dl);
	settextstyle(1,0,3);
	outtextxy(425,448,"5"); //x + 100
	circle(435,460,20);
	

	
	//-- bat den 6 ------------------------
	delay(dl);
	setcolor(9);
	settextstyle(0,0,4);
	outtextxy(435,53,"6"); // giam x 15, giam y 17
	circle(450,70,25);
	
	//-- in 6 ------------------------
	setcolor(9);
	delay(dl);
	settextstyle(1,0,3);
	outtextxy(525,448,"6"); //x + 100
	circle(535,460,20);
	

	
	//--- bat den 7 ------------------------
	delay(dl);
	setcolor(9);
	settextstyle(0,0,4);
	outtextxy(483,253,"7"); //-- Giam x 15, giam y 17
	circle(500,270,25);
	
	//---- in 7 ---------------------
	delay(dl);
	settextstyle(1,0,3);
	outtextxy(625,448,"7"); //x + 100
	circle(635,460,20);

	
	//-- bat den 8 ------------
	delay(dl);
	setcolor(9);
	settextstyle(0,0,4);
	outtextxy(585,153,"8"); //-- giam x 15, giam y 17
	circle(600,170,25);	
	
	//--- in 8 --------------------
	delay(dl);
	settextstyle(1,0,3);
	outtextxy(725,448,"8"); //x + 100
	circle(735,460,20);
	

	
	//--- bat den 9 ------------------------------
	delay(dl);
	setcolor(9);
	settextstyle(0,0,4);
	outtextxy(685,253,"9"); //-- Giam x 15, giam y 17
	circle(700,270,25);	
	
	//-- in 9 ----------------------------------
	delay(dl);
	settextstyle(1,0,3);
	outtextxy(825,448,"9"); //x + 100
	circle(835,460,20);
}
//-------------------------------------------------------------------
void DoHoaDuyetLRN()
{
	Tatsang();
	tatLRN();
	//-- Duyet LRN -------------------------------------------
	delay(dl);
	setcolor(6);
	settextstyle(0,0,2);
	outtextxy(75,520,"LRN:");
	rectangle(8,510,195,550);
	//-------------------------------------
	
	//-- bat den 2 ----------
	delay(dl);
	setcolor(9);
	settextstyle(0,0,4);
	outtextxy(185,253,"2"); //-- Giam x 15, giam y 17 
	circle(200,270,25);	
	
	//--- in 2 -------------------
	setcolor(9);
	delay(dl);
	settextstyle(1,0,3);
	outtextxy(225,518,"2");
	circle(235,530,20);
	
	
	//-- bat den 3 -------
	delay(dl);
	setcolor(9);
	settextstyle(0,0,4);
	outtextxy(285,153,"3");
	circle(300,170,25);	
	
	//-- in 3 ----------------------------
	delay(dl);
	settextstyle(1,0,3);
	outtextxy(325,518,"3");
	circle(335,530,20);
	
	
	//--- bat den 5 -------------
	delay(dl);
	setcolor(9);
	settextstyle(0,0,4);
	outtextxy(385,253,"5");
	circle(400,270,25);	
	
	//---- in 5 ----------------------------
	delay(dl);
	settextstyle(1,0,3);
	outtextxy(425,518,"5");
	circle(435,530,20);
	
	
	//---- bat den 7 -----------------------
	delay(dl);
	setcolor(9);
	settextstyle(0,0,4);
	outtextxy(483,253,"7");
	circle(500,270,25);	
	
	//--- in 7 -------------------------------------
	delay(dl);
	settextstyle(1,0,3);
	outtextxy(525,518,"7");
	circle(535,530,20);
	
	
	//--- bat den 8 ---------
	delay(dl);
	setcolor(9);
	settextstyle(0,0,4);
	outtextxy(585,153,"8");
	circle(600,170,25);	
	
	//-- in 8 ---------------------------------------
	delay(dl);
	settextstyle(1,0,3);
	outtextxy(625,518,"8");
	circle(635,530,20);
	
	
	//--- bat den 9 --------------------
	delay(dl);
	setcolor(9);
	settextstyle(0,0,4);
	outtextxy(685,253,"9");
	circle(700,270,25);	
	
	//-- in 9 ------------------------------------------
	delay(dl);
	settextstyle(1,0,3);
	outtextxy(725,518,"9");
	circle(735,530,20);
	
	
	//-- bat den 6 ------------------------
	delay(dl);
	setcolor(9);
	settextstyle(0,0,4);
	outtextxy(435,53,"6");
	circle(450,70,25);	
	
	//-- in 6 -----------------------------------------
	delay(dl);
	settextstyle(1,0,3);
	outtextxy(825,518,"6");
	circle(835,530,20);
}
//------------------------------------------------------------------
void DoHoaDuyetNLR()
{
	Tatsang();
	tatNLR();
	//--- Duyet NLR
	delay(dl);
	setcolor(6);
	settextstyle(0,0,2);
	outtextxy(75,590,"NLR:");
	rectangle(8,580,195,620);
	//-- bat den 6 ------------------------
	delay(dl);
	setcolor(9);
	settextstyle(0,0,4);
	outtextxy(435,53,"6");
	circle(450,70,25);	
	
	//-- in 6 ----------------------------------------
	setcolor(9);
	delay(dl);
	settextstyle(1,0,3);
	outtextxy(225,588,"6"); ////--  x + 100
	circle(235,600,20);
		
	
	//--- bat den 2 ---------
	delay(dl);
	setcolor(9);
	settextstyle(0,0,4);
	outtextxy(185,253,"2"); 
	circle(200,270,25);	
	
	//-- in 2 -----------------------------------------
	delay(dl);
	settextstyle(1,0,3);
	outtextxy(325,588,"2"); ////--  x + 100
	circle(335,600,20);
	
	
	//-- bat den 3 -----------
	delay(dl);
	setcolor(9);
	settextstyle(0,0,4);
	outtextxy(285,153,"3");
	circle(300,170,25);	
	
	//-- in 3 -----------------------------
	delay(dl);
	settextstyle(1,0,3);
	outtextxy(425,588,"3"); ////--  x + 100
	circle(435,600,20);
	
	
	//--- bat den 5 -------------
	delay(dl);
	setcolor(9);
	settextstyle(0,0,4);
	outtextxy(385,253,"5"); 
	circle(400,270,25);	
	
	//--- in 5 -----------------------------
	delay(dl);
	settextstyle(1,0,3);
	outtextxy(525,588,"5"); //--  x + 100
	circle(535,600,20);
	
	
	//--- bat den 7 ------------------------
	delay(dl);
	setcolor(9);
	settextstyle(0,0,4);
	outtextxy(483,253,"7"); 
	circle(500,270,25);	
	
	//-- in 7 ---------------------------------------
	delay(dl);
	settextstyle(1,0,3);
	outtextxy(625,588,"7"); ////--  x + 100
	circle(635,600,20);
	
	
	//-- bat den 8 ----------------------------
	delay(dl);
	setcolor(9);
	settextstyle(0,0,4);
	outtextxy(585,153,"8");
	circle(600,170,25);	
	
	//-- in 8 -----------------------------------------
	delay(dl);
	settextstyle(1,0,3);
	outtextxy(725,588,"8");//--  x + 100
	circle(735,600,20);
	
	
	//--- bat den 9 ------------------------------
	delay(dl);
	setcolor(9);
	settextstyle(0,0,4);
	outtextxy(685,253,"9");
	circle(700,270,25);	
	
	//-- in 9 -------------------------------------------
	delay(dl);
	settextstyle(1,0,3);
	outtextxy(825,588,"9"); //--  x + 100
	circle(835,600,20);
}
//---------------------------------------------------------------------
void DoHoaMoPhongDuyetCayChieuSau()
{
	DoHoaDuyetLNR();
	//---------------------------
	DoHoaDuyetLRN();
	//----------------------------
	DoHoaDuyetNLR();
}

