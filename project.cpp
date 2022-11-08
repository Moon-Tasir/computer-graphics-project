#include <windows.h>
#include <GL/glut.h>
#include<math.h>
static float tx=-90,ty=0;
static float bx1=-90,by1=0;
static float bx2=-90,by2=0;
static float bx3=-90,by3=0;
static float bx4=-90,by4=0;
static float bx5=-90,by5=0;
static float px1=-90,py1=0;
static float px2=-90,py2=0;
static float px3=-90,py3=0;
static float px4=-90,py4=0;


static float r1= 0;
static float r2= 10;
static float r3= 20;
static float r4= 30;
static float r5= 40;
static float r6= 50;
static float r7= 60;
static float r8= 70;
static float r9= 80;
static float r10= 90;
static float r11= 100;
static float r12= 110;

void rainfall()
{
    r1 -= .01;
    if(r1 < -100)
        r1 = 550;
    glutPostRedisplay();

    r2 -= .01;
    if(r2 < -100)
        r2 = 550;
    glutPostRedisplay();

    r3 -= .01;
    if(r3 < -100)
        r3 = 550;
    glutPostRedisplay();

    r4 -= .01;
    if(r4 < -100)
        r4 = 550;
    glutPostRedisplay();

    r5 -= .01;
    if(r5 < -100)
        r5 = 550;
    glutPostRedisplay();

    r6 -= .01;
    if(r6 < -100)
        r6 = 550;
    glutPostRedisplay();

    r7 -= .01;
    if(r7 < -100)
        r7 = 550;
    glutPostRedisplay();

    r8 -= .01;
    if(r8 < -100)
        r8 = 550;
    glutPostRedisplay();

    r9 -= .01;
    if(r9 < -100)
        r9 = 550;
    glutPostRedisplay();

    r10 -= .01;
    if(r10 < -100)
        r10 = 550;
    glutPostRedisplay();
    r11 -= .01;
    if(r11 < -100)
        r11 = 550;
    glutPostRedisplay();

    r12 -= .01;
    if(r12 < -100)
        r12 = 550;
    glutPostRedisplay();
}

void Rain()
{
    rainfall();
    glColor3f(1,1,1);
    int y = 97;
    for(int i = 0;i<1100;i= i+20){
        glBegin(GL_POINTS);

        glVertex2d(i,y);
        glVertex2d(i,y+20);
        glVertex2d(i,y+40);
        glVertex2d(i,y+80);
        glVertex2d(i,y+120);
        glVertex2d(i,y+200);
        glVertex2d(i,y+300);
        glVertex2d(i,y+400);
        glVertex2d(i,y+500);
        glVertex2d(i,y+600);



    glEnd();

    }
}

void rainFall()
{
    glPushMatrix();
        glTranslated(0,r1,0);
        Rain();
    glPopMatrix();

    glPushMatrix();
        glTranslated(0,r2,0);
        Rain();
    glPopMatrix();

    glPushMatrix();
        glTranslated(0,r3,0);
        Rain();
    glPopMatrix();

    glPushMatrix();
        glTranslated(0,r4,0);
        Rain();
    glPopMatrix();

    glPushMatrix();
        glTranslated(0,r5,0);
        Rain();
    glPopMatrix();

    glPushMatrix();
        glTranslated(0,r6,0);
        Rain();
    glPopMatrix();

    glPushMatrix();
        glTranslated(0,r7,0);
        Rain();
    glPopMatrix();

    glPushMatrix();
        glTranslated(0,r8,0);
        Rain();
    glPopMatrix();

    glPushMatrix();
        glTranslated(0,r9,0);
        Rain();
    glPopMatrix();

    glPushMatrix();
        glTranslated(0,r10,0);
        Rain();
    glPopMatrix();

    glPushMatrix();
        glTranslated(0,r11,0);
        Rain();
    glPopMatrix();

}




void delay(){
for(int i=0;i<10000;i++)
{

}
}
void DrawCircle(float cx, float cy, float rx, float ry, int num_segments)
{

    glBegin(GL_TRIANGLE_FAN);
    for (int ii = 0; ii < num_segments; ii++)
    {

        float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);

        float x = rx * cosf(theta);
        float y = ry * sinf(theta);
        glVertex2f(x + cx, y + cy);
    }
    glEnd();
}


static GLfloat spin = 0.0;

void spinDisplay_right(void)
{
    spin = spin - .01;
    if (spin > 360.0)
        spin = spin - 360.0;
    glutPostRedisplay();
}

void boatMove(){
bx1+=0.2;
if(bx1>1130)
{
   bx1=-200;
}
glutPostRedisplay();
}

void boatMove2(){
bx2+=0.2;
if(bx2>1130)
{
   bx2=-200;
}
glutPostRedisplay();
}

void boatMove3(){
bx3-=0.2;
if(bx3<-1000)
{
   bx3=650;
}
glutPostRedisplay();
}
void boatMove4(){
bx4-=0.2;
if(bx4<-1000)
{
   bx4=650;
}
glutPostRedisplay();
}
void boatMove5(){
bx5-=0.2;
if(bx5<-1000)
{
   bx5=650;
}
glutPostRedisplay();
}
void bloonMove1(){
px1+=0.05;
if(px1>1000)
{
   px1=-90;
}
glutPostRedisplay();
}
void bloonMove2(){
px2+=0.05;
if(px2>1000)
{
   px2=-90;
}
glutPostRedisplay();
}
void bloonMove3(){
px3-=0.05;
if(px3<-1000)
{
   px3=650;
}
glutPostRedisplay();
}
   void bloonMove4(){
px4-=0.05;
if(px4<-1000)
{
   px4=650;
}
glutPostRedisplay();
}

void trainMove(){
tx+=0.2;
if(tx>1130)
{
   tx=-590;
}
glutPostRedisplay();
}
int x=0;

