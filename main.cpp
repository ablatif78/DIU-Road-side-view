#include<windows.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <stdio.h>

float p=0.0;

void display(void)
{
    /* clear all pixels */
    glClear (GL_COLOR_BUFFER_BIT);

    if(p<=200)
       p=p+.005;

      else
        p=0.0;

    glutPostRedisplay();



    glLineWidth(1.5);

    glColor3f (1.0, 1.0, 1.0);

    glBegin(GL_QUADS); //Road Design

    // background motka cha house sky 2
    glColor3f (0.128, 0.565, 1.0);
    glVertex3f(0.0f, 100.0f, 0.0f);
    glVertex3f(0.0f, 50.0f, 0.0f);
    glVertex3f(200.0f, 50.0f, 0.0f);
    glVertex3f(200.0f, 100.0f, 0.0f);

    //Road background
    glColor3f (0.0, 0.0, 0.0);
    glVertex3f(0.0f, 15.0f, 0.0f);
    glVertex3f(0.0f, 0.0f, 0.0f);
    glVertex3f(200.0f, 0.0f, 0.0f);
    glVertex3f(200.0f, 15.0f, 0.0f);

    //Road line
    glColor3f (1.0, 1.0, 1.0);
    glVertex3f(0.0f, 8.0f, 0.0f);
    glVertex3f(0.0f, 7.0f, 0.0f);
    glVertex3f(200.0f, 7.0f, 0.0f);
    glVertex3f(200.0f, 8.0f, 0.0f);

    //Library Design
    glColor4f(1.0f, 0.5f, 0.0f, 0.0f);
    glVertex3f(2.0f, 35.0f, 0.0f);
    glVertex3f(2.0f, 32.0f, 0.0f);
    glVertex3f(33.0f, 32.0f, 0.0f);
    glVertex3f(33.0f, 35.0f, 0.0f);

    glColor3f (0.38f, 0.19f, 0.0f);
    glVertex3f(5.0f, 32.0f, 0.0f);
    glVertex3f(5.0f, 15.0f, 0.0f);
    glVertex3f(6.0f, 15.0f, 0.0f);
    glVertex3f(6.0f, 32.0f, 0.0f);

    glColor3f (0.38f, 0.19f, 0.0f);
    glVertex3f(5.0f, 16.0f, 0.0f);
    glVertex3f(5.0f, 15.0f, 0.0f);
    glVertex3f(30.0f, 15.0f, 0.0f);
    glVertex3f(30.0f, 16.0f, 0.0f);

    glVertex3f(29.0f, 32.0f, 0.0f);
    glVertex3f(29.0f, 15.0f, 0.0f);
    glVertex3f(30.0f, 15.0f, 0.0f);
    glVertex3f(30.0f, 32.0f, 0.0f);

    //book self 1
    glVertex3f(7.0f, 29.0f, 0.0f);
    glVertex3f(7.0f, 28.0f, 0.0f);
    glVertex3f(9.0f, 28.0f, 0.0f);
    glVertex3f(9.0f, 29.0f, 0.0f);

    glVertex3f(7.0f, 27.0f, 0.0f);
    glVertex3f(7.0f, 26.0f, 0.0f);
    glVertex3f(9.0f, 26.0f, 0.0f);
    glVertex3f(9.0f, 27.0f, 0.0f);

    glVertex3f(7.0f, 25.0f, 0.0f);
    glVertex3f(7.0f, 24.0f, 0.0f);
    glVertex3f(9.0f, 24.0f, 0.0f);
    glVertex3f(9.0f, 25.0f, 0.0f);

    //book self 2
    glVertex3f(10.0f, 29.0f, 0.0f);
    glVertex3f(10.0f, 28.0f, 0.0f);
    glVertex3f(12.0f, 28.0f, 0.0f);
    glVertex3f(12.0f, 29.0f, 0.0f);

    glVertex3f(10.0f, 27.0f, 0.0f);
    glVertex3f(10.0f, 26.0f, 0.0f);
    glVertex3f(12.0f, 26.0f, 0.0f);
    glVertex3f(12.0f, 27.0f, 0.0f);

    glVertex3f(10.0f, 25.0f, 0.0f);
    glVertex3f(10.0f, 24.0f, 0.0f);
    glVertex3f(12.0f, 24.0f, 0.0f);
    glVertex3f(12.0f, 25.0f, 0.0f);

    //book self 3
    glVertex3f(13.0f, 29.0f, 0.0f);
    glVertex3f(13.0f, 28.0f, 0.0f);
    glVertex3f(15.0f, 28.0f, 0.0f);
    glVertex3f(15.0f, 29.0f, 0.0f);

    glVertex3f(13.0f, 27.0f, 0.0f);
    glVertex3f(13.0f, 26.0f, 0.0f);
    glVertex3f(15.0f, 26.0f, 0.0f);
    glVertex3f(15.0f, 27.0f, 0.0f);

    glVertex3f(13.0f, 25.0f, 0.0f);
    glVertex3f(13.0f, 24.0f, 0.0f);
    glVertex3f(15.0f, 24.0f, 0.0f);
    glVertex3f(15.0f, 25.0f, 0.0f);

    //book self right 1
    glVertex3f(24.0f, 29.0f, 0.0f);
    glVertex3f(24.0f, 28.0f, 0.0f);
    glVertex3f(25.0f, 28.0f, 0.0f);
    glVertex3f(25.0f, 29.0f, 0.0f);

    glVertex3f(24.0f, 27.0f, 0.0f);
    glVertex3f(24.0f, 26.0f, 0.0f);
    glVertex3f(25.0f, 26.0f, 0.0f);
    glVertex3f(25.0f, 27.0f, 0.0f);

    glVertex3f(24.0f, 25.0f, 0.0f);
    glVertex3f(24.0f, 24.0f, 0.0f);
    glVertex3f(25.0f, 24.0f, 0.0f);
    glVertex3f(25.0f, 25.0f, 0.0f);

    glVertex3f(24.0f, 23.0f, 0.0f);
    glVertex3f(24.0f, 22.0f, 0.0f);
    glVertex3f(25.0f, 22.0f, 0.0f);
    glVertex3f(25.0f, 23.0f, 0.0f);

    //book self right 2
    glVertex3f(26.0f, 29.0f, 0.0f);
    glVertex3f(26.0f, 28.0f, 0.0f);
    glVertex3f(27.0f, 28.0f, 0.0f);
    glVertex3f(27.0f, 29.0f, 0.0f);

    glVertex3f(26.0f, 27.0f, 0.0f);
    glVertex3f(26.0f, 26.0f, 0.0f);
    glVertex3f(27.0f, 26.0f, 0.0f);
    glVertex3f(27.0f, 27.0f, 0.0f);

    glVertex3f(26.0f, 25.0f, 0.0f);
    glVertex3f(26.0f, 24.0f, 0.0f);
    glVertex3f(27.0f, 24.0f, 0.0f);
    glVertex3f(27.0f, 25.0f, 0.0f);

    glVertex3f(26.0f, 23.0f, 0.0f);
    glVertex3f(26.0f, 22.0f, 0.0f);
    glVertex3f(27.0f, 22.0f, 0.0f);
    glVertex3f(27.0f, 23.0f, 0.0f);

    //front table
    glColor3f(0.0, 1.0, 0.0);
    glVertex3f(6.0f, 21.0f, 0.0f);
    glVertex3f(6.0f, 16.0f, 0.0f);
    glVertex3f(21.0f, 16.0f, 0.0f);
    glVertex3f(21.0f, 21.0f, 0.0f);

    //food gari
    glColor3f(0.0, 0.0, 1.0);
    glVertex3f(39.0f, 28.0f, 0.0f);
    glVertex3f(41.0f, 25.0f, 0.0f);
    glVertex3f(52.0f, 25.0f, 0.0f);
    glVertex3f(50.0f, 28.0f, 0.0f);

    //food gari left side
    glColor3f(1.0, 0.0, 1.0);
    glVertex3f(38.0f, 25.0f, 0.0f);
    glVertex3f(38.0f, 20.0f, 0.0f);
    glVertex3f(41.0f, 19.0f, 0.0f);
    glVertex3f(41.0f, 25.0f, 0.0f);

    //food gari left middle
    glColor3f(1.0, 1.0, 0.0);
    glVertex3f(41.0f, 25.0f, 0.0f);
    glVertex3f(41.0f, 19.0f, 0.0f);
    glVertex3f(52.0f, 19.0f, 0.0f);
    glVertex3f(52.0f, 25.0f, 0.0f);

    //gari down part
    glColor3f(1.0, 0.0, 0.0);
    glVertex3f(41.0f, 19.0f, 0.0f);
    glVertex3f(39.0f, 17.0f, 0.0f);
    glVertex3f(51.0f, 17.0f, 0.0f);
    glVertex3f(51.0f, 19.0f, 0.0f);


    glEnd();//End Road and library


    //food gari
    glBegin(GL_TRIANGLES);

    //gari chal
    glColor3f(0.0, 1.0, 0.0);
    glVertex3f(39.0f, 28.0f, 0.0f);
    glVertex3f(37.0f, 25.0f, 0.0f);
    glVertex3f(41.0f, 25.0f, 0.0f);

    //gari chal design khas kata
    glColor3f(1.0, 0.0, 0.0);
    glVertex3f(41.0f, 25.0f, 0.0f);
    glVertex3f(42.0f, 24.0f, 0.0f);
    glVertex3f(43.0f, 25.0f, 0.0f);

    glVertex3f(43.0f, 25.0f, 0.0f);
    glVertex3f(44.0f, 24.0f, 0.0f);
    glVertex3f(45.0f, 25.0f, 0.0f);

    glVertex3f(45.0f, 25.0f, 0.0f);
    glVertex3f(46.0f, 24.0f, 0.0f);
    glVertex3f(47.0f, 25.0f, 0.0f);

    glVertex3f(47.0f, 25.0f, 0.0f);
    glVertex3f(48.0f, 24.0f, 0.0f);
    glVertex3f(49.0f, 25.0f, 0.0f);

    glVertex3f(49.0f, 25.0f, 0.0f);
    glVertex3f(50.0f, 24.0f, 0.0f);
    glVertex3f(51.0f, 25.0f, 0.0f);

    glVertex3f(51.0f, 25.0f, 0.0f);
    glVertex3f(52.0f, 24.0f, 0.0f);
    glVertex3f(52.0f, 25.0f, 0.0f);

    //gari down part
    glColor3f(1.0, 0.0, 0.0);
    glVertex3f(39.0f, 20.0f, 0.0f);
    glVertex3f(39.0f, 17.0f, 0.0f);
    glVertex3f(41.0f, 19.0f, 0.0f);



    glEnd();


    //small food shop .............Start

     glBegin(GL_QUADS);

     glColor3f (0.698, 0.133, 0.133);
     glVertex3f(75.0f, 15.0f, 0.0f);
     glVertex3f(88.0f, 15.0f, 0.0f);
     glVertex3f(88.0f, 20.0f, 0.0f);
     glVertex3f(75.0f, 20.0f, 0.0f);

     //upper small part 1
     glVertex3f(77.0f, 26.0f, 0.0f);
     glVertex3f(80.0f, 26.0f, 0.0f);
     glVertex3f(80.0f, 28.0f, 0.0f);
     glVertex3f(77.0f, 28.0f, 0.0f);

     //upper small part 2
     glVertex3f(81.0f, 26.0f, 0.0f);
     glVertex3f(83.0f, 26.0f, 0.0f);
     glVertex3f(83.0f, 27.0f, 0.0f);
     glVertex3f(81.0f, 27.0f, 0.0f);

     //big tree right..................... start......
     glColor3ub(72, 54, 25);
     glVertex3f(99.0f, 15.0f, 0.0f);
     glVertex3f(100.0f,15.0f, 0.0f);
     glVertex3f(100.0f, 22.0f, 0.0f);
     glVertex3f(99.0f, 22.0f, 0.0f);

     glVertex3f(100.0f, 22.0f, 0.0f);
     glVertex3f(99.0f,  22.0f, 0.0f);
     glVertex3f(102.0f, 27.0f, 0.0f);
     glVertex3f(103.0f, 27.0f, 0.0f);

     glVertex3f(102.0f, 27.0f, 0.0f);
     glVertex3f(103.0f, 27.0f, 0.0f);
     glVertex3f(106.0f, 30.0f, 0.0f);
     glVertex3f(107.0f, 30.0f, 0.0f);

     glVertex3f(106.0f, 30.0f, 0.0f);
     glVertex3f(107.0f, 30.0f, 0.0f);
     glVertex3f(111.0f, 27.0f, 0.0f);
     glVertex3f(111.0f, 28.0f, 0.0f);

     glVertex3f(102.0f, 27.0f, 0.0f);
     glVertex3f(103.0f, 27.0f, 0.0f);
     glVertex3f(103.0f, 32.0f, 0.0f);
     glVertex3f(102.0f, 32.0f, 0.0f);

     glVertex3f(103.0f, 32.0f, 0.0f);
     glVertex3f(102.0f, 32.0f, 0.0f);
     glVertex3f(105.0f, 37.0f, 0.0f);
     glVertex3f(106.0f, 37.0f, 0.0f);

     glVertex3f(103.0f, 32.0f, 0.0f);
     glVertex3f(102.0f, 32.0f, 0.0f);
     glVertex3f(99.0f, 37.0f, 0.0f);
     glVertex3f(100.0f, 37.0f, 0.0f);

     //big tree left

     glVertex3f(100.0f, 22.0f, 0.0f);
     glVertex3f(99.0f, 22.0f, 0.0f);
     glVertex3f(97.0f, 27.0f, 0.0f);
     glVertex3f(96.0f, 27.0f, 0.0f);

     glVertex3f(97.0f, 27.0f, 0.0f);
     glVertex3f(96.0f, 27.0f, 0.0f);
     glVertex3f(93.0f, 30.0f, 0.0f);
     glVertex3f(92.0f, 30.0f, 0.0f);

     glVertex3f(97.0f, 27.0f, 0.0f);
     glVertex3f(96.0f, 27.0f, 0.0f);
     glVertex3f(97.0f, 32.0f, 0.0f);
     glVertex3f(96.0f, 32.0f, 0.0f);

     glVertex3f(96.0f, 32.0f, 0.0f);
     glVertex3f(97.0f, 32.0f, 0.0f);
     glVertex3f(100.0f,37.0f, 0.0f);
     glVertex3f(99.0f, 37.0f, 0.0f);

     glVertex3f(96.0f, 32.0f, 0.0f);
     glVertex3f(97.0f, 32.0f, 0.0f);
     glVertex3f(94.0f, 37.0f, 0.0f);
     glVertex3f(93.0f, 37.0f, 0.0f);






     glEnd();


    //big tree circle ...............start
    glColor3ub (122, 182, 61);
    glPushMatrix();
    glTranslatef(110, 26.0, 0.0);
    glutSolidSphere(1.5,100,2);

    glPopMatrix();
    glEnd();

    glPushMatrix();
    glTranslatef(112, 27.0, 0.0);
    glutSolidSphere(1.5,100,2);

    glPopMatrix();
    glEnd();


    glPushMatrix();
    glTranslatef(107, 38.0, 0.0);
    glutSolidSphere(2,100,2);

    glPopMatrix();
    glEnd();

    glPushMatrix();
    glTranslatef(104, 38.0, 0.0);
    glutSolidSphere(1.5,100,2);

    glPopMatrix();
    glEnd();


    glPushMatrix();
    glTranslatef(101, 38.0, 0.0);
    glutSolidSphere(1.5,100,2);

    glPopMatrix();
    glEnd();

    glPushMatrix();
    glTranslatef(98, 38.0, 0.0);
    glutSolidSphere(1.5,100,2);

    glPopMatrix();
    glEnd();

    glPushMatrix();
    glTranslatef(94, 38.0, 0.0);
    glutSolidSphere(1.5,100,2);

    glPopMatrix();
    glEnd();

    glPushMatrix();
    glTranslatef(92, 37.0, 0.0);
    glutSolidSphere(1.5,100,2);

    glPopMatrix();
    glEnd();

    glPushMatrix();
    glTranslatef(90, 29.0, 0.0);
    glutSolidSphere(1.5,100,2);

    glPopMatrix();
    glEnd();

    glPushMatrix();
    glTranslatef(92, 31.0, 0.0);
    glutSolidSphere(2.5,100,2);

    glPopMatrix();
    glEnd();


    //big circle........................... End


    //small gass
    glBegin(GL_TRIANGLES);

    glColor3f (0.0, 0.43, 0.0);
     //1
    glVertex3f(93.0f, 15.0f, 0.0f);
    glVertex3f(95.0f, 15.0f, 0.0f);
    glVertex3f(94.0f, 17.0f, 0.0f);

    //2
    glVertex3f(95.0f, 15.0f, 0.0f);
    glVertex3f(97.0f, 15.0f, 0.0f);
    glVertex3f(96.0f, 17.0f, 0.0f);

     //3
    glVertex3f(97.0f, 15.0f, 0.0f);
    glVertex3f(99.0f, 15.0f, 0.0f);
    glVertex3f(98.0f, 18.0f, 0.0f);

    //4
    glVertex3f(100.0f, 15.0f, 0.0f);
    glVertex3f(104.0f, 15.0f, 0.0f);
    glVertex3f(102.0f, 18.0f, 0.0f);

    //5
    glVertex3f(104.0f, 15.0f, 0.0f);
    glVertex3f(106.0f, 15.0f, 0.0f);
    glVertex3f(105.0f, 18.0f, 0.0f);

     //6
    glVertex3f(182.0f, 15.0f, 0.0f);
    glVertex3f(184.0f, 15.0f, 0.0f);
    glVertex3f(183.0f, 16.0f, 0.0f);

    //7
    glVertex3f(184.0f, 15.0f, 0.0f);
    glVertex3f(186.0f, 15.0f, 0.0f);
    glVertex3f(185.0f, 17.0f, 0.0f);

    //8
    glVertex3f(186.0f, 15.0f, 0.0f);
    glVertex3f(188.0f, 15.0f, 0.0f);
    glVertex3f(187.0f, 17.0f, 0.0f);

    //9
    glVertex3f(190.0f, 15.0f, 0.0f);
    glVertex3f(192.0f, 15.0f, 0.0f);
    glVertex3f(191.0f, 17.0f, 0.0f);

    //10
    glVertex3f(192.0f, 15.0f, 0.0f);
    glVertex3f(194.0f, 15.0f, 0.0f);
    glVertex3f(193.0f, 17.0f, 0.0f);

    //11
    glVertex3f(194.0f, 15.0f, 0.0f);
    glVertex3f(196.0f, 15.0f, 0.0f);
    glVertex3f(195.0f, 16.0f, 0.0f);

     glEnd();





    //big tree ......................................... End......

    glBegin(GL_LINES);

    glColor3f(0.0, 0.0, 0.0);

    //vartical line
    glVertex2f(75, 23);
    glVertex2f(88, 23);

    //horizontal line
    glVertex2f(82, 20);
    glVertex2f(82, 26);

    //border line left 1
    glVertex2f(75, 15);
    glVertex2f(75, 26);

    //border line Upper
    glVertex2f(75, 26);
    glVertex2f(88, 26);

    //border line right
    glVertex2f(88, 26);
    glVertex2f(88, 15);


    glEnd();


    glBegin(GL_TRIANGLES);
    //food items left
    glColor3ub(247, 165, 28);
    glVertex3f(76.0f, 20.0f, 0.0f);
    glVertex3f(78.0f, 20.0f, 0.0f);
    glVertex3f(77.0f, 21.0f, 0.0f);

    glVertex3f(78.0f, 20.0f, 0.0f);
    glVertex3f(80.0f, 20.0f, 0.0f);
    glVertex3f(79.0f, 21.0f, 0.0f);

    glVertex3f(80.0f, 20.0f, 0.0f);
    glVertex3f(82.0f, 20.0f, 0.0f);
    glVertex3f(81.0f, 21.0f, 0.0f);

    glVertex3f(77.0f, 21.0f, 0.0f);
    glVertex3f(79.0f, 21.0f, 0.0f);
    glVertex3f(78.0f, 22.0f, 0.0f);

    glVertex3f(79.0f, 21.0f, 0.0f);
    glVertex3f(81.0f, 21.0f, 0.0f);
    glVertex3f(80.0f, 22.0f, 0.0f);


    //food items right
    glVertex3f(83.0f, 20.0f, 0.0f);
    glVertex3f(85.0f, 20.0f, 0.0f);
    glVertex3f(84.0f, 21.0f, 0.0f);

    glVertex3f(85.0f, 20.0f, 0.0f);
    glVertex3f(87.0f, 20.0f, 0.0f);
    glVertex3f(86.0f, 21.0f, 0.0f);

    glVertex3f(84.0f, 21.0f, 0.0f);
    glVertex3f(86.0f, 21.0f, 0.0f);
    glVertex3f(85.0f, 22.0f, 0.0f);

    glVertex3f(86.0f, 21.0f, 0.0f);
    glVertex3f(88.0f, 21.0f, 0.0f);
    glVertex3f(87.0f, 22.0f, 0.0f);


    glEnd();

    //small food shop .............End




    glBegin(GL_LINES);

    glColor3f(0.0, 0.0, 1.0);
    glVertex2f(20, 16);
    glVertex2f(20, 32);

    glVertex2f(6, 19);
    glVertex2f(20, 19);

    glVertex2f(6, 17);
    glVertex2f(20, 17);


    //food gari front
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(51, 17);
    glVertex2f(54, 17);

    glVertex2f(54, 17);
    glVertex2f(57, 21);

    glVertex2f(57, 21);
    glVertex2f(52, 21);

    glVertex2f(57, 21);
    glVertex2f(56, 22);

    glVertex2f(57, 21);
    glVertex2f(58, 22);

    glVertex2f(57, 21);
    glVertex2f(58, 17);

    //motka house window left
    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(115, 30);
    glVertex2f(115, 20);

    glVertex2f(115, 20);
    glVertex2f(123, 20);

    glVertex2f(123, 20);
    glVertex2f(123, 30);

    //motka house left protector
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(115, 30);
    glVertex2f(123, 20);

    glVertex2f(115, 27);
    glVertex2f(121, 20);

    glVertex2f(115, 24);
    glVertex2f(118, 20);

    glVertex2f(117, 30);
    glVertex2f(115, 27);

    glVertex2f(120, 30);
    glVertex2f(115, 24);

    glVertex2f(123, 30);
    glVertex2f(115, 20);

    glVertex2f(123, 26);
    glVertex2f(118, 20);

    glVertex2f(123, 22);
    glVertex2f(121, 20);

    glVertex2f(118, 30);
    glVertex2f(123, 23);

    glVertex2f(120, 30);
    glVertex2f(123, 26);

    //motka huse door
    glVertex2f(130, 29);
    glVertex2f(130, 25);

    glEnd();


    //Motka cha house//......
    glBegin(GL_QUADS);

    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(120.0f, 35.0f, 0.0f);
    glVertex3f(115.0f, 30.0f, 0.0f);
    glVertex3f(155.0f, 30.0f, 0.0f);
    glVertex3f(150.0f, 35.0f, 0.0f);

    //sign board motka cha
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex3f(125.0f, 38.0f, 0.0f);
    glVertex3f(125.0f, 30.0f, 0.0f);
    glVertex3f(145.0f, 30.0f, 0.0f);
    glVertex3f(145.0f, 38.0f, 0.0f);

    //slim
    glColor3f(1.0, 0.0, 0.0);
    glVertex3f(123.0f, 30.0f, 0.0f);
    glVertex3f(123.0f, 29.0f, 0.0f);
    glVertex3f(155.0f, 29.0f, 0.0f);
    glVertex3f(155.0f, 30.0f, 0.0f);

    //left window middle
    //glColor3f(0.0, 1.0, 0.0);
    //glVertex3f(115.0f, 30.0f, 0.0f);
    //glVertex3f(115.0f, 20.0f, 0.0f);
    //glVertex3f(123.0f, 20.0f, 0.0f);
    //glVertex3f(123.0f, 30.0f, 0.0f);

    //left window down part
    glColor3f(0.0, 0.0, 1.0);
    glVertex3f(115.0f, 20.0f, 0.0f);
    glVertex3f(115.0f, 15.0f, 0.0f);
    glVertex3f(123.0f, 15.0f, 0.0f);
    glVertex3f(123.0f, 20.0f, 0.0f);

    //motka table upper
    glColor3f(0.0, 0.0, 1.0);
    glVertex3f(130.0f, 29.0f, 0.0f);
    glVertex3f(130.0f, 25.0f, 0.0f);
    glVertex3f(155.0f, 25.0f, 0.0f);
    glVertex3f(155.0f, 29.0f, 0.0f);

    glColor3f(1.0, 0.0, 0.0);
    glVertex3f(141.0f, 29.0f, 0.0f);
    glVertex3f(141.0f, 25.0f, 0.0f);
    glVertex3f(142.0f, 25.0f, 0.0f);
    glVertex3f(142.0f, 29.0f, 0.0f);

    //hiter down design
    glColor3f(1.0, 1.0, 0.0);
    glVertex3f(130.0f, 18.0f, 0.0f);
    glVertex3f(130.0f, 15.0f, 0.0f);
    glVertex3f(155.0f, 15.0f, 0.0f);
    glVertex3f(155.0f, 18.0f, 0.0f);

    //motka table
    glColor3f(0.0, 1.0, 1.0);
    glVertex3f(132.0f, 20.0f, 0.0f);
    glVertex3f(132.0f, 15.0f, 0.0f);
    glVertex3f(142.0f, 15.0f, 0.0f);
    glVertex3f(142.0f, 20.0f, 0.0f);

    //motka cha hitar
    glColor3f(0.0, 0.0, 1.0);
    glVertex3f(148.0f, 19.0f, 0.0f);
    glVertex3f(148.0f, 15.0f, 0.0f);
    glVertex3f(152.0f, 15.0f, 0.0f);
    glVertex3f(152.0f, 19.0f, 0.0f);

    //motka surve katli
    glColor3f(0.0, 1.0, 0.0);
    glVertex3f(133.0f, 23.0f, 0.0f);
    glVertex3f(133.0f, 20.0f, 0.0f);
    glVertex3f(135.0f, 20.0f, 0.0f);
    glVertex3f(135.0f, 23.0f, 0.0f);

    //motka cup 1
    glColor3f(1.0, 0.0, 0.0);
    glVertex3f(136.0f, 21.0f, 0.0f);
    glVertex3f(136.0f, 20.0f, 0.0f);
    glVertex3f(138.0f, 20.0f, 0.0f);
    glVertex3f(138.0f, 21.0f, 0.0f);

    //motka cup 2
    glColor3f(1.0, 0.0, 0.0);
    glVertex3f(139.0f, 21.0f, 0.0f);
    glVertex3f(139.0f, 20.0f, 0.0f);
    glVertex3f(141.0f, 20.0f, 0.0f);
    glVertex3f(141.0f, 21.0f, 0.0f);



    glEnd();

    //sign board two line
    glBegin(GL_LINES);
    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(132, 38);
    glVertex2f(132, 30);

    glVertex2f(139, 38);
    glVertex2f(139, 30);

    //door left side line
    glVertex2f(130, 29);
    glVertex2f(130, 15);

    //house right side line
    glVertex2f(155, 30);
    glVertex2f(155, 15);

    //motka table down line
    glVertex2f(132, 18);
    glVertex2f(142, 18);

    glVertex2f(132, 16);
    glVertex2f(142, 16);





    glEnd();

    //motka cha hiter upper circle
    glPushMatrix();
    glColor3f(1.0, 0.0, 0.0);
    glTranslatef(150, 19.0, 0.0);
    glScalef(4,1,0);
    glutSolidSphere(1,100,2);


    glPopMatrix();
    glEnd();


    glColor3ub(152, 91, 72);
    glBegin(GL_TRIANGLES);
    //motka cup upper part
    glVertex3f(136.0f, 21.0f, 0.0f);
    glVertex3f(138.0f, 21.0f, 0.0f);
    glVertex3f(137.0f, 22.0f, 0.0f);

    //motka cup upper part 2
    glVertex3f(139.0f, 21.0f, 0.0f);
    glVertex3f(141.0f, 21.0f, 0.0f);
    glVertex3f(140.0f, 22.0f, 0.0f);

    //motka cup upper part 3
    glVertex3f(137.0f, 22.0f, 0.0f);
    glVertex3f(139.0f, 22.0f, 0.0f);
    glVertex3f(138.0f, 23.0f, 0.0f);

    //motka cup upper part 4
    glVertex3f(139.0f, 22.0f, 0.0f);
    glVertex3f(141.0f, 22.0f, 0.0f);
    glVertex3f(140.0f, 23.0f, 0.0f);

    glEnd();


    //Motka cha house End//......



    //jal mori start

    glBegin(GL_QUADS);

    glColor3f(0.0, 0.0, 1.0);
    glVertex3f(167.0f, 21.0f, 0.0f);
    glVertex3f(165.0f, 15.0f, 0.0f);
    glVertex3f(174.0f, 15.0f, 0.0f);
    glVertex3f(172.0f, 21.0f, 0.0f);

    glColor3f(0.0, 1.0, 1.0);
    glVertex3f(165.0f, 23.0f, 0.0f);
    glVertex3f(167.0f, 21.0f, 0.0f);
    glVertex3f(172.0f, 21.0f, 0.0f);
    glVertex3f(174.0f, 23.0f, 0.0f);

    glColor3f(0.0, 1.0, 1.0);
    glVertex3f(165.0f, 23.0f, 0.0f);
    glVertex3f(167.0f, 21.0f, 0.0f);
    glVertex3f(172.0f, 21.0f, 0.0f);
    glVertex3f(174.0f, 23.0f, 0.0f);

    glColor3f(1.0, 1.0, 0.0);
    glVertex3f(170.0f, 24.0f, 0.0f);
    glVertex3f(170.0f, 23.0f, 0.0f);
    glVertex3f(173.0f, 23.0f, 0.0f);
    glVertex3f(173.0f, 24.0f, 0.0f);

    glEnd();


    //jal mori End



    //Tree 2 start.........
    glBegin(GL_QUADS);

    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(67.0f, 19.0f, 0.0f);
    glVertex3f(67.0f, 15.0f, 0.0f);
    glVertex3f(69.0f, 15.0f, 0.0f);
    glVertex3f(69.0f, 19.0f, 0.0f);

    glEnd();


    glColor3ub(78, 130, 26);
    glPushMatrix();
    glTranslatef(66, 21.0, 0.0);
    glutSolidSphere(3,100,2);

    glPopMatrix();
    glEnd();


    glPushMatrix();
    glTranslatef(70, 21.0, 0.0);
    glutSolidSphere(3,100,2);

    glPopMatrix();
    glEnd();


    glPushMatrix();
    glTranslatef(66, 24.0, 0.0);
    glutSolidSphere(2.5,100,2);

    glPopMatrix();
    glEnd();

    glPushMatrix();
    glTranslatef(69, 24.0, 0.0);
    glutSolidSphere(2.5,100,2);

    glPopMatrix();
    glEnd();


    glPushMatrix();
    glTranslatef(67.5, 26.0, 0.0);
    glutSolidSphere(2,100,2);

    glPopMatrix();
    glEnd();


    //Tree 2 End...........





    //Tree right side........
    glBegin(GL_QUADS);

    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(188.0f, 20.0f, 0.0f);
    glVertex3f(188.0f, 15.0f, 0.0f);
    glVertex3f(190.0f, 15.0f, 0.0f);
    glVertex3f(190.0f, 20.0f, 0.0f);

    glEnd();


    //Tree right side circle........ start
    glColor3ub( 0, 118, 71);
    glPushMatrix();
    glTranslatef(186, 21.0, 0.0);
    glutSolidSphere(3,100,2);

    glPopMatrix();
    glEnd();


    glPushMatrix();
    glTranslatef(191, 21.0, 0.0);
    glutSolidSphere(3,100,2);

    glPopMatrix();
    glEnd();

    glPushMatrix();
    glTranslatef(187, 24.0, 0.0);
    glutSolidSphere(2.5,100,2);

    glPopMatrix();
    glEnd();

    glPushMatrix();
    glTranslatef(189, 27.0, 0.0);
    glutSolidSphere(2,100,2);

    glPopMatrix();
    glEnd();


    glPushMatrix();
    glTranslatef(191, 24.0, 0.0);
    glutSolidSphere(2.5,100,2);

    glPopMatrix();
    glEnd();



    //tree circle end....




    //circle area .............
    glPushMatrix();
    //food gari tayer 1
    glColor3f(0.0, 1.0, 1.0);
    glTranslatef(42, 17.0, 0.0);
    glutSolidSphere(1.5,100,2);

    glPopMatrix();
    glEnd();

    glPushMatrix();
    //food gari tayer 2
    glColor3f(0.0, 1.0, 1.0);
    glTranslatef(50, 17.0, 0.0);
    glutSolidSphere(1.5,100,2);

    glPopMatrix();
    glEnd();


    glPushMatrix();
    //food gari tayer 3
    glColor3f(0.0, 0.0, 0.0);
    glTranslatef(58, 17.0, 0.0);
    glutSolidSphere(1.5,100,2);

    glPopMatrix();
    glEnd();


    //Sun design ...............start
    glPushMatrix();
    //big circle
    glColor3f(1.0, 1.0, 0.0);
    glTranslatef(37+p,68.0+p, 0.0);
    glutSolidSphere(4.5,100,2);

    glPopMatrix();
    glEnd();

     glPushMatrix();
    //small circle
    glColor3f(1.0f, 0.5f, 0.0f);
    glTranslatef(37+p,68.0+p, 0.0);
    glutSolidSphere(3.5,100,2);

    glPopMatrix();
    glEnd();


    //Sun design ...............End


    //Weather sky..........start
     glPushMatrix();
    //small circle
    glColor3f(1.0f, 1.5f, 1.0f);
    glTranslatef(130+p,80.0, 0.0);
    glutSolidSphere(5,100,2);

    glPopMatrix();
    glEnd();

     glPushMatrix();
    //small circle
    glColor3f(1.0f, 1.5f, 1.0f);
    glTranslatef(137+p,80.0, 0.0);
    glutSolidSphere(5,100,2);

    glPopMatrix();
    glEnd();

     glPushMatrix();
    //small circle
    glColor3f(1.0f, 1.5f, 1.0f);
    //glScalef(1,1,0);
    glTranslatef(137+p,85.0, 0.0);
    glutSolidSphere(5,100,2);

    glPopMatrix();
    glEnd();


    //Weather sky..........End




    //gass baloon.............start

     glBegin(GL_QUADS);
      glColor3f (0.0, 0.43, 0.0);
     glVertex3f(183.0+p, 55.0+p, 0.0f);
     glVertex3f(184.0+p, 53.0+p, 0.0f);
     glVertex3f(186.0+p, 53.0+p, 0.0f);
     glVertex3f(187.0+p, 55.0+p, 0.0f);

     glEnd();


    glBegin(GL_LINES);

    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(181+p, 63+p);
    glVertex2f(185+p, 55+p);

    glVertex2f(189+p, 63+p);
    glVertex2f(185+p, 55+p);

    glEnd();


     glPushMatrix();
    //small circle
    glColor3f(1.0f, 0.0f, 0.0f);
    glTranslatef(185+p,65.0+p, 0.0);
    glutSolidSphere(6,100,2);

    glPopMatrix();
    glEnd();

    //gass baloon............end





   //rishka.......................Start

    glBegin(GL_QUADS);
     glColor3f (1.0, 1.0, 0.0);
     //1
     glVertex3f(102.0+p, 2.0, 0.0f);
     glVertex3f(113.0+p, 2.0, 0.0f);
     glVertex3f(110.0+p, 6.0f, 0.0f);
     glVertex3f(105.0+p, 6.0f, 0.0f);

     //2
     glColor3f (1.0, 0.0, 0.0);
     glVertex3f(106.0+p, 7.0f, 0.0f);
     glVertex3f(106.0+p, 6.0f, 0.0f);
     glVertex3f(110.0+p, 6.0f, 0.0f);
     glVertex3f(110.0+p, 7.0f, 0.0f);

     //3
     glColor3f (1.0, 0.0, 0.0);
     glVertex3f(106.0+p, 7.0f, 0.0f);
     glVertex3f(107.0+p, 7.0f, 0.0f);
     glVertex3f(104.0+p, 11.0f, 0.0f);
     glVertex3f(104.0+p, 10.0f, 0.0f);


      //4
     glColor3f (1.0, 0.0, 0.0);
     glVertex3f(104.0+p, 11.0f, 0.0f);
     glVertex3f(104.0+p, 10.0f, 0.0f);
     glVertex3f(108.0+p, 12.0f, 0.0f);
     glVertex3f(108.0+p, 13.0f, 0.0f);

     //5
     glColor3f (1.0, 0.0, 0.0);
     glVertex3f(112.0+p, 2.0f, 0.0f);
     glVertex3f(126.0+p, 2.0f, 0.0f);
     glVertex3f(126.0+p, 3.0f, 0.0f);
     glVertex3f(112.0+p, 3.0f, 0.0f);

     //6
     glColor3f (1.0, 0.0, 0.0);
     glVertex3f(118.0+p, 6.0f, 0.0f);
     glVertex3f(118.0+p, 3.0f, 0.0f);
     glVertex3f(123.0+p, 3.0f, 0.0f);
     glVertex3f(123.0+p, 6.0f, 0.0f);

     //7
     glColor3f (0.0, 0.0, 1.0);
     glVertex3f(120.0+p, 7.0f, 0.0f);
     glVertex3f(120.0+p, 6.0f, 0.0f);
     glVertex3f(123.0+p, 6.0f, 0.0f);
     glVertex3f(123.0+p, 7.0f, 0.0f);

     //8
     glColor3f (1.0, 0.0, 0.0);
     glVertex3f(118.0+p, 6.0f, 0.0f);
     glVertex3f(119.0+p, 6.0f, 0.0f);
     glVertex3f(119.0+p, 12.0f, 0.0f);
     glVertex3f(118.0+p, 12.0f, 0.0f);

     //9
     glColor3f (1.0, 0.0, 0.0);
     glVertex3f(118.0+p, 12.0f, 0.0f);
     glVertex3f(118.0+p, 11.0f, 0.0f);
     glVertex3f(125.0+p, 11.0f, 0.0f);
     glVertex3f(125.0+p, 12.0f, 0.0f);

      //10
     glColor3f (1.0, 0.0, 0.0);
     glVertex3f(125.0+p, 2.0f, 0.0f);
     glVertex3f(130.0+p, 5.0f, 0.0f);
     glVertex3f(130.0+p, 6.0f, 0.0f);
     glVertex3f(125.0+p, 3.0f, 0.0f);

      //11
     glColor3f (1.0, 0.0, 0.0);
     glVertex3f(130.0+p, 5.0f, 0.0f);
     glVertex3f(130.0+p, 6.0f, 0.0f);
     glVertex3f(134.0+p, 4.0f, 0.0f);
     glVertex3f(134.0+p, 3.0f, 0.0f);


     glEnd();

    glBegin(GL_LINES);

    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(130+p, 9);
    glVertex2f(130+p, 2.5);

    glVertex2f(130+p, 9);
    glVertex2f(127+p, 8);

    glVertex2f(130+p, 9);
    glVertex2f(128+p, 7);

    glEnd();


     glPushMatrix();
    //rishka chaka circle 1
    glColor3f(1.0f, 0.0f, 0.0f);
    glTranslatef(107+p,2.0, 0.0);
    glutSolidSphere(2,100,2);

    glPopMatrix();
    glEnd();


    glPushMatrix();
    //rishka chaka circle 2
    glColor3f(1.0f, 0.0f, 0.0f);
    glTranslatef(130+p,2.0, 0.0);
    glutSolidSphere(2,100,2);

    glPopMatrix();
    glEnd();


    //rishka.......................End




    //Campus car .......................start
     glBegin(GL_QUADS);

     glColor3f (0.0, 1.0, 0.0);
     //1
     glVertex3f(5.0+p, 7.0f, 0.0f);
     glVertex3f(2.0+p, 2.0f, 0.0f);
     glVertex3f(20.0+p, 2.0f, 0.0f);
     glVertex3f(20.0+p, 7.0f, 0.0f);

      //2
     glColor3f (0.0, 0.0, 1.0);
     glVertex3f(15.0+p, 7.0f, 0.0f);
     glVertex3f(20.0+p, 7.0f, 0.0f);
     glVertex3f(20.0+p, 8.0f, 0.0f);
     glVertex3f(15.0+p, 8.0f, 0.0f);

     //3
     glColor3f (1.0, 0.0, 0.0);
     glVertex3f(5.0+p, 13.0f, 0.0f);
     glVertex3f(6.0+p, 12.0f, 0.0f);
     glVertex3f(36.0+p, 12.0f, 0.0f);
     glVertex3f(35.0+p, 13.0f, 0.0f);

     //4
     glColor3f (1.0, 0.0, 0.0);
     glVertex3f(26.0+p, 10.0f, 0.0f);
     glVertex3f(26.0+p, 8.0f, 0.0f);
     glVertex3f(27.0+p, 8.0f, 0.0f);
     glVertex3f(27.0+p, 10.0f, 0.0f);

     //5
     glColor3f (1.0, 0.0, 0.0);
     glVertex3f(26.0+p, 7.0f, 0.0f);
     glVertex3f(25.0+p, 2.0f, 0.0f);
     glVertex3f(32.0+p, 2.0f, 0.0f);
     glVertex3f(31.0+p, 7.0f, 0.0f);

     //6
     glColor3f (1.0, 0.0, 0.0);
     glVertex3f(34.0+p, 2.0f, 0.0f);
     glVertex3f(35.0+p, 2.0f, 0.0f);
     glVertex3f(36.0+p, 6.0f, 0.0f);
     glVertex3f(35.0+p, 6.0f, 0.0f);


     //7
     glColor3f (1.0, 0.0, 0.0);
     glVertex3f(41.0+p, 6.0f, 0.0f);
     glVertex3f(43.0+p, 3.0f, 0.0f);
     glVertex3f(44.0+p, 3.0f, 0.0f);
     glVertex3f(42.0+p, 6.0f, 0.0f);


    glEnd();

    glBegin(GL_LINES);
    //8
    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(5+p, 13);
    glVertex2f(10+p, 7);

    //9
    glVertex2f(26+p, 8);
    glVertex2f(26+p, 7);

    //10
    glVertex2f(20+p, 2);
    glVertex2f(35+p, 2);

    //11
    glVertex2f(35+p, 6);
    glVertex2f(42+p, 6);

    //12
    glVertex2f(35+p, 13);
    glVertex2f(40+p, 6);

    glEnd();


    glPushMatrix();
    //campus car circle 1
    glColor3f(1.0f, 0.0f, 0.0f);
    glTranslatef(11+p,2.0, 0.0);
    glutSolidSphere(2,100,2);

    glPopMatrix();
    glEnd();


    glPushMatrix();
    //campus car circle 2
    glColor3f(1.0f, 0.0f, 0.0f);
    glTranslatef(38.5+p,2.0, 0.0);
    glutSolidSphere(2,100,2);

    glPopMatrix();
    glEnd();


    //Campus car .......................End







    glFlush ();
}


void init (void)
{

    glClearColor (0.658824, 0.658824, 0.658824, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, 200.0, 0.0, 100.0, -10.0, 10.0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (1150, 575);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("village nature:182-15-11375");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}


