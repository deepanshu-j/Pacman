#include<iostream.h>
#include<dos.h>
#include<stdlib.h>
#include<conio.h>
#include<graphics.h>
int radius=8;
int moves=250;
char str[25] ;
void front()
{
  setbkcolor(BLUE);

/////PAC MAN  ON THE SCREEN////////
////////STYLE OF THE TEXT///////
 settextstyle(0,0,9);

  outtextxy(60,60,"pAc maN ");
  setfillstyle(1,YELLOW);
  sector(200,380 ,45,315,52,50);
  settextstyle(0,0,3);
  textcolor(5+BLINK);
  outtextxy(320,400,"'PRESS ENTER'");

getch();
cleardevice();


}

void restrictions(int x,int y)
{   if (x>483)
    { cleardevice();
      settextstyle(8,0,15);
      setbkcolor(random(15));

      for(int i=0;i<25;i++)
       {
       textcolor(random(15));
       settextstyle(random(15),random(1),random(15));
       outtextxy(12*random(40),25*random(20),"oUt");
       }

       delay(500);    getch();
       exit(0);      }

   if (y>460  )
   { cleardevice();
	setbkcolor(8);
      settextstyle(8,0,15);
     for(int i=0;i<25;i++)
       {   textcolor(random(15));
       settextstyle(random(15),random(1),random(15));
       outtextxy(12*random(40),25*random(20),"oUt");
       }
       //getch();
       delay(100);
       exit(0);      }


}

void print()
{           highvideo();
  for (int i=220;i<=430;i=i+10)
    putpixel(i,25,random(15)+1);

  for (i=220;i<=430;i=i+10)
    putpixel(i,115,random(15)+1);


  for (i=220;i<430;i=i+10)
    putpixel(i,305,random(15)+1);


for (i=220;i<430;i=i+10)
    putpixel(i,335,random(15)+1);

for (i=220;i<430;i=i+10)
    putpixel(i,405,random(15)+1);

    for (i=220;i<430;i=i+10)
    putpixel(i,455,random(15)+1);

}

inline void framework()
{  cleardevice();
    setbkcolor(0);
///////FRAME///////////////

setlinestyle(0, 2, 2);
rectangle(160,10,490,470);
 setfillstyle(1,BLUE);

 ////////top rectangle in which monsters will reside////////
  rectangle(220,40,430,100);

 bar(220,130,430,135);
 bar(305,135,335,285);
 bar(220,285,430,290);

 bar(190,40,190,290);
 bar(460,40,460,290);
 ////////
 bar(220,320,430,320);

//  bar(260,150,262,255);
//  bar(370,150,372,255);

    // bar(210,430,230,450);
    // bar(410,430,410,450);
  bar(220,350,430,390);
  bar(220,420,430,440);


}

