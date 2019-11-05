#include <stdlib.h>
#include <gl/glut.h>
int w = 480, h = 480, z = -50;
int x1 = 0, y1 = 0, z1 = 0, sudut = 0;
void timer(int value) {
    glutPostRedisplay();
    glutTimerFunc(50,timer,0);
    glClearColor(0.6f, 0.6f, 0.6f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
}

void myKeyboard(unsigned char key, int x, int y) {
    if(key == 'a') z += 5; //mendekat
    else if (key == 'd') z -= 5; //menjauh
    else if (key == 'x') { //rotasi sumbu x
    x1 = 1;
    y1 = 0;
    z1 = 0;
    sudut += 5;
} else if (key == 'y') { //rotasi sumbu y
    x1 = 0;
    y1 = 1;
    z1 = 0;
    sudut += 5;
} else if (key == 'z') { //rotasi sumbu z
    x1 = 0;
    y1 = 0;
    z1 = 1;
    sudut += 5;
    }
}



void init() {
    glClearColor(0.0,0.0,0.0,1.0);
    glEnable(GL_DEPTH_TEST);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(30., (GLdouble)w/(GLdouble)h, 1., 300.);
    glMatrixMode(GL_MODELVIEW);
}

void resize(int w1, int h1) {
    glViewport(0,0,w1,h1);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45.0, (float)w1/(float)h1, 1.0, 300.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

void balok(double panjang, double lebar, double tinggi) {
    glScalef(panjang, tinggi, lebar);
    glutSolidCube(1);
}


void renderScene(void) {

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    glClearColor(1,1,1,1);
    glTranslatef(0, 0, z);
    glRotatef(sudut, x1, y1, z1);

    glPushMatrix(); //background
    glTranslatef(10, -17.5,-25);
    glColor3f(1.0,1.0,0.0);
    balok(100,0,30);
    glPopMatrix();

    glPushMatrix(); //badan
    glColor3f(0.0, 0.0, 1.0);
    balok(10, 6, 9);
    glPopMatrix();

    glPushMatrix(); //kepala
    glTranslatef(0, 9.5, 0);
    glColor3f(1.0, 0.5, 0.0);
    balok(15, 8, 10);
    glPopMatrix();

    glPushMatrix(); //mata kiri
    glTranslatef(-2.6, 10, 4.1);
    glRotatef(90, 0, 1, 0);
    glColor3f(0.2, 0, 0);
    glutSolidSphere(1.2, 2, 30);
    glPopMatrix();

    glPushMatrix(); //mata kanan
    glTranslatef(2.6, 10, 4.1);
    glRotatef(90, 0, 1, 0);
    glColor3f(0.2, 0, 0);
    glutSolidSphere(1.2, 2, 30);
    glPopMatrix();

    glPushMatrix(); //mulut
    glTranslatef(0, 6, 4.1);
    glRotatef(-90, 0, 1, 0);
    glRotatef(-90, 1, 0, 0);
    glColor3f(0.2, 0, 0);
    glutSolidCone(1.5, 2, 2, 2);
    glPopMatrix();

    glPushMatrix(); //garis
    glTranslatef(0, 3, 0);
    glColor3f(0.0, 0.0, 0.5);
    balok(10.2, 6.2, 1);
    glPopMatrix();

    glPushMatrix(); //garis
    glTranslatef(0, 1, 0);
    glColor3f(0.0, 0.0, 0.5);
    balok(10.2, 6.2, 1);
    glPopMatrix();

    glPushMatrix(); //garis
    glTranslatef(0, -1, 0);
    glColor3f(0.0, 0.0, 0.5);
    balok(10.2, 6.2, 1);
    glPopMatrix();

    glPushMatrix(); //garis
    glTranslatef(0, -3, 0);
    glColor3f(0.0, 0.0, 0.5);
    balok(10.2, 6.2, 1);
    glPopMatrix();

    glPushMatrix(); //tangan kiri
    glTranslatef(-6.5, -0.5, 2.5);
    glRotatef(-45, 1, 0, 0);
    glColor3f(1.0, 0.5, 0.0);
    balok(3, 3, 8);
    glPopMatrix();

    glPushMatrix(); //tangan kanan
    glTranslatef(6.5, -0.5, -2.5);
    glRotatef(45, 1, 0, 0);
    glColor3f(1.0, 0.5, 0.0);
    balok(3, 3, 8);
    glPopMatrix();

    glPushMatrix(); //kaki kanan
    glTranslatef(-2, -7, -0.5);
    glRotatef(10, 1, 0, 0);
    glColor3f(1.0, 0.5, 0.0);
    balok(3, 3, 10);
    glPopMatrix();

    glPushMatrix(); //sepatukanan
    glTranslatef(-2, -10.5, 1.5 );
    glRotatef(10, 4, 0, 0);
    glColor3f(0.0, 0.0, 0.0);
    balok(3, 3, 4);
    glPopMatrix();

    glPushMatrix(); //kaki kiri
    glTranslatef(2, -7, -0.5);
    glRotatef(10, 1, 0, 0);
    glColor3f(1.0, 0.5, 0.0);
    balok(3, 3, 10);
    glPopMatrix();

    glPushMatrix(); //sepatukiri
    glTranslatef(2, -10.5, 0.5 );
    glRotatef(10, 1, 0, 0);
    glColor3f(0.0, 0.0, 0.0);
    balok(3, 3, 4);
    glPopMatrix();


    glutSwapBuffers();

}

int main(int argc, char **argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowPosition(100,100);
    glutInitWindowSize(w,h);
    glutCreateWindow("Danboo");
    gluOrtho2D(-w/2, w/2, -h/2, h/2);
    glutDisplayFunc(renderScene);
    glutTimerFunc(50, timer, 0);
    glutKeyboardFunc(myKeyboard);
    glutReshapeFunc(resize);
    init();
    glutMainLoop();
}


