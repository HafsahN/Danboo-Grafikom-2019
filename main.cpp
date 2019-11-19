#include <math.h>
#include <stdlib.h>
#include <GL/glut.h>
#include <stdio.h>
#include <math.h>
#include <GL/glut.h>
#include <string.h>
#include <assert.h>
#include <stdarg.h>


float angle2=0.0;    
float red=1.0, blue=0.3, green=0.5;
float sudut=0.0;
float asd=0.0, fgh=0.0;
float _x=0,_y=0,_z=0;
float ert=0.0, yui=0.0;

//sudut pandang
static float angle=0.0,ratio;            
static float x=0.0f,y=10.75f,z=55.0f;      
static float lx=0.0f,ly=0.0f,lz=-1.0f;   


void garis_xy(){


     glPushMatrix();

glTranslated(_x,_y,_z);



     float i;

            glColor3f( 1.0, 1.0, 1.0);
  	        glBegin( GL_LINES);

            for (i=-20; i<20; i=i+1) {

                   glVertex3f( -20, i, 0);
                  glVertex3f( 20, i, 0);
                   glVertex3f( i,-20, 0);
                  glVertex3f( i,20, 0);
                  }


           glEnd();
            glPopMatrix();

          glutSwapBuffers();
           }

           void balok(double panjang, double lebar, double tinggi) {
    glScalef(panjang, tinggi, lebar);
    glutSolidCube(1);
}
///////////////////////////BIANGLALA/////////////////////////////////////////////
float qwe = 1.0;
float angl = 5.0;
void ada(){
     glPushMatrix();
        glTranslatef(0,0,0.5);
         glRotatef(qwe,0,0,1);
         glColor3f(2.0,1.0,1.1);
        glutSolidCone(5,3,50,4);
  
    glPopMatrix();
    glPushMatrix();
        glTranslatef(0,0,-0.5);
         glRotatef(180,0,0,0);
         glRotatef(qwe,0,0,1);
         glColor3f(0.0,1.0,1.0);
        glutWireCone(5,3,50,4);

    glPopMatrix();
    }

void duduk(){
     GLUquadric *quadric = gluNewQuadric();
     glPushMatrix();
        glColor3f(1.0,1.0,1.0);
       //tempat duduk
            glPushMatrix();
            glColor3f(1.0,0.3,2.0);
                glTranslatef(5,0,0);
                glRotatef(angl,0,0,1);
                glRotatef(270,1,0,0);
                gluCylinder(quadric, 0.5, 0.5, 1, 20, 20);
                glTranslatef(0,0,0.75);
                glutSolidOctahedron();
            glPopMatrix();
             glPushMatrix();
             glColor3f(0.3,1.0,0.5);
                glTranslatef(-5,0,0);
                glRotatef(angl,0,0,1);
                glRotatef(270,1,0,0);
                gluCylinder(quadric, 0.5, 0.5, 1, 20, 20);
                glTranslatef(0,0,0.75);
                glutSolidOctahedron();
            glPopMatrix();
             glPushMatrix();
             glColor3f(0.1,1.0,0.4);
                glTranslatef(0,5,0);
                glRotatef(angl,0,0,1);
                glRotatef(270,1,0,0);
                gluCylinder(quadric, 0.5, 0.5, 1, 20, 20);
                glTranslatef(0,0,0.75);
                glutSolidOctahedron();
            glPopMatrix();
             glPushMatrix();
             glColor3f(1.0,0.5,1.0);
                glTranslatef(0,-5,0);
                glRotatef(angl,0,0,1);
                glRotatef(270,1,0,0);
                gluCylinder(quadric, 0.5, 0.5, 1, 20, 20);
                glTranslatef(0,0,0.75);
                glutSolidOctahedron();
            glPopMatrix();
           glPushMatrix();
           glColor3f(1.0,0.0,0.0);
                glTranslatef(3.5,3.5,0);
                glRotatef(angl,0,0,1);
                glRotatef(270,1,0,0);
                gluCylinder(quadric, 0.5, 0.5, 1, 20, 20);
                glTranslatef(0,0,0.75);
                glutSolidOctahedron();
            glPopMatrix();
            glPushMatrix();
            glColor3f(0.8,0.5,0.0);
                glTranslatef(-3.5,3.5,0);
                glRotatef(angl,0,0,1);
                glRotatef(270,1,0,0);
                gluCylinder(quadric, 0.5, 0.5, 1, 20, 20);
                glTranslatef(0,0,0.75);
                glutSolidOctahedron();
            glPopMatrix();
            glPushMatrix();
            glColor3f(6.0,0.5,0.0);
                glTranslatef(3.5,-3.5,0);
                glRotatef(angl,0,0,1);
                glRotatef(270,1,0,0);
                gluCylinder(quadric, 0.5, 0.5, 1, 20, 20);
                glTranslatef(0,0,0.75);
                glutSolidOctahedron();
            glPopMatrix();
             glPushMatrix();
             glColor3f(0.5,0.7,1.0);
                glTranslatef(-3.5,-3.5,0);
                glRotatef(angl,0,0,1);
                glRotatef(270,1,0,0);
                gluCylinder(quadric, 0.5, 0.5, 1, 20, 20);
                glTranslatef(0,0,0.75);
                glutSolidOctahedron();
            glPopMatrix();
        glPopMatrix();
}