void pixel()
{
   int x=220,y=25,mx=210,my=25,mx2=170,my2=455,mx3=470,my3=455,
   mx4=470,my4=25,mx5=210,my5=115;
    char enter;

   setfillstyle(1,YELLOW);
	 sector(x,y ,45,315,radius-1,radius-1);

      settextstyle(0,0,1);
      setfillstyle(1,6);
	textcolor(5);
      outtextxy(510,25,"MOVES LEFT:");

  do
  {    setfillstyle(0,0);
       bar(600,25,640,50);

      //void far settextstyle(int font, int direction, int charsize);
      settextstyle(0,0,1);

      textcolor(5);

      outtextxy(600,25,itoa(moves,str,10));



   if (moves <0)
   {
      clrscr();
      setbkcolor(7);

      settextstyle(0,0,5);
  textcolor(5);

   outtextxy(0,200,"'MoVEs FiNiSHeD'");
	delay(2000);

   exit(0); }

   while( kbhit () )
   {  radius=8;



    {
      enter=getch();

     if (enter == 77)  //////RIGHT
    {             moves--;
       if ( ( (x+10<= 470)&&(x+10>=170 )&&(y==25 )  )||
	    ( (x+10<= 440)&&(x+10>=210 )&&(y==115)  )||
	    ( (x+10<= 470)&&(x+10>=170 )&&(y==305)  )||
	    ( (x+10<= 470)&&(x+10>=170 )&&(y==335)  )||
	    ( (x+10<= 470)&&(x+10>=170 )&&(y==405)  )||
	    ( (x+10<= 470)&&(x+10>=170 )&&(y==455)  )   )
	{	  x+=10;

	 setcolor(0);
	 setfillstyle(1,0);
	 sector(x-10,y ,0,360,radius,radius);

	 setfillstyle(1,YELLOW);
	 sector(x,y ,45,315,radius,radius);
	 }

     }
    if (enter ==  80)   ////////DOWN
   {      moves--;
    if(   ( (y+10>= 25)&&(y+10<=455 )&&(x==170)  )||
	    ( (y+10>= 25)&&(y+10<=455 )&&(x==210)  )||
	    ( (y+10>= 25)&&(y+10<=455 )&&(x==440)  )||
	    ( (y+10>= 25)&&(y+10<=455 )&&(x==470)  )
	)
       {
       y+=10;

       setcolor(0);
       setfillstyle(1,0);
       sector(x,y-10 ,0,360,radius,radius);


       setfillstyle(1,YELLOW);
       sector(x,y ,0,225,radius,radius);
       sector(x,y ,225+90,360,radius,radius);
       }
    }

    if (enter ==   75)      ///////////LEFT
       {  moves--;
       if( ( (x-10<= 475)&&(x-10>=170 )&&(y==25 )  )||
	    ( (x-10<= 475)&&(x-10>=210 )&&(y==115)  )||
	    ( (x-10<= 475)&&(x-10>=170 )&&(y==305)  )||
	    ( (x-10<= 475)&&(x-10>=170 )&&(y==335)  )||
	    ( (x-10<= 475)&&(x-10>=170 )&&(y==405)  )||
	    ( (x-10<= 475)&&(x-10>=170 )&&(y==455)  )   )


	   {  x-=10;

	     setcolor(0);
	     setfillstyle(1,0);
	     sector(x+10,y ,0,360,radius,radius);



	     setfillstyle(1,YELLOW);
	     sector(x,y ,0,135,radius,radius);
	     sector(x,y ,135+90,360,radius,radius);
	   }
	}
    if (enter ==   72)     /////////////UP
    {  moves--;
       if( ( (y-10>= 25)&&(y-10<=455 )&&(x==170)  )||
	    ( (y-10>= 25)&&(y-10<=455 )&&(x==210)  )||
	    ( (y-10>= 25)&&(y-10<=455 )&&(x==440)  )||
	    ( (y-10>= 25)&&(y-10<=455 )&&(x==470)  )
	  )
	  {  y-=10;

	    setcolor(0);
	    setfillstyle(1,0);
	    sector(x,y+10 ,0,360,radius,radius);

	    setfillstyle(1,YELLOW);
	    sector(x,y ,0,45,radius,radius);
	    sector(x,y ,135,360,radius,radius);           }

    }
    }
   if ((x==mx)&&(y==my)||(x==mx4)&&(y==my4)||(x==mx2)&&(y==my2)||(x==mx3)&&(y==my3))
   {  cleardevice();
      for(int i=0;i<25;i++)
       {
       textcolor(random(10)+1);
       settextstyle(random(15),random(2),random(15));
       outtextxy(12*random(40),25*random(20),"oUt");
       }

	 getch();
      // delay(500);
     exit(0);     }
  }





      while(!kbhit())
    {
	radius=6;
	highvideo();
	 setcolor(random(13)+1) ;
       rectangle(160,10,490,470);
      delay(100);
     ////////////////////////////////////////////////////////
     int ran=random(4)+1; /////////  1<= (ran) <=4
     int ran2=random(4)+1;/////////

       /////////////////////////////////////////////////
	if (ran==1)
       {
	 /////MX RIGHT
	if ( ( (mx+10<= 470)&&(mx+10>=170 )&&(my==25 )  )||
	    ( (mx+10<= 440)&&(mx+10>=210 )&&(my==115)  )||
	    ( (mx+10<= 470)&&(mx+10>=170 )&&(my==305)  )||
	    ( (mx+10<= 470)&&(mx+10>=170 )&&(my==335)  )||
	    ( (mx+10<= 470)&&(mx+10>=170 )&&(my==405)  )||
	    ( (mx+10<= 470)&&(mx+10>=170 )&&(my==455)  )   )
	   {
	    mx=mx+10;

	    setcolor(0);
	    rectangle(mx-radius-10-2,my-radius-2,mx+radius-10+2,my+radius+2);


	    setcolor(random(15)+1);
	    rectangle(mx-radius-2,my-radius-2,mx+radius+2,my+radius+2);

	    }
	     //MY2 DOWN
	    if(   ( (my2+10>= 25)&&(my2+10<=455 )&&(mx2==170)  )||
	    ( (my2+10>= 25)&&(my2+10<=455 )&&(mx2==210)  )||
	    ( (my2+10>= 25)&&(my2+10<=455 )&&(mx2==440)  )||
	    ( (my2+10>= 25)&&(my2+10<=455 )&&(mx2==470)  )
							  )
	   {
	     my2=my2+10;
	     setcolor(0);
	      rectangle(mx2-radius-2,my2-radius-10-2,mx2+radius+2,my2+radius-10+2);

	    setcolor(random(15)+1);
	    rectangle(mx2-radius-2,my2-radius-2,mx2+radius+2,my2+radius+2);
	    }
	    //MX3 LEFT
	    if( ( (mx3-10<= 475)&&(mx3-10>=170 )&&(my3==25 )  )||
	    ( (mx3-10<= 475)&&(mx3-10>=170 )&&(my3==115)  )||
	    ( (mx3-10<= 475)&&(mx3-10>=170 )&&(my3==305)  )||
	    ( (mx3-10<= 475)&&(mx3-10>=170 )&&(my3==335)  )||
	    ( (mx3-10<= 475)&&(mx3-10>=170 )&&(my3==405)  )||
	    ( (mx3-10<= 475)&&(mx3-10>=170 )&&(my3==455)  )   )
	  {
	    mx3=mx3-10;
	    setcolor(0);
	      rectangle(mx3-radius-2+10,my3-radius-2,mx3+radius+10+2,my3+radius+2);

	    setcolor(random(15)+1);
	    rectangle(mx3-radius-2,my3-radius-2,mx3+radius+2,my3+radius+2);
	   }
	   //MY4 UP
	   if( ( (my4-10>= 25)&&(my4-10<=455 )&&(mx4==170)  )||
	    ( (my4-10>= 25)&&(my4-10<=455 )&&(mx4==210)  )||
	    ( (my4-10>= 25)&&(my4-10<=455 )&&(mx4==440)  )||
	    ( (my4-10>= 25)&&(my4-10<=455 )&&(mx4==470)  )
	  )

	   {    //MY3 UP
	     my4=my4-10;
	     setcolor(0);
	      rectangle(mx4-radius-2,my4-radius+10-2,mx4+radius+2,my4+radius+10+2);

	    setcolor(random(15)+1);
	    rectangle(mx4-radius-2,my4-radius-2,mx4+radius+2,my4+radius+2);

	       }
	    /////MX5 RIGHT
	if ( ( (mx5+10<= 470)&&(mx5+10>=170 )&&(my5==25 )  )||
	    ( (mx5+10<= 440)&&(mx5+10>=210 )&&(my5==115)  )||
	    ( (mx5+10<= 470)&&(mx5+10>=170 )&&(my5==305)  )||
	    ( (mx5+10<= 470)&&(mx5+10>=170 )&&(my5==335)  )||
	    ( (mx5+10<= 470)&&(mx5+10>=170 )&&(my5==405)  )||
	    ( (mx5+10<= 470)&&(mx5+10>=170 )&&(my5==455)  )   )
	   {
	    mx5=mx5+10;

	    setcolor(0);
	    rectangle(mx5-radius-10-2,my5-radius-2,mx5+radius-10+2,my5+radius+2);


	    setcolor(random(15)+1);
	    rectangle(mx5-radius-2,my5-radius-2,mx5+radius+2,my5+radius+2);

	    }

	}



    ////////////////////////////////////////////////////////////////
	if (ran==2)
       {
	   /////MY DOWN
	  if(   ( (my+10>= 25)&&(my+10<=455 )&&(mx==170)  )||
	    ( (my+10>= 25)&&(my+10<=455 )&&(mx==210)  )||
	    ( (my+10>= 25)&&(my+10<=455 )&&(mx==440)  )||
	    ( (my+10>= 25)&&(my+10<=455 )&&(mx==470)  )
							  )
	   {
	     my=my+10;
	     setcolor(0);
	      rectangle(mx-radius-2,my-radius-10-2,mx+radius+2,my+radius-10+2);

	    setcolor(random(15)+1);
	    rectangle(mx-radius-2,my-radius-2,mx+radius+2,my+radius+2);
	    }
	    //MX2 LEFT
	   if( ( (mx2-10<= 475)&&(mx2-10>=170 )&&(my2==25 )  )||
	    ( (mx2-10<= 475)&&(mx2-10>=170 )&&(my2==115)  )||
	    ( (mx2-10<= 475)&&(mx2-10>=170 )&&(my2==305)  )||
	    ( (mx2-10<= 475)&&(mx2-10>=170 )&&(my2==335)  )||
	    ( (mx2-10<= 475)&&(mx2-10>=170 )&&(my2==405)  )||
	    ( (mx2-10<= 475)&&(mx2-10>=170 )&&(my2==455)  )   )
	  {
	    mx2=mx2-10;
	    setcolor(0);
	      rectangle(mx2-radius-2+10,my2-radius-2,mx2+radius+10+2,my2+radius+2);

	    setcolor(random(15)+1);
	    rectangle(mx2-radius-2,my2-radius-2,mx2+radius+2,my2+radius+2);
	   }
	      //MY3 UP
	   if( ( (my3-10>= 25)&&(my3-10<=455 )&&(mx3==170)  )||
	    ( (my3-10>= 25)&&(my3-10<=455 )&&(mx3==210)  )||
	    ( (my3-10>= 25)&&(my3-10<=455 )&&(mx3==440)  )||
	    ( (my3-10>= 25)&&(my3-10<=455 )&&(mx3==470)  )
	  )

	   {
	     my3=my3-10;
	     setcolor(0);
	      rectangle(mx3-radius-2,my3-radius+10-2,mx3+radius+2,my3+radius+10+2);

	    setcolor(random(15)+1);
	    rectangle(mx3-radius-2,my3-radius-2,mx3+radius+2,my3+radius+2);

	       }
	    //MX4 RIGHT
	    if ( ( (mx4+10<= 470)&&(mx4+10>=170 )&&(my4==25 )  )||
	    ( (mx4+10<= 440)&&(mx4+10>=210 )&&(my4==115)  )||
	    ( (mx4+10<= 470)&&(mx4+10>=170 )&&(my4==305)  )||
	    ( (mx4+10<= 470)&&(mx4+10>=170 )&&(my4==335)  )||
	    ( (mx4+10<= 470)&&(mx4+10>=170 )&&(my4==405)  )||
	    ( (mx4+10<= 470)&&(mx4+10>=170 )&&(my4==455)  )   )
	   {
	    mx4=mx4+10;

	    setcolor(0);
	    rectangle(mx4-radius-10-2,my4-radius-2,mx4+radius-10+2,my4+radius+2);


	    setcolor(random(15)+1);
	    rectangle(mx4-radius-2,my4-radius-2,mx4+radius+2,my4+radius+2);

	    }
	     /////MY5 DOWN
	  if(   ( (my5+10>= 25)&&(my5+10<=455 )&&(mx5==170)  )||
	    ( (my5+10>= 25)&&(my5+10<=455 )&&(mx5==210)  )||
	    ( (my5+10>= 25)&&(my5+10<=455 )&&(mx5==440)  )||
	    ( (my5+10>= 25)&&(my5+10<=455 )&&(mx5==470)  )
							  )
	   {
	     my5=my5+10;
	     setcolor(0);
	      rectangle(mx5-radius-2,my5-radius-10-2,mx5+radius+2,my5+radius-10+2);

	    setcolor(random(15)+1);
	    rectangle(mx5-radius-2,my5-radius-2,mx5+radius+2,my5+radius+2);
	    }
	}


  //////////////////////////////////////////////////////////////////////

	if (ran==3)
       {   ///////MX LEFT
	  if( ( (mx-10<= 475)&&(mx-10>=170 )&&(my==25 )  )||
	    ( (mx-10<= 440)&&(mx-10>=210 )&&(my==115)  )||
	    ( (mx-10<= 475)&&(mx-10>=170 )&&(my==305)  )||
	    ( (mx-10<= 475)&&(mx-10>=170 )&&(my==335)  )||
	    ( (mx-10<= 475)&&(mx-10>=170 )&&(my==405)  )||
	    ( (mx-10<= 475)&&(mx-10>=170 )&&(my==455)  )   )
	  {
	    mx=mx-10;
	    setcolor(0);
	      rectangle(mx-radius-2+10,my-radius-2,mx+radius+10+2,my+radius+2);

	    setcolor(random(15)+1);
	    rectangle(mx-radius-2,my-radius-2,mx+radius+2,my+radius+2);
	   }

	   //MY2 UP
	   if( ( (my2-10>= 25)&&(my2-10<=455 )&&(mx2==170)  )||
	       ( (my2-10>= 25)&&(my2-10<=455 )&&(mx2==210)  )||
	       ( (my2-10>= 25)&&(my2-10<=455 )&&(mx2==440)  )||
	       ( (my2-10>= 25)&&(my2-10<=455 )&&(mx2==470)  )
								)

	   {
	     my2=my2-10;
	     setcolor(0);
	      rectangle(mx2-radius-2,my2-radius+10-2,mx2+radius+2,my2+radius+10+2);

	    setcolor(random(15)+1);
	    rectangle(mx2-radius-2,my2-radius-2,mx2+radius+2,my2+radius+2);

	       }
	     /////MX3 RIGHT
	  if ( ( (mx3+10<= 470)&&(mx3+10>=170 )&&(my3==25 )  )||
	    ( (mx3+10<= 440)&&(mx3+10>=210 )&&(my3==115)  )||
	    ( (mx3+10<= 470)&&(mx3+10>=170 )&&(my3==305)  )||
	    ( (mx3+10<= 470)&&(mx3+10>=170 )&&(my3==335)  )||
	    ( (mx3+10<= 470)&&(mx3+10>=170 )&&(my3==405)  )||
	    ( (mx3+10<= 470)&&(mx3+10>=170 )&&(my3==455)  )   )
	   {
	    mx3=mx3+10;

	    setcolor(0);
	    rectangle(mx3-radius-10-2,my3-radius-2,mx3+radius-10+2,my3+radius+2);
	   //   rectangle(mx-radius-10,my-radius,mx+radius-10,my+radius);

	    setcolor(random(15)+1);
	    rectangle(mx3-radius-2,my3-radius-2,mx3+radius+2,my3+radius+2);
	  //    rectangle(mx-radius,my-radius,mx+radius,my+radius);
	    }
	    //MY4 DOWN
	   if(   ( (my4+10>= 25)&&(my4+10<=455 )&&(mx4==170)  )||
	    ( (my4+10>= 25)&&(my4+10<=455 )&&(mx4==210)  )||
	    ( (my4+10>= 25)&&(my4+10<=455 )&&(mx4==440)  )||
	    ( (my4+10>= 25)&&(my4+10<=455 )&&(mx4==470)  )
							  )
	   {
	     my4=my4+10;
	     setcolor(0);
	      rectangle(mx4-radius-2,my4-radius-10-2,mx4+radius+2,my4+radius-10+2);

	    setcolor(random(15)+1);
	    rectangle(mx4-radius-2,my4-radius-2,mx4+radius+2,my4+radius+2);
	    }
	    ///////MX5 LEFT
	  if( ( (mx5-10<= 475)&&(mx5-10>=170 )&&(my5==25 )  )||
	    ( (mx5-10<= 440)&&(mx5-10>=210 )&&(my5==115)  )||
	    ( (mx5-10<= 475)&&(mx5-10>=170 )&&(my5==305)  )||
	    ( (mx5-10<= 475)&&(mx5-10>=170 )&&(my5==335)  )||
	    ( (mx5-10<= 475)&&(mx5-10>=170 )&&(my5==405)  )||
	    ( (mx5-10<= 475)&&(mx5-10>=170 )&&(my5==455)  )   )
	  {
	    mx5=mx5-10;
	    setcolor(0);
	      rectangle(mx5-radius-2+10,my5-radius-2,mx5+radius+10+2,my5+radius+2);

	    setcolor(random(15)+1);
	    rectangle(mx5-radius-2,my5-radius-2,mx5+radius+2,my5+radius+2);
	   }

       }
      /////////////////////////////////////////////////////////////////

	if (ran==4)
       {
	    //MY UP
	   if( ( (my-10>= 25)&&(my-10<=455 )&&(mx==170)  )||
	       ( (my-10>= 25)&&(my-10<=455 )&&(mx==210)  )||
	       ( (my-10>= 25)&&(my-10<=455 )&&(mx==440)  )||
	       ( (my-10>= 25)&&(my-10<=455 )&&(mx==470)  )
	     )

	   {
	     my=my-10;
	     setcolor(0);
	      rectangle(mx-radius-2,my-radius+10-2,mx+radius+2,my+radius+10+2);

	    setcolor(random(15)+1);
	    rectangle(mx-radius-2,my-radius-2,mx+radius+2,my+radius+2);

	       }
	   //MX2 RIGHT
	   if ( ( (mx2+10<= 470)&&(mx2+10>=170 )&&(my2==25 )  )||
	    ( (mx2+10<= 440)&&(mx2+10>=210 )&&(my2==115)  )||
	    ( (mx2+10<= 470)&&(mx2+10>=170 )&&(my2==305)  )||
	    ( (mx2+10<= 470)&&(mx2+10>=170 )&&(my2==335)  )||
	    ( (mx2+10<= 470)&&(mx2+10>=170 )&&(my2==405)  )||
	    ( (mx2+10<= 470)&&(mx2+10>=170 )&&(my2==455)  )   )
	   {
	    mx2=mx2+10;

	    setcolor(0);
	    rectangle(mx2-radius-10-2,my2-radius-2,mx2+radius-10+2,my2+radius+2);
	   //   rectangle(mx-radius-10,my-radius,mx+radius-10,my+radius);

	    setcolor(random(15)+1);
	    rectangle(mx2-radius-2,my2-radius-2,mx2+radius+2,my2+radius+2);
	  //    rectangle(mx-radius,my-radius,mx+radius,my+radius);
	    }
	     // MY3 DOWN
	     if(   ( (my3+10>= 25)&&(my3+10<=455 )&&(mx3==170)  )||
	    ( (my3+10>= 25)&&(my3+10<=455 )&&(mx3==210)  )||
	    ( (my3+10>= 25)&&(my3+10<=455 )&&(mx3==440)  )||
	    ( (my3+10>= 25)&&(my3+10<=455 )&&(mx3==470)  )
							  )
	   {
	     my3=my3+10;
	     setcolor(0);
	      rectangle(mx3-radius-2,my3-radius-10-2,mx3+radius+2,my3+radius-10+2);

	    setcolor(random(15)+1);
	    rectangle(mx3 -radius-2,my3-radius-2,mx3+radius+2,my3+radius+2);
	    }
	    //MY4 LEFT
	    if( ( (mx4-10<= 475)&&(mx4-10>=170 )&&(my4==25 )  )||
	    ( (mx4-10<= 440)&&(mx4-10>=210 )&&(my4==115)  )||
	    ( (mx4-10<= 475)&&(mx4-10>=170 )&&(my4==305)  )||
	    ( (mx4-10<= 475)&&(mx4-10>=170 )&&(my4==335)  )||
	    ( (mx4-10<= 475)&&(mx4-10>=170 )&&(my4==405)  )||
	    ( (mx4-10<= 475)&&(mx4-10>=170 )&&(my4==455)  )   )
	  {
	    mx4=mx4-10;
	    setcolor(0);
	      rectangle(mx4-radius-2+10,my4-radius-2,mx4+radius+10+2,my4+radius+2);

	    setcolor(random(15)+1);
	    rectangle(mx4-radius-2,my4-radius-2,mx4+radius+2,my4+radius+2);
	   }
	   //MY5 UP
	   if( ( (my5-10>= 25)&&(my5-10<=455 )&&(mx5==170)  )||
	       ( (my5-10>= 25)&&(my5-10<=455 )&&(mx5==210)  )||
	       ( (my5-10>= 25)&&(my5-10<=455 )&&(mx5==440)  )||
	       ( (my5-10>= 25)&&(my5-10<=455 )&&(mx5==470)  )
	     )

	   {
	     my5=my5-10;
	     setcolor(0);
	      rectangle(mx5-radius-2,my5-radius+10-2,mx5+radius+2,my5+radius+10+2);

	    setcolor(random(15)+1);
	    rectangle(mx5-radius-2,my5-radius-2,mx5+radius+2,my5+radius+2);

	       }
       }

	if (    ((x==mx)&&(y==my)) || ((x==mx2)&&(y==my2)) || ((x==mx3)&&(y==my3) )|| ((x==mx4)&&(y==my4) )|| ((x==mx5)&&(y==my5) ))
	{

	 cleardevice();
      settextstyle(8,0,15);
      setbkcolor(BLUE);

      for(int i=0;i<25;i++)
       {   textcolor(WHITE);
       settextstyle(0,random(1),50);
       outtextxy(80,100,"oUt");
       }
       getch();

       exit(0);


	}

    }




					 } while (enter!=27);/////esc to exit



 getch();
}

void main()
{
clrscr();

   int gd=DETECT,gm;
  initgraph(&gd,&gm,"c:/turboc3/bgi");
 front();
 framework();
  print();
 pixel();
}