void nightRain(){

    glClear(GL_COLOR_BUFFER_BIT);

       //sky
    glColor3ub(51 ,51, 51);
    glRectf(0,410,1100,550);
    //hill
glBegin(GL_TRIANGLES);
glColor3ub(34 ,139, 34);
glVertex2d(780,472);
glVertex2d(830,472);
glVertex2d(800,510);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(34 ,139, 34);
glVertex2d(810,472);
glVertex2d(890,472);
glVertex2d(860,518);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(34 ,139, 34);
glVertex2d(880,472);
glVertex2d(940,472);
glVertex2d(920,515);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(34 ,139, 34);
glVertex2d(920,472);
glVertex2d(990,472);
glVertex2d(950,509);
glEnd();


    //fild
 glColor3ub(34 ,139, 34);
glRectf(0,0,1100,420);

for( x=0;x<1100;x=x+190)
{


//star
glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(x+5, 525);
    glVertex2f(x+15, 530);
    glVertex2f(x+20, 525);
    glVertex2f(x+15, 520);
    glEnd();
    glBegin(GL_QUADS);

    glVertex2f(x+20,525);
    glVertex2f(x+15, 530);
    glVertex2f(x+20, 540);
    glVertex2f(x+25, 530);
    glEnd();
    glBegin(GL_QUADS);

    glVertex2f(x+20, 525);
    glVertex2f(x+25, 530);
    glVertex2f(x+35, 525);
    glVertex2f(x+25, 520);
    glEnd();
    glBegin(GL_QUADS);

    glVertex2f(x+15, 520);
    glVertex2f(x+20, 510);
    glVertex2f(x+25, 520);
    glVertex2f(x+20, 525);
    glEnd();


}
//river

glColor3ub(39, 64 ,139);
glRectf(0,473,1100,430);

glPushMatrix();
glTranslatef(bx1,by1,0);
//boat1
glColor3ub(205, 102 ,29);
glBegin(GL_QUADS);
glVertex2d(0,485);
glVertex2d(80,485);
glVertex2d(70,472);
glVertex2d(10,472);
glEnd();
glRectf(20,485,65,496);
glPopMatrix();
boatMove();
 glColor3ub(255,255,255);
DrawCircle(530,499,15,15,5000);

//boat2
glPushMatrix();
glTranslatef(bx2,by2,0);
glColor3ub(139 ,0 ,0);
glBegin(GL_QUADS);
glVertex2d(220,485);
glVertex2d(300,485);
glVertex2d(290,472);
glVertex2d(230,472);
glEnd();
glRectf(240,485,285,496);


glPopMatrix();
boatMove2();




//boat3
glPushMatrix();
glTranslatef(bx3,by3,0);

glColor3ub(139, 34 ,82);

glBegin(GL_QUADS);
glVertex2d(800,455);
glVertex2d(880,455);
glVertex2d(870,445);
glVertex2d(810,445);
glEnd();
glRectf(820,455,865,469);
glPopMatrix();
boatMove3();
//boat4
glPushMatrix();
glTranslatef(bx4,by4,0);
glColor3ub(139, 0 ,139);
glBegin(GL_QUADS);
glVertex2d(600,455);
glVertex2d(680,455);
glVertex2d(670,445);
glVertex2d(610,445);
glEnd();
glRectf(620,455,665,469);
glPopMatrix();
boatMove4();
//boat5
glPushMatrix();
glTranslatef(bx5,by5,0);
glColor3ub(176, 48, 96);
glBegin(GL_QUADS);
glVertex2d(400,455);
glVertex2d(480,455);
glVertex2d(470,445);
glVertex2d(410,445);
glEnd();
glRectf(420,455,465,469);
glPopMatrix();
boatMove5();

//sea_b
glColor3ub(205 ,140 ,149);
glRectf(0,420,1100,430);

//flag
glColor3ub(139, 37 ,0);
glRectf(2,420,6,500);


glColor3ub(46 ,139 ,87);
glRectf(6,500,55,464);


//flag round
glBegin(GL_TRIANGLE_FAN);
int ro=10;
    glColor3ub(255, 69, 0);

    for (int i = 0; i <= 360; i+=1) {

        float x = 30+ro * sin(i);

        float y = 482+ro * cos(i);

        glVertex2f(x, y);
    }
glEnd();


//sohed miner
//1st
glColor3ub(0,0,0);
glRectf(10,420,13,450);
glRectf(23,420,26,450);
glRectf(10,450,26,453);
//2nd
glRectf(36,420,39,460);
glRectf(49,420,52,460);
glRectf(36,460,52,463);
//mid
glBegin(GL_TRIANGLE_FAN);
int m=18;
    glColor3ub(255, 69, 0);

    for (int i = 0; i <= 360; i+=1) {

        float x = 77+m * sin(i);

        float y = 445+m * cos(i);

        glVertex2f(x, y);
    }
glEnd();
//3nd
glColor3ub(0,0,0);
glRectf(62,420,65,470);
glRectf(75,420,78,470);
glRectf(62,470,78,473);

glRectf(75,420,78,470);
glRectf(88,420,91,470);
glRectf(75,470,91,473);
//4h
glRectf(101,420,104,460);
glRectf(114,420,117,460);
glRectf(101,460,117,463);
//5st
glColor3ub(0,0,0);
glRectf(127,420,130,450);
glRectf(140,420,143,450);
glRectf(127,450,143,453);

glRectf(5,415,148,423);




//tran_line
glColor3ub(139, 37 ,0);
int a=0,b=20;
for(int s=0;s<=30;s++)
{
 glRectf(a,0,b,50);
 a+=60;
 b+=60;
}
glRectf(0,5,1100,10);
glRectf(0,35,1100,40);



glPushMatrix();
glTranslatef(tx,ty,0);

//train_wheel
glColor3ub(0,0,0);

int w=5;

glBegin(GL_TRIANGLE_FAN);
    for (int i = 0; i <= 360; i+=1) {

        float x = 55+m * sin(i);

        float y = 25+m * cos(i);

        glVertex2f(x, y);
    }
glEnd();
glBegin(GL_TRIANGLE_FAN);
    for (int i = 0; i <= 360; i+=1) {

        float x = 100+m * sin(i);

        float y = 25+m * cos(i);

        glVertex2f(x, y);
    }
glEnd();
//lstRoom
glColor3ub(139 ,0 ,139);
glRectf(5,25,150,150);
//window
glColor3ub(190, 190, 190);
glRectf(25,65,130,130);


//2nd room wheel
glColor3ub(0,0,0);
glBegin(GL_TRIANGLE_FAN);
    for (int i = 0; i <= 360; i+=1) {

        float x = 215+m * sin(i);

        float y = 25+m * cos(i);

        glVertex2f(x, y);
    }
glEnd();
glBegin(GL_TRIANGLE_FAN);
    for (int i = 0; i <= 360; i+=1) {

        float x = 265+m * sin(i);

        float y = 25+m * cos(i);

        glVertex2f(x, y);
    }
glEnd();
//2nd room
glColor3ub(139 ,0 ,139);
glRectf(170,25,325,150);
//window
glColor3ub(190, 190, 190);
glRectf(189,65,310,130);
//1st room wheel
glColor3ub(0,0,0);
glBegin(GL_TRIANGLE_FAN);
    for (int i = 0; i <= 360; i+=1) {

        float x = 395+m * sin(i);

        float y = 25+m * cos(i);

        glVertex2f(x, y);
    }
glEnd();
glBegin(GL_TRIANGLE_FAN);
    for (int i = 0; i <= 360; i+=1) {

        float x = 445+m * sin(i);

        float y = 25+m * cos(i);

        glVertex2f(x, y);
    }
glEnd();
//1st room
glColor3ub(176, 48, 96);
glRectf(340,25,495,150);
//window
glColor3ub(190, 190, 190);
glRectf(352,65,480,130);
//fontWheel
glColor3ub(0,0,0);
glBegin(GL_TRIANGLE_FAN);
    for (int i = 0; i <= 360; i+=1) {

        float x = 520+m * sin(i);

        float y = 25+m * cos(i);

        glVertex2f(x, y);
    }
glEnd();
glBegin(GL_TRIANGLE_FAN);
    for (int i = 0; i <= 360; i+=1) {

        float x = 560+m * sin(i);

        float y = 25+m * cos(i);

        glVertex2f(x, y);
    }
glEnd();

glColor3ub(205 ,104, 57);
glRectf(495,25,580,95);

//light
glColor3ub(47, 79,79);
glRectf(580,70,589,90);

glBegin(GL_TRIANGLES);
glVertex2d(580,60);
glVertex2d(595,30);
glVertex2d(580,30);
glEnd();


glPopMatrix();
trainMove();


//hotAirBloon1
glPushMatrix();
glTranslatef(px1,py1,0);
    glColor3ub(199, 21 ,133);
    glRectf(10,540,45,545);


glColor3ub(139 ,69, 19);
      glBegin(GL_LINES);
        glVertex3d(15,520,0.0);
        glVertex3d(20,525,0.0);
  glEnd();
  glBegin(GL_LINES);
        glVertex3d(40,520,0.0);
        glVertex3d(30,530,0.0);
  glEnd();

    glBegin(GL_QUADS);
    glVertex2d(45,545);
     glVertex2d(35,525);
    glVertex2d(20,525);
    glVertex2d(10,545);
glEnd();
glRectf(15,510,40,520);
glPopMatrix();
bloonMove1();
//hotAirBloon2
glPushMatrix();
glTranslatef(px2,py2,0);
    glColor3ub(205 ,0 ,205);
    glRectf(110,535,145,540);

      glBegin(GL_LINES);
        glVertex3d(115,515,0.0);
        glVertex3d(120,520,0.0);
  glEnd();
  glBegin(GL_LINES);
        glVertex3d(140,515,0.0);
        glVertex3d(130,525,0.0);
  glEnd();

    glBegin(GL_QUADS);
    glVertex2d(145,540);
     glVertex2d(135,520);
    glVertex2d(120,520);
    glVertex2d(110,540);
glEnd();
glRectf(115,505,140,515);
glPopMatrix();
bloonMove2();
//hotAirBloon3
glPushMatrix();
glTranslatef(px3,py3,0);

    glColor3ub(255 ,165, 0);
    glRectf(1010,535,1045,540);

      glBegin(GL_LINES);
        glVertex3d(1015,515,0.0);
        glVertex3d(1020,520,0.0);
  glEnd();
  glBegin(GL_LINES);
        glVertex3d(1040,515,0.0);
        glVertex3d(1030,525,0.0);
  glEnd();

    glBegin(GL_QUADS);
    glVertex2d(1045,540);
     glVertex2d(1035,520);
    glVertex2d(1020,520);
    glVertex2d(1010,540);
glEnd();
glRectf(1015,505,1040,515);
glPopMatrix();
bloonMove3();
//hotAirBloon4
glPushMatrix();
glTranslatef(px4,py4,0);
    glColor3ub(205, 0, 0);
    glRectf(910,540,945,545);

      glBegin(GL_LINES);
        glVertex3d(915,520,0.0);
        glVertex3d(920,525,0.0);
  glEnd();
  glBegin(GL_LINES);
        glVertex3d(940,520,0.0);
        glVertex3d(930,530,0.0);
  glEnd();

    glBegin(GL_QUADS);
    glVertex2d(945,545);
     glVertex2d(935,525);
    glVertex2d(920,525);
    glVertex2d(910,545);
glEnd();
glRectf(915,510,940,520);
glPopMatrix();
bloonMove4();





//tree
glColor3ub(205, 175, 149);
   glBegin(GL_QUADS);
        glVertex3d(989.0,165.0,0.0);
        glVertex3d(1070.0,165.0,0.0);
        glVertex3d(1049.0,380.0,0.0);
        glVertex3d(1008.0,380.0,0.0);
    glEnd();

glBegin(GL_TRIANGLE_FAN);

    glColor3ub(0 ,100, 0);

    for (int i = 0; i <= 360; i++) {

        float x = 1036+80 * sin(i);

        float y = 430+80 * cos(i);

        glVertex2f(x, y);
    }
glEnd();




//woman besid tree

//hand
 glColor3ub(255 ,218 ,185);
glBegin(GL_TRIANGLES);
glVertex2d(875,280);
glVertex2d(860,262);
glVertex2d(875,260);
glEnd();
glBegin(GL_TRIANGLES);
glVertex2d(888,278);
glVertex2d(900,262);
glVertex2d(890,260);
glEnd();
//bloonLine
glBegin(GL_LINES);
        glVertex3d(899.0,262.0,0.0);
        glVertex3d(900.0,340.0,0.0);

        glVertex3d(899.0,318.0,0.0);
        glVertex3d(876.0,340.0,0.0);

        glVertex3d(899.0,318.0,0.0);
        glVertex3d(928.0,340.0,0.0);
  glEnd();
  //bloon

  glColor3ub(255 ,69, 0);
   DrawCircle(900, 359, 15, 19, 500);

   glColor3ub(153, 50, 204);
   DrawCircle(880, 350, 15, 19, 500);
   glColor3ub(0 ,0, 255);
   DrawCircle(920, 350, 15, 19, 500);
//body
glColor3ub(255 ,218 ,185);
glRectf(865,243,895,215);
//cloth
glColor3ub(255, 52, 179);
glBegin(GL_TRIANGLES);
glVertex2d(880,310);
glVertex2d(860,230);
glVertex2d(900,230);
glEnd();
glBegin(GL_TRIANGLE_FAN);
//head

glColor3ub(112, 128, 144);
    for (int i = 0; i <= 360; i++) {

        float x = 880+15 * sin(i);

        float y = 300+15 * cos(i);

        glVertex2f(x, y);
    }
glEnd();


glColor3ub(34 ,139, 34);
glRectf(872,231,888,200);


//man beside tree
glColor3ub(39, 64 ,139);
glRectf(800,290,840,205);
//fild
 glColor3ub(34 ,139, 34);
glBegin(GL_TRIANGLES);
glVertex2d(810,205);
glVertex2d(820,243);
glVertex2d(830,205);
glEnd();
glColor3ub(205, 92 ,92);
glRectf(800,290,840,250);

//head
glColor3ub(112, 128, 144);

glBegin(GL_TRIANGLE_FAN);
    for (int i = 0; i <= 360; i+=1) {

        float x = 820+15 * sin(i);

        float y = 306+15 * cos(i);

        glVertex2f(x, y);
    }
glEnd();
glColor3ub(255 ,218 ,185);
//hand
glBegin(GL_TRIANGLES);
glVertex2d(800,290);
glVertex2d(790,270);
glVertex2d(800,270);
glEnd();

glBegin(GL_TRIANGLES);
glVertex2d(840,290);
glVertex2d(850,270);
glVertex2d(840,270);
glEnd();
//dolna
glColor3ub(139 ,35, 35);
glRectf(200,180,210,390);
glRectf(350,180,360,390);
glRectf(200,382,360,388);
glRectf(220,382,222,230);
glRectf(340,388,222,230);
glColor3ub(34 ,139, 34);
glRectf(225,382,335,250);


//woman dolnay

//hand
 glColor3ub(255 ,218 ,185);
glBegin(GL_TRIANGLES);
glVertex2d(275,280);
glVertex2d(260,262);
glVertex2d(275,260);
glEnd();
glBegin(GL_TRIANGLES);
glVertex2d(288,278);
glVertex2d(300,262);
glVertex2d(290,260);
glEnd();


//cloth
glColor3ub(255, 0, 255);
glBegin(GL_TRIANGLES);
glVertex2d(280,310);
glVertex2d(260,240);
glVertex2d(300,240);
glEnd();
glBegin(GL_TRIANGLE_FAN);
//head

glColor3ub(112, 128, 144);
    for (int i = 0; i <= 360; i++) {

        float x = 280+15 * sin(i);

        float y = 300+15 * cos(i);

        glVertex2f(x, y);
    }
glEnd();



//branch people


//woman besid tree

//hand
 glColor3ub(255 ,218 ,185);
glBegin(GL_TRIANGLES);
glVertex2d(575,280);
glVertex2d(560,262);
glVertex2d(575,260);
glEnd();
glBegin(GL_TRIANGLES);
glVertex2d(588,278);
glVertex2d(600,262);
glVertex2d(590,260);
glEnd();

//body
glColor3ub(255 ,218 ,185);
glRectf(565,243,595,215);
//cloth
glColor3ub(139, 28, 98);
glBegin(GL_TRIANGLES);
glVertex2d(580,310);
glVertex2d(560,230);
glVertex2d(600,230);
glEnd();
glBegin(GL_TRIANGLE_FAN);
//head

glColor3ub(112, 128, 144);
    for (int i = 0; i <= 360; i++) {

        float x = 580+15 * sin(i);

        float y = 300+15 * cos(i);

        glVertex2f(x, y);
    }
glEnd();


glColor3ub(34 ,139, 34);
glRectf(572,231,588,200);


//man beside tree
glColor3ub(39, 64 ,139);
glRectf(500,290,540,205);
//fild
 glColor3ub(34 ,139, 34);
glBegin(GL_TRIANGLES);
glVertex2d(510,205);
glVertex2d(520,243);
glVertex2d(530,205);
glEnd();
glColor3ub(155 ,48, 255);
glRectf(500,290,540,250);

//head
glColor3ub(112, 128, 144);

glBegin(GL_TRIANGLE_FAN);
    for (int i = 0; i <= 360; i+=1) {

        float x = 520+15 * sin(i);

        float y = 306+15 * cos(i);

        glVertex2f(x, y);
    }
glEnd();
glColor3ub(255 ,218 ,185);
//hand
glBegin(GL_TRIANGLES);
glVertex2d(500,290);
glVertex2d(490,270);
glVertex2d(500,270);
glEnd();

glBegin(GL_TRIANGLES);
glVertex2d(540,290);
glVertex2d(550,270);
glVertex2d(540,270);
glEnd();

//branch
glColor3ub(139 ,69 ,0);
glBegin(GL_QUADS);
glVertex2d(475,225);
glVertex2d(470,250);
glVertex2d(630,250);
glVertex2d(625,225);
glEnd();
glRectf(470,260,630,270);


//glRectf(480,260,620,270)
glRectf(480,260,490,180);
glRectf(610,260,620,180);

//rain
rainFall();

    glFlush();
    for(int i=0;i<100000;i++)
    {

    }
}
void night()
{

    glClear(GL_COLOR_BUFFER_BIT);

       //sky
    glColor3ub(51 ,51, 51);
    glRectf(0,410,1100,550);
    //hill
glBegin(GL_TRIANGLES);
glColor3ub(34 ,139, 34);
glVertex2d(780,472);
glVertex2d(830,472);
glVertex2d(800,510);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(34 ,139, 34);
glVertex2d(810,472);
glVertex2d(890,472);
glVertex2d(860,518);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(34 ,139, 34);
glVertex2d(880,472);
glVertex2d(940,472);
glVertex2d(920,515);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(34 ,139, 34);
glVertex2d(920,472);
glVertex2d(990,472);
glVertex2d(950,509);
glEnd();


    //fild
 glColor3ub(34 ,139, 34);
glRectf(0,0,1100,420);

for( x=0;x<1100;x=x+190)
{


//star
glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(x+5, 525);
    glVertex2f(x+15, 530);
    glVertex2f(x+20, 525);
    glVertex2f(x+15, 520);
    glEnd();
    glBegin(GL_QUADS);

    glVertex2f(x+20,525);
    glVertex2f(x+15, 530);
    glVertex2f(x+20, 540);
    glVertex2f(x+25, 530);
    glEnd();
    glBegin(GL_QUADS);

    glVertex2f(x+20, 525);
    glVertex2f(x+25, 530);
    glVertex2f(x+35, 525);
    glVertex2f(x+25, 520);
    glEnd();
    glBegin(GL_QUADS);

    glVertex2f(x+15, 520);
    glVertex2f(x+20, 510);
    glVertex2f(x+25, 520);
    glVertex2f(x+20, 525);
    glEnd();


}
//river

glColor3ub(39, 64 ,139);
glRectf(0,473,1100,430);

glPushMatrix();
glTranslatef(bx1,by1,0);
//boat1
glColor3ub(205, 102 ,29);
glBegin(GL_QUADS);
glVertex2d(0,485);
glVertex2d(80,485);
glVertex2d(70,472);
glVertex2d(10,472);
glEnd();
glRectf(20,485,65,496);
glPopMatrix();
boatMove();
 glColor3ub(255,255,255);
DrawCircle(530,499,15,15,5000);

//boat2
glPushMatrix();
glTranslatef(bx2,by2,0);
glColor3ub(139 ,0 ,0);
glBegin(GL_QUADS);
glVertex2d(220,485);
glVertex2d(300,485);
glVertex2d(290,472);
glVertex2d(230,472);
glEnd();
glRectf(240,485,285,496);


glPopMatrix();
boatMove2();




//boat3
glPushMatrix();
glTranslatef(bx3,by3,0);

glColor3ub(139, 34 ,82);

glBegin(GL_QUADS);
glVertex2d(800,455);
glVertex2d(880,455);
glVertex2d(870,445);
glVertex2d(810,445);
glEnd();
glRectf(820,455,865,469);
glPopMatrix();
boatMove3();
//boat4
glPushMatrix();
glTranslatef(bx4,by4,0);
glColor3ub(139, 0 ,139);
glBegin(GL_QUADS);
glVertex2d(600,455);
glVertex2d(680,455);
glVertex2d(670,445);
glVertex2d(610,445);
glEnd();
glRectf(620,455,665,469);
glPopMatrix();
boatMove4();
//boat5
glPushMatrix();
glTranslatef(bx5,by5,0);
glColor3ub(176, 48, 96);
glBegin(GL_QUADS);
glVertex2d(400,455);
glVertex2d(480,455);
glVertex2d(470,445);
glVertex2d(410,445);
glEnd();
glRectf(420,455,465,469);
glPopMatrix();
boatMove5();

//sea_b
glColor3ub(205 ,140 ,149);
glRectf(0,420,1100,430);

//flag
glColor3ub(139, 37 ,0);
glRectf(2,420,6,500);


glColor3ub(46 ,139 ,87);
glRectf(6,500,55,464);


//flag round
glBegin(GL_TRIANGLE_FAN);
int ro=10;
    glColor3ub(255, 69, 0);

    for (int i = 0; i <= 360; i+=1) {

        float x = 30+ro * sin(i);

        float y = 482+ro * cos(i);

        glVertex2f(x, y);
    }
glEnd();


//sohed miner
//1st
glColor3ub(0,0,0);
glRectf(10,420,13,450);
glRectf(23,420,26,450);
glRectf(10,450,26,453);
//2nd
glRectf(36,420,39,460);
glRectf(49,420,52,460);
glRectf(36,460,52,463);
//mid
glBegin(GL_TRIANGLE_FAN);
int m=18;
    glColor3ub(255, 69, 0);

    for (int i = 0; i <= 360; i+=1) {

        float x = 77+m * sin(i);

        float y = 445+m * cos(i);

        glVertex2f(x, y);
    }
glEnd();
//3nd
glColor3ub(0,0,0);
glRectf(62,420,65,470);
glRectf(75,420,78,470);
glRectf(62,470,78,473);

glRectf(75,420,78,470);
glRectf(88,420,91,470);
glRectf(75,470,91,473);
//4h
glRectf(101,420,104,460);
glRectf(114,420,117,460);
glRectf(101,460,117,463);
//5st
glColor3ub(0,0,0);
glRectf(127,420,130,450);
glRectf(140,420,143,450);
glRectf(127,450,143,453);

glRectf(5,415,148,423);




//tran_line
glColor3ub(139, 37 ,0);
int a=0,b=20;
for(int s=0;s<=30;s++)
{
 glRectf(a,0,b,50);
 a+=60;
 b+=60;
}
glRectf(0,5,1100,10);
glRectf(0,35,1100,40);



glPushMatrix();
glTranslatef(tx,ty,0);

//train_wheel
glColor3ub(0,0,0);

int w=5;

glBegin(GL_TRIANGLE_FAN);
    for (int i = 0; i <= 360; i+=1) {

        float x = 55+m * sin(i);

        float y = 25+m * cos(i);

        glVertex2f(x, y);
    }
glEnd();
glBegin(GL_TRIANGLE_FAN);
    for (int i = 0; i <= 360; i+=1) {

        float x = 100+m * sin(i);

        float y = 25+m * cos(i);

        glVertex2f(x, y);
    }
glEnd();
//lstRoom
glColor3ub(139 ,0 ,139);
glRectf(5,25,150,150);
//window
glColor3ub(190, 190, 190);
glRectf(25,65,130,130);


//2nd room wheel
glColor3ub(0,0,0);
glBegin(GL_TRIANGLE_FAN);
    for (int i = 0; i <= 360; i+=1) {

        float x = 215+m * sin(i);

        float y = 25+m * cos(i);

        glVertex2f(x, y);
    }
glEnd();
glBegin(GL_TRIANGLE_FAN);
    for (int i = 0; i <= 360; i+=1) {

        float x = 265+m * sin(i);

        float y = 25+m * cos(i);

        glVertex2f(x, y);
    }
glEnd();
//2nd room
glColor3ub(139 ,0 ,139);
glRectf(170,25,325,150);
//window
glColor3ub(190, 190, 190);
glRectf(189,65,310,130);
//1st room wheel
glColor3ub(0,0,0);
glBegin(GL_TRIANGLE_FAN);
    for (int i = 0; i <= 360; i+=1) {

        float x = 395+m * sin(i);

        float y = 25+m * cos(i);

        glVertex2f(x, y);
    }
glEnd();
glBegin(GL_TRIANGLE_FAN);
    for (int i = 0; i <= 360; i+=1) {

        float x = 445+m * sin(i);

        float y = 25+m * cos(i);

        glVertex2f(x, y);
    }
glEnd();
//1st room
glColor3ub(176, 48, 96);
glRectf(340,25,495,150);
//window
glColor3ub(190, 190, 190);
glRectf(352,65,480,130);
//fontWheel
glColor3ub(0,0,0);
glBegin(GL_TRIANGLE_FAN);
    for (int i = 0; i <= 360; i+=1) {

        float x = 520+m * sin(i);

        float y = 25+m * cos(i);

        glVertex2f(x, y);
    }
glEnd();
glBegin(GL_TRIANGLE_FAN);
    for (int i = 0; i <= 360; i+=1) {

        float x = 560+m * sin(i);

        float y = 25+m * cos(i);

        glVertex2f(x, y);
    }
glEnd();

glColor3ub(205 ,104, 57);
glRectf(495,25,580,95);

//light
glColor3ub(47, 79,79);
glRectf(580,70,589,90);

glBegin(GL_TRIANGLES);
glVertex2d(580,60);
glVertex2d(595,30);
glVertex2d(580,30);
glEnd();


glPopMatrix();
trainMove();


//hotAirBloon1
glPushMatrix();
glTranslatef(px1,py1,0);
    glColor3ub(199, 21 ,133);
    glRectf(10,540,45,545);


glColor3ub(139 ,69, 19);
      glBegin(GL_LINES);
        glVertex3d(15,520,0.0);
        glVertex3d(20,525,0.0);
  glEnd();
  glBegin(GL_LINES);
        glVertex3d(40,520,0.0);
        glVertex3d(30,530,0.0);
  glEnd();

    glBegin(GL_QUADS);
    glVertex2d(45,545);
     glVertex2d(35,525);
    glVertex2d(20,525);
    glVertex2d(10,545);
glEnd();
glRectf(15,510,40,520);
glPopMatrix();
bloonMove1();
//hotAirBloon2
glPushMatrix();
glTranslatef(px2,py2,0);
    glColor3ub(205 ,0 ,205);
    glRectf(110,535,145,540);

      glBegin(GL_LINES);
        glVertex3d(115,515,0.0);
        glVertex3d(120,520,0.0);
  glEnd();
  glBegin(GL_LINES);
        glVertex3d(140,515,0.0);
        glVertex3d(130,525,0.0);
  glEnd();

    glBegin(GL_QUADS);
    glVertex2d(145,540);
     glVertex2d(135,520);
    glVertex2d(120,520);
    glVertex2d(110,540);
glEnd();
glRectf(115,505,140,515);
glPopMatrix();
bloonMove2();
//hotAirBloon3
glPushMatrix();
glTranslatef(px3,py3,0);

    glColor3ub(255 ,165, 0);
    glRectf(1010,535,1045,540);

      glBegin(GL_LINES);
        glVertex3d(1015,515,0.0);
        glVertex3d(1020,520,0.0);
  glEnd();
  glBegin(GL_LINES);
        glVertex3d(1040,515,0.0);
        glVertex3d(1030,525,0.0);
  glEnd();

    glBegin(GL_QUADS);
    glVertex2d(1045,540);
     glVertex2d(1035,520);
    glVertex2d(1020,520);
    glVertex2d(1010,540);
glEnd();
glRectf(1015,505,1040,515);
glPopMatrix();
bloonMove3();
//hotAirBloon4
glPushMatrix();
glTranslatef(px4,py4,0);
    glColor3ub(205, 0, 0);
    glRectf(910,540,945,545);

      glBegin(GL_LINES);
        glVertex3d(915,520,0.0);
        glVertex3d(920,525,0.0);
  glEnd();
  glBegin(GL_LINES);
        glVertex3d(940,520,0.0);
        glVertex3d(930,530,0.0);
  glEnd();

    glBegin(GL_QUADS);
    glVertex2d(945,545);
     glVertex2d(935,525);
    glVertex2d(920,525);
    glVertex2d(910,545);
glEnd();
glRectf(915,510,940,520);
glPopMatrix();
bloonMove4();



//man


glColor3ub(39, 64 ,139);
glRectf(460,410,500,325);
//fild
 glColor3ub(34 ,139, 34);
glBegin(GL_TRIANGLES);
glVertex2d(470,325);
glVertex2d(480,363);
glVertex2d(490,325);
glEnd();
glColor3ub(186 ,85, 211);
glRectf(460,410,500,370);
//suta
 glBegin(GL_LINES);
        glVertex3d(480.0,405.0,0.0);
        glVertex3d(420.0,524.0,0.0);
  glEnd();
  glColor3ub(47, 79, 79);
  //ghuri

  glRectf(413,511,427,524);

//head
glColor3ub(112, 128, 144);
int ma1=15;
glBegin(GL_TRIANGLE_FAN);
    for (int i = 0; i <= 360; i+=1) {

        float x = 480+ma1 * sin(i);

        float y = 426+ma1 * cos(i);

        glVertex2f(x, y);
    }
glEnd();
glColor3ub(255 ,218 ,185);
//hand
glBegin(GL_TRIANGLES);
glVertex2d(460,410);
glVertex2d(450,390);
glVertex2d(460,390);
glEnd();

glBegin(GL_TRIANGLES);
glVertex2d(500,410);
glVertex2d(510,390);
glVertex2d(500,390);
glEnd();
//2nd man
glColor3ub(39, 64 ,139);
glRectf(660,410,700,325);
//fild
 glColor3ub(34 ,139, 34);
glBegin(GL_TRIANGLES);
glVertex2d(670,325);
glVertex2d(680,363);
glVertex2d(690,325);
glEnd();
glColor3ub(184, 134 ,11);
glRectf(660,410,700,370);
//suta
 glBegin(GL_LINES);
        glVertex3d(680.0,405.0,0.0);
        glVertex3d(622.0,524.0,0.0);
  glEnd();
  glColor3ub(47, 79, 79);
  //ghuri
  glRectf(616,511,630,524);
//head
glColor3ub(112, 128, 144);

glBegin(GL_TRIANGLE_FAN);
    for (int i = 0; i <= 360; i+=1) {

        float x = 680+15 * sin(i);

        float y = 426+15 * cos(i);

        glVertex2f(x, y);
    }
glEnd();
glColor3ub(255 ,218 ,185);
//hand
glBegin(GL_TRIANGLES);
glVertex2d(660,410);
glVertex2d(650,390);
glVertex2d(660,390);
glEnd();

glBegin(GL_TRIANGLES);
glVertex2d(700,410);
glVertex2d(710,390);
glVertex2d(700,390);
glEnd();



//tree
glColor3ub(205, 175, 149);
   glBegin(GL_QUADS);
        glVertex3d(989.0,165.0,0.0);
        glVertex3d(1070.0,165.0,0.0);
        glVertex3d(1049.0,380.0,0.0);
        glVertex3d(1008.0,380.0,0.0);
    glEnd();

glBegin(GL_TRIANGLE_FAN);

    glColor3ub(0 ,100, 0);

    for (int i = 0; i <= 360; i++) {

        float x = 1036+80 * sin(i);

        float y = 430+80 * cos(i);

        glVertex2f(x, y);
    }
glEnd();




//woman besid tree

//hand
 glColor3ub(255 ,218 ,185);
glBegin(GL_TRIANGLES);
glVertex2d(875,280);
glVertex2d(860,262);
glVertex2d(875,260);
glEnd();
glBegin(GL_TRIANGLES);
glVertex2d(888,278);
glVertex2d(900,262);
glVertex2d(890,260);
glEnd();
//bloonLine
glBegin(GL_LINES);
        glVertex3d(899.0,262.0,0.0);
        glVertex3d(900.0,340.0,0.0);

        glVertex3d(899.0,318.0,0.0);
        glVertex3d(876.0,340.0,0.0);

        glVertex3d(899.0,318.0,0.0);
        glVertex3d(928.0,340.0,0.0);
  glEnd();
  //bloon

  glColor3ub(255 ,69, 0);
   DrawCircle(900, 359, 15, 19, 500);

   glColor3ub(153, 50, 204);
   DrawCircle(880, 350, 15, 19, 500);
   glColor3ub(0 ,0, 255);
   DrawCircle(920, 350, 15, 19, 500);
//body
glColor3ub(255 ,218 ,185);
glRectf(865,243,895,215);
//cloth
glColor3ub(255, 52, 179);
glBegin(GL_TRIANGLES);
glVertex2d(880,310);
glVertex2d(860,230);
glVertex2d(900,230);
glEnd();
glBegin(GL_TRIANGLE_FAN);
//head

glColor3ub(112, 128, 144);
    for (int i = 0; i <= 360; i++) {

        float x = 880+15 * sin(i);

        float y = 300+15 * cos(i);

        glVertex2f(x, y);
    }
glEnd();


glColor3ub(34 ,139, 34);
glRectf(872,231,888,200);


//man beside tree
glColor3ub(39, 64 ,139);
glRectf(800,290,840,205);
//fild
 glColor3ub(34 ,139, 34);
glBegin(GL_TRIANGLES);
glVertex2d(810,205);
glVertex2d(820,243);
glVertex2d(830,205);
glEnd();
glColor3ub(205, 92 ,92);
glRectf(800,290,840,250);

//head
glColor3ub(112, 128, 144);

glBegin(GL_TRIANGLE_FAN);
    for (int i = 0; i <= 360; i+=1) {

        float x = 820+15 * sin(i);

        float y = 306+15 * cos(i);

        glVertex2f(x, y);
    }
glEnd();
glColor3ub(255 ,218 ,185);
//hand
glBegin(GL_TRIANGLES);
glVertex2d(800,290);
glVertex2d(790,270);
glVertex2d(800,270);
glEnd();

glBegin(GL_TRIANGLES);
glVertex2d(840,290);
glVertex2d(850,270);
glVertex2d(840,270);
glEnd();
//dolna
glColor3ub(139 ,35, 35);
glRectf(200,180,210,390);
glRectf(350,180,360,390);
glRectf(200,382,360,388);
glRectf(220,382,222,230);
glRectf(340,388,222,230);
glColor3ub(34 ,139, 34);
glRectf(225,382,335,250);


//woman dolnay

//hand
 glColor3ub(255 ,218 ,185);
glBegin(GL_TRIANGLES);
glVertex2d(275,280);
glVertex2d(260,262);
glVertex2d(275,260);
glEnd();
glBegin(GL_TRIANGLES);
glVertex2d(288,278);
glVertex2d(300,262);
glVertex2d(290,260);
glEnd();


//cloth
glColor3ub(255, 0, 255);
glBegin(GL_TRIANGLES);
glVertex2d(280,310);
glVertex2d(260,240);
glVertex2d(300,240);
glEnd();
glBegin(GL_TRIANGLE_FAN);
//head

glColor3ub(112, 128, 144);
    for (int i = 0; i <= 360; i++) {

        float x = 280+15 * sin(i);

        float y = 300+15 * cos(i);

        glVertex2f(x, y);
    }
glEnd();



//branch people


//woman besid tree

//hand
 glColor3ub(255 ,218 ,185);
glBegin(GL_TRIANGLES);
glVertex2d(575,280);
glVertex2d(560,262);
glVertex2d(575,260);
glEnd();
glBegin(GL_TRIANGLES);
glVertex2d(588,278);
glVertex2d(600,262);
glVertex2d(590,260);
glEnd();

//body
glColor3ub(255 ,218 ,185);
glRectf(565,243,595,215);
//cloth
glColor3ub(139, 28, 98);
glBegin(GL_TRIANGLES);
glVertex2d(580,310);
glVertex2d(560,230);
glVertex2d(600,230);
glEnd();
glBegin(GL_TRIANGLE_FAN);
//head

glColor3ub(112, 128, 144);
    for (int i = 0; i <= 360; i++) {

        float x = 580+15 * sin(i);

        float y = 300+15 * cos(i);

        glVertex2f(x, y);
    }
glEnd();


glColor3ub(34 ,139, 34);
glRectf(572,231,588,200);


//man beside tree
glColor3ub(39, 64 ,139);
glRectf(500,290,540,205);
//fild
 glColor3ub(34 ,139, 34);
glBegin(GL_TRIANGLES);
glVertex2d(510,205);
glVertex2d(520,243);
glVertex2d(530,205);
glEnd();
glColor3ub(155 ,48, 255);
glRectf(500,290,540,250);

//head
glColor3ub(112, 128, 144);

glBegin(GL_TRIANGLE_FAN);
    for (int i = 0; i <= 360; i+=1) {

        float x = 520+15 * sin(i);

        float y = 306+15 * cos(i);

        glVertex2f(x, y);
    }
glEnd();
glColor3ub(255 ,218 ,185);
//hand
glBegin(GL_TRIANGLES);
glVertex2d(500,290);
glVertex2d(490,270);
glVertex2d(500,270);
glEnd();

glBegin(GL_TRIANGLES);
glVertex2d(540,290);
glVertex2d(550,270);
glVertex2d(540,270);
glEnd();

//branch
glColor3ub(139 ,69 ,0);
glBegin(GL_QUADS);
glVertex2d(475,225);
glVertex2d(470,250);
glVertex2d(630,250);
glVertex2d(625,225);
glEnd();
glRectf(470,260,630,270);


//glRectf(480,260,620,270)
glRectf(480,260,490,180);
glRectf(610,260,620,180);

    glFlush();
    for(int i=0;i<100000;i++)
    {

    }
}