void ass(){
    GLUquadric *quadric = gluNewQuadric();
    glPushMatrix();
        glColor3f(0.5,1.5,0.5);
        glTranslatef(0,0,-4);
        gluCylinder(quadric, 0.1, 0.1, 8, 20, 20);
    glPopMatrix();
}
void kaki(){
    GLUquadric *quadric = gluNewQuadric();
    glPushMatrix();
        glColor3f(0.5,0.5,0.5);
        glTranslatef(0,0,-4);
        glRotatef(90,1,0,0);
        gluCylinder(quadric, 0.1, 0.7, 5.5, 20, 20);
    glPopMatrix();
     glPushMatrix();
        glColor3f(0.5,0.5,0.5);
        glTranslatef(0,0,4);
        glRotatef(90,1,0,0);
        gluCylinder(quadric, 0.1, 0.7, 5.5, 20, 20);
    glPopMatrix();

}

float zxc = 2.0;

void tiang(){
    GLUquadric *quadric = gluNewQuadric();
    glPushMatrix();
        glColor3f(0.5,0.5,0.5);
        glRotatef(90,1,0,0);
        glTranslatef(0,0,-6);
        gluCylinder(quadric, 1, 1, 13,30, 40);
    glPopMatrix();

}
void donat() {
     if(asd<=70){asd+=0.25;
     if(asd==70)fgh=70;}
     else if(fgh>=0){fgh-=0.25;
     if(fgh==0)asd=0.0;}
    GLUquadric *quadric = gluNewQuadric();
    glPushMatrix();
        glColor3f(0,1,1);
        glRotatef(90,1,0,0);
        glRotatef(zxc,0,0,1);
        glTranslatef(0,0,4);
      glutSolidTorus(1,2,45,35);
      glTranslatef(0,-3,0);
      glRotatef(90,1,0,0);
        gluCylinder(quadric, 0.1, 0.1, 3,30, 40);
        glTranslatef(-3,0,-3);
      glRotatef(270,0,1,0);
        gluCylinder(quadric, 0.1, 0.1, 3,30, 40);
          glTranslatef(0,0,-6);
      glRotatef(180,0,1,0);
        gluCylinder(quadric, 0.1, 0.1, 3,30, 40);
    glTranslatef(6,0,-3);
    glRotatef(270,0,1,0);
        gluCylinder(quadric, 0.1, 0.1, 3,30, 40);
        glPushMatrix();
                //glTranslatef(0,-1.5,0);
                glColor3f(1.0,0.1,0.1);
                glRotatef(-90,0,1,0);
                glRotatef(-180,1,0,0);
                //gluCylinder(quadric, 0.5, 0.5, 1, 20, 20);
                //glTranslatef(0,0,0.75);
                //glutSolidCone(0.8,0.8,50,2);

                gluCylinder(quadric, 0.5, 0.5, 1, 20, 20);
                   glTranslatef(0,0,0.75);
                  glutWireCone(0.8,0.8,50,2);

                glTranslatef(0,-1.5,0);

        glPopMatrix();
           glPushMatrix();
                glTranslatef(6,0,6);
                glRotatef(180,0,1,0);
                  glRotatef(180,1,0,0);
                   gluCylinder(quadric, 0.5, 0.5, 1, 20, 20);
                   glTranslatef(0,0,0.75);
                  glutWireCone(0.8,0.8,50,2);

                  glTranslatef(0,-1.5,0);

            glPopMatrix();
             glPushMatrix();
                glTranslatef(-6,0,6);

                  glRotatef(180,1,0,0);
                  gluCylinder(quadric, 0.5, 0.5, 1, 20, 20);
                   glTranslatef(0,0,0.75);
                  glutWireCone(0.8,0.8,50,2);

                  glTranslatef(0,-1.5,0);

            glPopMatrix();
             glPushMatrix();
                glTranslatef(0,0,12);
                glRotatef(90,0,1,0);
                glRotatef(180,1,0,0);
                  //glRotatef(270,1,0,0);
                   //gluCylinder(quadric, 0.5, 0.5, 1, 20, 20);
                   //glTranslatef(0,0,0.75);
                  //glutSolidCone(0.8,0.8,50,2);
                   gluCylinder(quadric, 0.5, 0.5, 1, 20, 20);
                   glTranslatef(0,0,0.75);
                  glutWireCone(0.8,0.8,50,2);

                  glTranslatef(0,-1.5,0);

            glPopMatrix();
glPopMatrix();

      zxc-=5;

}



