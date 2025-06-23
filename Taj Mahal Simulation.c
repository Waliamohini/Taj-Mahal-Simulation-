#include <conio.h>
#include <graphics.h>
#include <dos.h>

int main() 
{
    int gd = DETECT, gm, i;

    // int points[] = {300,340,330,340, 412, 430, 220, 430, 300,340};
    int points[] = {300,340,330,340, 432, 450, 200, 450, 300,340};

    
    
    initgraph(&gd, &gm, "C:\\TurboC3\\BGI");



    //left side trees 
setcolor(BROWN);                       // Set the color for the tree trunk
setfillstyle(SOLID_FILL, BROWN);       // Brown for the trunk
rectangle(205, 370, 215, 410);         // Tree trunk (slightly wider for better proportions)
floodfill(206, 400, BROWN);            // Fill the trunk with brown color

setcolor(GREEN);                       // Set the color for the tree canopy
setfillstyle(SOLID_FILL, GREEN);       // Green for the canopy
circle(210, 360, 13.5);                  // Tree canopy (repositioned and larger for better appearance)
floodfill(210, 360, GREEN);    
delay(300);       // Fill the canopy with green color

setcolor(BROWN);                       // Set the color for the tree trunk
setfillstyle(SOLID_FILL, BROWN); 
rectangle(170, 370, 180, 430);  // Second tree trunk
floodfill(175, 400, BROWN);     // Fill trunk
setcolor(GREEN);                       // Set the color for the tree canopy
setfillstyle(SOLID_FILL, GREEN);
    circle(175, 370, 15);           // Second tree canopy
    floodfill(175, 370, GREEN);     // Fill canopy
    delay(300); 



    // Adding trees on the right side of the trapezium
     setcolor(BROWN);                       // Set the color for the tree trunk
setfillstyle(SOLID_FILL, BROWN); 
    rectangle(405, 370, 415, 410); 
floodfill(406, 400, BROWN);            // Fill the trunk with brown color
    
     // Tree trunk
    setcolor(GREEN);                       // Set the color for the tree canopy
setfillstyle(SOLID_FILL, GREEN);    // Fill trunk
    circle(410, 360, 13.5);           // Tree canopy
    floodfill(405, 360, GREEN);     // Fill canopy

    delay(300); 

//second tree :right 
    setcolor(BROWN);                       // Set the color for the tree trunk
setfillstyle(SOLID_FILL, BROWN); 
rectangle(440, 370, 450, 430);  // Second tree trunk 
floodfill(445, 400, BROWN);     // Fill trunk
setcolor(GREEN);                       // Set the color for the tree canopy
setfillstyle(SOLID_FILL, GREEN);
circle(445, 370, 15);           // Second tree canopy
    floodfill(445, 370, GREEN);     // Fill canopy
    delay(300); 

    
        // Define the trapezium (where "TAJ MAHAL" is written)
    setfillstyle(SOLID_FILL, BLUE); // Blue color for the trapezium
     
    fillpoly(5, points); // Fill the trapezium with blue color

    // Write "TAJ MAHAL" text within the trapezium
    settextstyle(7, 0, 2); // Text style and size
    setcolor(WHITE); // Set text color to white for visibility

    
// Base water reflection pool
    setfillstyle(11, WHITE); // Blue for water
    rectangle(150, 320, 500, 340); // Water rectangle
    floodfill(152, 322, WHITE);
    // Greenery (bushes/grass)
    setfillstyle(10, WHITE); // Green for greenery
    rectangle(120, 320, 145, 340); // Left greenery
    floodfill(122, 322, WHITE);

    rectangle(505, 320, 530, 340); // Right greenery
    floodfill(507, 322, WHITE);

    
    
    setlinestyle(0, 0, 3);
    ellipse(230, 160, 0, 180, 30, 30); // left house top
    ellipse(390, 160, 0, 180, 30, 30); // right house top
    ellipse(353, 120, 270, 90, 15, 40); // right arc
    ellipse(269, 120, 100, 270, 17, 40); // left arc

    // Design
    // ellipse(315, 120, 0, 180, 65, 10);
    //  ellipse(327, 132, 0, 180, 60, 4);
    // ellipse(322, 140, 0, 180, 65, 5);

    rectangle(265, 75,357,80);
    delay(300); 



ellipse(310, 75, 0, 180,40,10);
ellipse(310, 68, 0, 180,30,10);
ellipse(310, 60, 0, 180,20,10);
ellipse(310, 50, 0, 180,10,5);

circle(310,43,2);
circle(310,40,2);
circle(310,36,3);
rectangle(200,190,260,300);

//arc design 
    ellipse(207,190,0,180,5,20);
    ellipse(217,190,0,180,5,20);
    ellipse(227,190,0,180,5,20);
    ellipse(237,190,0,180,5,20);
    ellipse(247,190,0,180,5,20);
    ellipse(257,190,0,180,3,20);
    rectangle(201,160,262,195);
    delay(300); 
// Arc design 2
    ellipse(365,190,0,180,5,20);
    ellipse(375,190,0,180,5,20);
    ellipse(385,190,0,180,5,20);
    ellipse(395,190,0,180,5,20);
    ellipse(405,190,0,180,5,20);
    ellipse(415,190,0,180,5,20);

     rectangle(360,190,420,300);  // Right pillar
    rectangle(360,160,420,195); // Right pillar top//
    delay(300); 
// // Window right
   
    rectangle(365,200,415,240);
    floodfill(367,205,WHITE);
    ellipse(390,220,0,180,25,20);
    rectangle(365,250,415,300);
    floodfill(367,255,WHITE);
    ellipse(390,270,0,180,25,20);


line(150, 200, 150, 300); // extreme left
line(200, 190, 150, 200); // left join top
line(200, 195, 150, 205); // design left join top



line(160, 215, 160, 245);  // window extreme1
line(190, 210, 190, 240);
line(160, 245, 190, 240);
line(160, 215, 190, 210);

line(160, 290, 190, 290);
line(160, 255, 160, 300); // window extreme2
line(190, 250, 190, 300);
line(160, 255, 190, 250);

delay(300); 
//     //window left
    rectangle(205,200,255,240); 
    floodfill(210,205,WHITE);
    ellipse(230,220,0,180,25,20);
    rectangle(205,250,255,300);     
    floodfill(210,255,WHITE);
    ellipse(230,270,0,180,25,20);

    line(470,200,470,300); // extreme ryt
    line(420,190,470,200); // ryt join top
    line(420,195,470,205); // design ryt join top
    line(430,210,430,240); // window extreme1
    line(460,215,460,245);
    line(430,240,460,245);
    line(430,210,460,215);
// not this


    line(430,290,460,290);
    line(430,250,430,300); // window extreme2
    line(460,255,460,300);
    line(430,250,460,255);
    delay(300); 
// gate essential
    line(285,220,285,295);
    line(335,220,335,295);
    line(285,220,305,200);
    line(335,220,315,200);
    line(305,200,315,200);
    delay(300); 
// pillar 1
    ellipse(38,120,0,180,14,20);
    rectangle(20,120,55,125);
    line(25,125,25,140);
    line(50,125,50,140);

    setfillstyle(2,RED);
    rectangle(25,150,50,195);
    floodfill(27,155,WHITE);
    ellipse(37,140,180,0,23,10);
    line(15,140,60,140);
                              
    rectangle(25,205,50,240);
    floodfill(27,215,WHITE);

    ellipse(37,195, 180,0,24,10);
    line(14,195,61,195);
    rectangle(25,250,50,300);
    floodfill(27,255,WHITE);
    ellipse(37,240,180,0,23,10);
    line(14,240,61,240);

    delay(300); 
// pillar 2
    ellipse(100,140,0,180,10,15);
    rectangle(87,140,113,145);
    rectangle(85,170,115,205);
    line(90,145,90,160);
    line(110,145,110,160);
    floodfill(87,175,WHITE);
    ellipse(100,160,180,0,20,10);
    line(80,160,120,160);
    rectangle(85,215,115,250);
    floodfill(87,225,WHITE);
    ellipse(100,205,180,0,20,10);
    line(80,205,120,205);
    rectangle(85,260,115,300);
    floodfill(87,275,WHITE);
    ellipse(100,250,180,0,20,10);
    line(80,250,120,250); 

    delay(300); 
// pillar 3
    ellipse(513,130,0,180,10,17);
    rectangle(500,130,525,135);
    rectangle(500,160,525,195);
    floodfill(505,175,WHITE);

    line(503,135,503,150);
    line(523,135,523,150);

    ellipse(513,150,180,0,20,10);
    line(493,150,533,150);
    rectangle(500,205,525,250);
    floodfill(505,215,WHITE);

    ellipse(513,195,180,0,24,10);
    line(490,195,537,195);
    rectangle(500,260,525,300);
    floodfill(505,275,WHITE);

    ellipse(512,250,180,0,20,10);
    line(493,250,532,250);
    delay(300); 
// pillar 4
 ellipse(579,120,0,180,14,20);
rectangle(563,120,595,125);

line(565,125,565,140);
line(590,125,590,140);

rectangle(565,150,595,185);
floodfill(570,175,WHITE);
ellipse(579,140,180,0,23,10);
line(556,140,603,140);

rectangle(565,195,595,240);
floodfill(567,200,WHITE);
ellipse(579,185,180,0,24,10);
line(556,185,603,185);

rectangle(565,250,595,300);
floodfill(567,252,WHITE);
ellipse(579,240,180,0,23,10);
line(556,240,603,240);//
delay(300); 
// gate
setfillstyle(5,BLUE);
rectangle(270,180,350,300);

rectangle(280,195,340,297);
floodfill(285,200,WHITE);
rectangle(260,160,360,300);

delay(300); 
//base 

// middle
line(20,300,600,300);

// end
line(20,300,20,320);
line(600,300,600,320);

setfillstyle(9,YELLOW);
line(30,307,590,307);
line(210,340,410,340);

rectangle(210,320,240,340);
floodfill(220,330,WHITE);

rectangle(380,320,410,340);
floodfill(385,325,WHITE);

rectangle(270,300,350,340);
delay(300); 
// left foot
setfillstyle(4,BROWN);
line(244,354,120,450);
line(270,365,200,450);
line(270,370,205,450);
delay(300); 
// ryt foot
line(385,355,500,440);

line(355,370,430,450);
line(355,365,440,450);
delay(300); 
// middle rect
rectangle(270,365,355,370);
floodfill(285,325,WHITE);
delay(300); 
// join left
line(245,355,270,365);

// join ryt
line(355,365,385,355);

// stairs
rectangle(275,365,350,360);
rectangle(280,355,345,360);
rectangle(285,350,340,355);
rectangle(290,345,335,350);
rectangle(295,340,330,345);
//

delay(300); 
// text
settextstyle(7,0,2);
outtextxy(255,400,"TAJ MAHAL");
outtextxy(305,12,".");
outtextxy(570,117,".");
outtextxy(588,117,".");


outtextxy(505,125,"'");
outtextxy(520,125,"'");
outtextxy(28,117,"'");
outtextxy(47,117,"'");
outtextxy(92,135,"'");
outtextxy(108,135,"'");

settextstyle(0,0,1);
outtextxy(222,124,"^");
outtextxy(383,124,"^");
outtextxy(35,92,"'");
outtextxy(575,92,"'");
outtextxy(510,105,"'");
outtextxy(97,117,"'");
outtextxy(227,117,"'");
outtextxy(387,117,"'");
delay(300); 


settextstyle(8, 0, 1);
for (i = 1; i <= 115; i++) {
    setcolor(i);
    outtextxy(90, 50, "MADE BY");
    outtextxy(75, 70, "Jaya & Mohini");
    delay(50);
}

// ART


getch();
closegraph();
return 0;

}