void day() {

    glClear(GL_COLOR_BUFFER_BIT);

       //sky
    glColor3ub(220, 220, 220);
    glRectf(0,410,1100,550);
    //hill
glBegin(GL_TRIANGLES);
glColor3ub(34 ,139, 34);
glVertex2d(780,472);
glVertex2d(830,472);
glVertex2d(800,510);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(34 ,139, 34);
glVertex2d(810,472);
glVertex2d(890,472);
glVertex2d(860,518);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(34 ,139, 34);
glVertex2d(880,472);
glVertex2d(940,472);
glVertex2d(920,515);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(34 ,139, 34);
glVertex2d(920,472);
glVertex2d(990,472);
glVertex2d(950,509);
glEnd();


    //fild
 glColor3ub(34 ,139, 34);
glRectf(0,0,1100,420),


//sun
glBegin(GL_TRIANGLE_FAN);
int r=30;
    glColor3ub(255, 69, 0);

    for (int i = 0; i <= 360; i+=1) {

        float x = 530+r * sin(i);

        float y = 480+r * cos(i);

        glVertex2f(x, y);
    }
glEnd();



//river

glColor3ub(0 ,245 ,255);
glRectf(0,473,1100,430);

glPushMatrix();
glTranslatef(bx1,by1,0);
//boat1
glColor3ub(205, 102 ,29);
glBegin(GL_QUADS);
glVertex2d(0,485);
glVertex2d(80,485);
glVertex2d(70,472);
glVertex2d(10,472);
glEnd();
glRectf(20,485,65,496);
glPopMatrix();
boatMove();


//boat2
glPushMatrix();
glTranslatef(bx2,by2,0);
glColor3ub(139 ,0 ,0);
glBegin(GL_QUADS);
glVertex2d(220,485);
glVertex2d(300,485);
glVertex2d(290,472);
glVertex2d(230,472);
glEnd();
glRectf(240,485,285,496);


glPopMatrix();
boatMove2();




//boat3
glPushMatrix();
glTranslatef(bx3,by3,0);

glColor3ub(139, 34 ,82);

glBegin(GL_QUADS);
glVertex2d(800,455);
glVertex2d(880,455);
glVertex2d(870,445);
glVertex2d(810,445);
glEnd();
glRectf(820,455,865,469);
glPopMatrix();
boatMove3();
//boat4
glPushMatrix();
glTranslatef(bx4,by4,0);
glColor3ub(139, 0 ,139);
glBegin(GL_QUADS);
glVertex2d(600,455);
glVertex2d(680,455);
glVertex2d(670,445);
glVertex2d(610,445);
glEnd();
glRectf(620,455,665,469);
glPopMatrix();
boatMove4();
//boat5
glPushMatrix();
glTranslatef(bx5,by5,0);
glColor3ub(176, 48, 96);
glBegin(GL_QUADS);
glVertex2d(400,455);
glVertex2d(480,455);
glVertex2d(470,445);
glVertex2d(410,445);
glEnd();
glRectf(420,455,465,469);
glPopMatrix();
boatMove5();

//sea_b
glColor3ub(205 ,140 ,149);
glRectf(0,420,1100,430);

//flag
glColor3ub(139, 37 ,0);
glRectf(2,420,6,500);


glColor3ub(46 ,139 ,87);
glRectf(6,500,55,464);


//flag round
glBegin(GL_TRIANGLE_FAN);
int ro=10;
    glColor3ub(255, 69, 0);

    for (int i = 0; i <= 360; i+=1) {

        float x = 30+ro * sin(i);

        float y = 482+ro * cos(i);

        glVertex2f(x, y);
    }
glEnd();


//sohed miner
//1st
glColor3ub(0,0,0);
glRectf(10,420,13,450);
glRectf(23,420,26,450);
glRectf(10,450,26,453);
//2nd
glRectf(36,420,39,460);
glRectf(49,420,52,460);
glRectf(36,460,52,463);
//mid
glBegin(GL_TRIANGLE_FAN);
int m=18;
    glColor3ub(255, 69, 0);

    for (int i = 0; i <= 360; i+=1) {

        float x = 77+m * sin(i);

        float y = 445+m * cos(i);

        glVertex2f(x, y);
    }
glEnd();
//3nd
glColor3ub(0,0,0);
glRectf(62,420,65,470);
glRectf(75,420,78,470);
glRectf(62,470,78,473);

glRectf(75,420,78,470);
glRectf(88,420,91,470);
glRectf(75,470,91,473);
//4h
glRectf(101,420,104,460);
glRectf(114,420,117,460);
glRectf(101,460,117,463);
//5st
glColor3ub(0,0,0);
glRectf(127,420,130,450);
glRectf(140,420,143,450);
glRectf(127,450,143,453);

glRectf(5,415,148,423);


//hand up man1

glRectf(110,410,150,325);
//fild
 glColor3ub(34 ,139, 34);
glBegin(GL_TRIANGLES);
glVertex2d(120,325);
glVertex2d(130,363);
glVertex2d(140,325);
glEnd();
glColor3ub(139, 139, 0);
glRectf(110,410,150,370);
//hand
glColor3ub(255 ,218 ,185);
glRectf(110,409,105,370);
glRectf(150,409,165,400);
glBegin(GL_QUADS);
glVertex2d(165,405);
glVertex2d(165,409);
glVertex2d(140,430);
glVertex2d(140,420);

glEnd();
//head
glColor3ub(112, 128, 144);

glBegin(GL_TRIANGLE_FAN);
    for (int i = 0; i <= 360; i+=1) {

        float x = 130+15 * sin(i);

        float y = 426+15 * cos(i);

        glVertex2f(x, y);
    }
glEnd();
glColor3ub(255 ,218 ,185);



//hand up man3
glColor3ub(39, 64 ,139);
glRectf(20,410,60,325);
//fild
 glColor3ub(34 ,139, 34);
glBegin(GL_TRIANGLES);
glVertex2d(30,325);
glVertex2d(40,363);
glVertex2d(50,325);
glEnd();
glColor3ub(139, 119 ,101);
glRectf(20,410,60,370);

//hand

glColor3ub(255 ,218 ,185);
glRectf(20,409,15,370);
glRectf(60,409,75,400);
glBegin(GL_QUADS);
glVertex2d(75,405);
glVertex2d(75,409);
glVertex2d(50,430);
glVertex2d(50,420);

glEnd();

//head
glColor3ub(112, 128, 144);

glBegin(GL_TRIANGLE_FAN);
    for (int i = 0; i <= 360; i+=1) {

        float x = 40+15 * sin(i);

        float y = 426+15 * cos(i);

        glVertex2f(x, y);
    }
glEnd();
glColor3ub(255 ,218 ,185);


//tran_line
glColor3ub(139, 37 ,0);
int a=0,b=20;
for(int s=0;s<=30;s++)
{
 glRectf(a,0,b,50);
 a+=60;
 b+=60;
}
glRectf(0,5,1100,10);
glRectf(0,35,1100,40);



glPushMatrix();
glTranslatef(tx,ty,0);

//train_wheel
glColor3ub(0,0,0);

int w=5;

glBegin(GL_TRIANGLE_FAN);
    for (int i = 0; i <= 360; i+=1) {

        float x = 55+m * sin(i);

        float y = 25+m * cos(i);

        glVertex2f(x, y);
    }
glEnd();
glBegin(GL_TRIANGLE_FAN);
    for (int i = 0; i <= 360; i+=1) {

        float x = 100+m * sin(i);

        float y = 25+m * cos(i);

        glVertex2f(x, y);
    }
glEnd();
//lstRoom
glColor3ub(139 ,0 ,139);
glRectf(5,25,150,150);
//window
glColor3ub(190, 190, 190);
glRectf(25,65,130,130);


//2nd room wheel
glColor3ub(0,0,0);
glBegin(GL_TRIANGLE_FAN);
    for (int i = 0; i <= 360; i+=1) {

        float x = 215+m * sin(i);

        float y = 25+m * cos(i);

        glVertex2f(x, y);
    }
glEnd();
glBegin(GL_TRIANGLE_FAN);
    for (int i = 0; i <= 360; i+=1) {

        float x = 265+m * sin(i);

        float y = 25+m * cos(i);

        glVertex2f(x, y);
    }
glEnd();
//2nd room
glColor3ub(139 ,0 ,139);
glRectf(170,25,325,150);
//window
glColor3ub(190, 190, 190);
glRectf(189,65,310,130);
//1st room wheel
glColor3ub(0,0,0);
glBegin(GL_TRIANGLE_FAN);
    for (int i = 0; i <= 360; i+=1) {

        float x = 395+m * sin(i);

        float y = 25+m * cos(i);

        glVertex2f(x, y);
    }
glEnd();
glBegin(GL_TRIANGLE_FAN);
    for (int i = 0; i <= 360; i+=1) {

        float x = 445+m * sin(i);

        float y = 25+m * cos(i);

        glVertex2f(x, y);
    }
glEnd();
//1st room
glColor3ub(176, 48, 96);
glRectf(340,25,495,150);
//window
glColor3ub(190, 190, 190);
glRectf(352,65,480,130);
//fontWheel
glColor3ub(0,0,0);
glBegin(GL_TRIANGLE_FAN);
    for (int i = 0; i <= 360; i+=1) {

        float x = 520+m * sin(i);

        float y = 25+m * cos(i);

        glVertex2f(x, y);
    }
glEnd();
glBegin(GL_TRIANGLE_FAN);
    for (int i = 0; i <= 360; i+=1) {

        float x = 560+m * sin(i);

        float y = 25+m * cos(i);

        glVertex2f(x, y);
    }
glEnd();

glColor3ub(205 ,104, 57);
glRectf(495,25,580,95);

//light
glColor3ub(47, 79,79);
glRectf(580,70,589,90);

glBegin(GL_TRIANGLES);
glVertex2d(580,60);
glVertex2d(595,30);
glVertex2d(580,30);
glEnd();


glPopMatrix();
trainMove();


//hotAirBloon1
glPushMatrix();
glTranslatef(px1,py1,0);
    glColor3ub(199, 21 ,133);
    glRectf(10,540,45,545);


glColor3ub(139 ,69, 19);
      glBegin(GL_LINES);
        glVertex3d(15,520,0.0);
        glVertex3d(20,525,0.0);
  glEnd();
  glBegin(GL_LINES);
        glVertex3d(40,520,0.0);
        glVertex3d(30,530,0.0);
  glEnd();

    glBegin(GL_QUADS);
    glVertex2d(45,545);
     glVertex2d(35,525);
    glVertex2d(20,525);
    glVertex2d(10,545);
glEnd();
glRectf(15,510,40,520);
glPopMatrix();
bloonMove1();
//hotAirBloon2
glPushMatrix();
glTranslatef(px2,py2,0);
    glColor3ub(205 ,0 ,205);
    glRectf(110,535,145,540);

      glBegin(GL_LINES);
        glVertex3d(115,515,0.0);
        glVertex3d(120,520,0.0);
  glEnd();
  glBegin(GL_LINES);
        glVertex3d(140,515,0.0);
        glVertex3d(130,525,0.0);
  glEnd();

    glBegin(GL_QUADS);
    glVertex2d(145,540);
     glVertex2d(135,520);
    glVertex2d(120,520);
    glVertex2d(110,540);
glEnd();
glRectf(115,505,140,515);
glPopMatrix();
bloonMove2();
//hotAirBloon3
glPushMatrix();
glTranslatef(px3,py3,0);

    glColor3ub(255 ,165, 0);
    glRectf(1010,535,1045,540);

      glBegin(GL_LINES);
        glVertex3d(1015,515,0.0);
        glVertex3d(1020,520,0.0);
  glEnd();
  glBegin(GL_LINES);
        glVertex3d(1040,515,0.0);
        glVertex3d(1030,525,0.0);
  glEnd();

    glBegin(GL_QUADS);
    glVertex2d(1045,540);
     glVertex2d(1035,520);
    glVertex2d(1020,520);
    glVertex2d(1010,540);
glEnd();
glRectf(1015,505,1040,515);
glPopMatrix();
bloonMove3();
//hotAirBloon4
glPushMatrix();
glTranslatef(px4,py4,0);
    glColor3ub(205, 0, 0);
    glRectf(910,540,945,545);

      glBegin(GL_LINES);
        glVertex3d(915,520,0.0);
        glVertex3d(920,525,0.0);
  glEnd();
  glBegin(GL_LINES);
        glVertex3d(940,520,0.0);
        glVertex3d(930,530,0.0);
  glEnd();

    glBegin(GL_QUADS);
    glVertex2d(945,545);
     glVertex2d(935,525);
    glVertex2d(920,525);
    glVertex2d(910,545);
glEnd();
glRectf(915,510,940,520);
glPopMatrix();
bloonMove4();



//man


glColor3ub(39, 64 ,139);
glRectf(460,410,500,325);
//fild
 glColor3ub(34 ,139, 34);
glBegin(GL_TRIANGLES);
glVertex2d(470,325);
glVertex2d(480,363);
glVertex2d(490,325);
glEnd();
glColor3ub(186 ,85, 211);
glRectf(460,410,500,370);
//suta
 glBegin(GL_LINES);
        glVertex3d(480.0,405.0,0.0);
        glVertex3d(420.0,524.0,0.0);
  glEnd();
  glColor3ub(47, 79, 79);
  //ghuri

  glRectf(413,511,427,524);

//head
glColor3ub(112, 128, 144);
int ma1=15;
glBegin(GL_TRIANGLE_FAN);
    for (int i = 0; i <= 360; i+=1) {

        float x = 480+ma1 * sin(i);

        float y = 426+ma1 * cos(i);

        glVertex2f(x, y);
    }
glEnd();
glColor3ub(255 ,218 ,185);
//hand
glBegin(GL_TRIANGLES);
glVertex2d(460,410);
glVertex2d(450,390);
glVertex2d(460,390);
glEnd();

glBegin(GL_TRIANGLES);
glVertex2d(500,410);
glVertex2d(510,390);
glVertex2d(500,390);
glEnd();
//2nd man
glColor3ub(39, 64 ,139);
glRectf(660,410,700,325);
//fild
 glColor3ub(34 ,139, 34);
glBegin(GL_TRIANGLES);
glVertex2d(670,325);
glVertex2d(680,363);
glVertex2d(690,325);
glEnd();
glColor3ub(184, 134 ,11);
glRectf(660,410,700,370);
//suta
 glBegin(GL_LINES);
        glVertex3d(680.0,405.0,0.0);
        glVertex3d(622.0,524.0,0.0);
  glEnd();
  glColor3ub(47, 79, 79);
  //ghuri
  glRectf(616,511,630,524);
//head
glColor3ub(112, 128, 144);

glBegin(GL_TRIANGLE_FAN);
    for (int i = 0; i <= 360; i+=1) {

        float x = 680+15 * sin(i);

        float y = 426+15 * cos(i);

        glVertex2f(x, y);
    }
glEnd();
glColor3ub(255 ,218 ,185);
//hand
glBegin(GL_TRIANGLES);
glVertex2d(660,410);
glVertex2d(650,390);
glVertex2d(660,390);
glEnd();

glBegin(GL_TRIANGLES);
glVertex2d(700,410);
glVertex2d(710,390);
glVertex2d(700,390);
glEnd();



//tree
glColor3ub(205, 175, 149);
   glBegin(GL_QUADS);
        glVertex3d(989.0,165.0,0.0);
        glVertex3d(1070.0,165.0,0.0);
        glVertex3d(1049.0,380.0,0.0);
        glVertex3d(1008.0,380.0,0.0);
    glEnd();

glBegin(GL_TRIANGLE_FAN);

    glColor3ub(0 ,100, 0);

    for (int i = 0; i <= 360; i++) {

        float x = 1036+80 * sin(i);

        float y = 430+80 * cos(i);

        glVertex2f(x, y);
    }
glEnd();




//woman besid tree

//hand
 glColor3ub(255 ,218 ,185);
glBegin(GL_TRIANGLES);
glVertex2d(875,280);
glVertex2d(860,262);
glVertex2d(875,260);
glEnd();
glBegin(GL_TRIANGLES);
glVertex2d(888,278);
glVertex2d(900,262);
glVertex2d(890,260);
glEnd();
//bloonLine
glBegin(GL_LINES);
        glVertex3d(899.0,262.0,0.0);
        glVertex3d(900.0,340.0,0.0);

        glVertex3d(899.0,318.0,0.0);
        glVertex3d(876.0,340.0,0.0);

        glVertex3d(899.0,318.0,0.0);
        glVertex3d(928.0,340.0,0.0);
  glEnd();
  //bloon

  glColor3ub(255 ,69, 0);
   DrawCircle(900, 359, 15, 19, 500);

   glColor3ub(153, 50, 204);
   DrawCircle(880, 350, 15, 19, 500);
   glColor3ub(0 ,0, 255);
   DrawCircle(920, 350, 15, 19, 500);
//body
glColor3ub(255 ,218 ,185);
glRectf(865,243,895,215);
//cloth
glColor3ub(255, 52, 179);
glBegin(GL_TRIANGLES);
glVertex2d(880,310);
glVertex2d(860,230);
glVertex2d(900,230);
glEnd();
glBegin(GL_TRIANGLE_FAN);
//head

glColor3ub(112, 128, 144);
    for (int i = 0; i <= 360; i++) {

        float x = 880+15 * sin(i);

        float y = 300+15 * cos(i);

        glVertex2f(x, y);
    }
glEnd();


glColor3ub(34 ,139, 34);
glRectf(872,231,888,200);


//man beside tree
glColor3ub(39, 64 ,139);
glRectf(800,290,840,205);
//fild
 glColor3ub(34 ,139, 34);
glBegin(GL_TRIANGLES);
glVertex2d(810,205);
glVertex2d(820,243);
glVertex2d(830,205);
glEnd();
glColor3ub(205, 92 ,92);
glRectf(800,290,840,250);

//head
glColor3ub(112, 128, 144);

glBegin(GL_TRIANGLE_FAN);
    for (int i = 0; i <= 360; i+=1) {

        float x = 820+15 * sin(i);

        float y = 306+15 * cos(i);

        glVertex2f(x, y);
    }
glEnd();
glColor3ub(255 ,218 ,185);
//hand
glBegin(GL_TRIANGLES);
glVertex2d(800,290);
glVertex2d(790,270);
glVertex2d(800,270);
glEnd();

glBegin(GL_TRIANGLES);
glVertex2d(840,290);
glVertex2d(850,270);
glVertex2d(840,270);
glEnd();
//dolna
glColor3ub(139 ,35, 35);
glRectf(200,180,210,390);
glRectf(350,180,360,390);
glRectf(200,382,360,388);
glRectf(220,382,222,230);
glRectf(340,388,222,230);
glColor3ub(34 ,139, 34);
glRectf(225,382,335,250);


//woman dolnay

//hand
 glColor3ub(255 ,218 ,185);
glBegin(GL_TRIANGLES);
glVertex2d(275,280);
glVertex2d(260,262);
glVertex2d(275,260);
glEnd();
glBegin(GL_TRIANGLES);
glVertex2d(288,278);
glVertex2d(300,262);
glVertex2d(290,260);
glEnd();


//cloth
glColor3ub(255, 0, 255);
glBegin(GL_TRIANGLES);
glVertex2d(280,310);
glVertex2d(260,240);
glVertex2d(300,240);
glEnd();
glBegin(GL_TRIANGLE_FAN);
//head

glColor3ub(112, 128, 144);
    for (int i = 0; i <= 360; i++) {

        float x = 280+15 * sin(i);

        float y = 300+15 * cos(i);

        glVertex2f(x, y);
    }
glEnd();



//branch people


//woman besid tree

//hand
 glColor3ub(255 ,218 ,185);
glBegin(GL_TRIANGLES);
glVertex2d(575,280);
glVertex2d(560,262);
glVertex2d(575,260);
glEnd();
glBegin(GL_TRIANGLES);
glVertex2d(588,278);
glVertex2d(600,262);
glVertex2d(590,260);
glEnd();

//body
glColor3ub(255 ,218 ,185);
glRectf(565,243,595,215);
//cloth
glColor3ub(139, 28, 98);
glBegin(GL_TRIANGLES);
glVertex2d(580,310);
glVertex2d(560,230);
glVertex2d(600,230);
glEnd();
glBegin(GL_TRIANGLE_FAN);
//head

glColor3ub(112, 128, 144);
    for (int i = 0; i <= 360; i++) {

        float x = 580+15 * sin(i);

        float y = 300+15 * cos(i);

        glVertex2f(x, y);
    }
glEnd();


glColor3ub(34 ,139, 34);
glRectf(572,231,588,200);


//man beside tree
glColor3ub(39, 64 ,139);
glRectf(500,290,540,205);
//fild
 glColor3ub(34 ,139, 34);
glBegin(GL_TRIANGLES);
glVertex2d(510,205);
glVertex2d(520,243);
glVertex2d(530,205);
glEnd();
glColor3ub(155 ,48, 255);
glRectf(500,290,540,250);

//head
glColor3ub(112, 128, 144);

glBegin(GL_TRIANGLE_FAN);
    for (int i = 0; i <= 360; i+=1) {

        float x = 520+15 * sin(i);

        float y = 306+15 * cos(i);

        glVertex2f(x, y);
    }
glEnd();
glColor3ub(255 ,218 ,185);
//hand
glBegin(GL_TRIANGLES);
glVertex2d(500,290);
glVertex2d(490,270);
glVertex2d(500,270);
glEnd();

glBegin(GL_TRIANGLES);
glVertex2d(540,290);
glVertex2d(550,270);
glVertex2d(540,270);
glEnd();

//branch
glColor3ub(139 ,69 ,0);
glBegin(GL_QUADS);
glVertex2d(475,225);
glVertex2d(470,250);
glVertex2d(630,250);
glVertex2d(625,225);
glEnd();
glRectf(470,260,630,270);


//glRectf(480,260,620,270)
glRectf(480,260,490,180);
glRectf(610,260,620,180);

    glFlush();

}
void run(){

   for(int i=0;i<1000;i++)
    {
day();
day();
day();
day();
delay();
delay();


    }

    for(int i=0;i<1000;i++)
    {

night();
night();
night();
night();
delay();
delay();
    }
for(int i=0;i<1000;i++)
    {

nightRain();
nightRain();
nightRain();
nightRain();
delay();
delay();
    }



}
int main(int argc, char** argv) {
       glutInit(&argc, argv);
    glutInitWindowSize(1100,550);
    glutInitWindowPosition(0,0);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);

    glutCreateWindow("Project");
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glOrtho(0, 1100, 0,550, -2000, 2000);

    glutDisplayFunc(run);
    //glutDisplayFunc(nightRain);

    glutMainLoop();



    return 0;
}