void alas(){
     //alas
     glColor3f(0.2, 4.5, 2.2);
	glBegin(GL_POLYGON);
           glTexCoord2f(0.0f,0.0f);
           glVertex3f(-2000.0f,0.0f,2000.0f);
           glTexCoord2f(5.0f,0.0f);
           glVertex3f(2000.0f,0.0f,2000.0f);
           glTexCoord2f(5.0f,5.0f);
           glVertex3f(2000.0f,0.0f,-2000.0f);
           glTexCoord2f(0.0f,5.0f);
           glVertex3f(-2000.0f,0.0f,-2000.0f);

        glEnd();
     glPopMatrix();
     }

void renderScene(void) {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
                   alas();
    glPopMatrix();

 
    glPushMatrix();

                   glTranslatef(-20,16,-20);
                   glScalef(3,3,3);
                   glRotatef(135,0,1,0);
                   ada();
                   ass();
                   kaki();
                   glPushMatrix();
                                  glRotatef(qwe,0,0,1);
                                  duduk();
                   glPopMatrix();
                   glColor3f(1.0,1.0,1.0);
   glPopMatrix();
//////////////////////////end-BIANGLALA/////////////////////////////////




	// Halaman
	glColor3f(0, 3, 0);
	glBegin(GL_QUADS);
		glVertex3f(-40.0, 0.1, -40.0);
		glVertex3f(-40.0, 0.1,  40.0);
		glVertex3f( 40.0, 0.1,  40.0);
		glVertex3f( 40.0, 0.1, -40.0);
	glEnd();
//////////////////////////DANBOO/////////////////////////////////

	 glPushMatrix(); //kepala
    glTranslatef(14.8, 14.9, 4);
    glColor3f(1.0, 0.5, 0.0);
    balok(7.5, 4, 5);
    glPopMatrix();

    glPushMatrix(); //mulut
    glTranslatef(14.8, 13, 6.5);
    glRotatef(-90, 0, 1, 0);
    glRotatef(-90, 1, 0, 0);
    glColor3f(0.2, 0, 0);
    glutSolidCone(0.5, 1, 2, 2);
    glPopMatrix();

    glPushMatrix(); //mata kiri
    glTranslatef(16, 15, 6.5);
    glRotatef(90, 0, 1, 0);
    glColor3f(0.2, 0, 0);
    glutSolidSphere(0.5, 2, 3);
    glPopMatrix();

    glPushMatrix(); //mata kiri
    glTranslatef(13.5, 15, 6.5);
    glRotatef(90, 0, 1, 0);
    glColor3f(0.2, 0, 0);
    glutSolidSphere(0.5, 2, 3);
    glPopMatrix();

    glPushMatrix(); //badan
    glColor3f(0.0, 0.0, 1.0);
    glTranslatef(14.8, 9.5, 4.1);
    balok(5.5, 5, 5.5);
    glPopMatrix();

    glPushMatrix(); //garis
    glTranslatef(14.8, 8, 4.5);
    glColor3f(0.0, 0.0, 0.5);
    balok(5.7, 5, 0.7);
    glPopMatrix();

    glPushMatrix(); //garis
    glTranslatef(14.8, 9.6, 4.5);
    glColor3f(0.0, 0.0, 0.5);
    balok(5.7, 5, 0.7);
    glPopMatrix();

    glPushMatrix(); //garis
    glTranslatef(14.8, 11.2, 4.5);
    glColor3f(0.0, 0.0, 0.5);
    balok(5.7, 5, 0.7);
    glPopMatrix();

    glPushMatrix(); //tangan kiri
    glTranslatef(11.4, 10, 6);
    glRotatef(-45, 1, 0, 0);
    glColor3f(1.0, 0.5, 0.0);
    balok(1.5, 1.5, 4);
    glPopMatrix();

    glPushMatrix(); //tangan kanan
    glTranslatef(18.2, 10, 7);
    glRotatef(-45, 1, 0, 0);
    glColor3f(1.0, 0.5, 0.0);
    balok(1.5, 1.5, 4);
    glPopMatrix();

    glPushMatrix(); //kaki kanan
    glTranslatef(13.5, 5, 4);
    glRotatef(10, 1, 0, 0);
    glColor3f(1.0, 0.5, 0.0);
    balok(1.8, 1.8, 5);
    glPopMatrix();

    glPushMatrix(); //kaki kiri
    glTranslatef(16.6, 5, 4);
    glRotatef(10, 1, 0, 0);
    glColor3f(1.0, 0.5, 0.0);
    balok(1.8, 1.8, 5);
    glPopMatrix();
//////////////////////////end-DANBOO/////////////////////////////////

    glutSwapBuffers();
}


void changeSize(int w, int h) {

	if(h == 0)
		h = 1;

	float ratio = 1.0* w / h;

	glMatrixMode(GL_PROJECTION); 
	glLoadIdentity();            

	glViewport(0, 0, w, h);

	gluPerspective(45,ratio,1,1000);
                                     
	glMatrixMode(GL_MODELVIEW);     
	glLoadIdentity();                

    gluLookAt(x     , y    , z,
              x + lx,y + ly,z + lz,
		      0.0f  ,1.0f  ,0.0f);

}

void orientMe(float ang) {

	lx = sin(ang);
	lz = -cos(ang);
	glLoadIdentity();
	gluLookAt(x, y, z,
		      x + lx,y + ly,z + lz,
			  0.0f,1.0f,0.0f);
}

void moveMeFlat(int direction) {
	x = x + direction*(lx)*0.1;
	z = z + direction*(lz)*0.1;

	glLoadIdentity();
	gluLookAt(x, y, z,
		      x + lx,y + ly,z + lz,
			  0.0f,1.0f,0.0f);
}


void inputKey(int key, int x, int y) {

	switch (key) {
		case GLUT_KEY_LEFT :
			angle -= 0.05f;
			orientMe(angle);break;
		case GLUT_KEY_RIGHT :
			angle +=0.05f;
			orientMe(angle);break;
		case GLUT_KEY_UP :
			     moveMeFlat(5);break;
		case GLUT_KEY_DOWN :
			     moveMeFlat(-5);break;
	}
}

const GLfloat light_ambient[]  = { 0.0f, 0.0f, 0.0f, 1.0f };
const GLfloat light_diffuse[]  = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_position[] = { 2.0f, 5.0f, 5.0f, 0.0f };

const GLfloat mat_ambient[]    = { 0.7f, 0.7f, 0.7f, 1.0f };
const GLfloat mat_diffuse[]    = { 0.8f, 0.8f, 0.8f, 1.0f };
const GLfloat mat_specular[]   = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat high_shininess[] = { 100.0f };



int main(int argc, char **argv) {
     glutInit(&argc, argv);

     glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);

   
     glutInitWindowPosition(100,100);


	 glutInitWindowSize(640,360);

	 glutCreateWindow("Danboo di tempat bermain");

     glClearColor( 0.1, 0.5, 1, 0);

     glutDisplayFunc(renderScene);

     glutIdleFunc(renderScene);


     glutReshapeFunc(changeSize);

     glutSpecialFunc(inputKey);


     glEnable(GL_DEPTH_TEST);

    glDepthFunc(GL_LESS);

   glEnable(GL_LIGHT0);
    glEnable(GL_NORMALIZE);
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_LIGHTING);

    glLightfv(GL_LIGHT0, GL_AMBIENT,  light_ambient);
    glLightfv(GL_LIGHT0, GL_DIFFUSE,  light_diffuse);
    glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);

    glMaterialfv(GL_FRONT, GL_AMBIENT,   mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE,   mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR,  mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);


 	 glutMainLoop();

}
