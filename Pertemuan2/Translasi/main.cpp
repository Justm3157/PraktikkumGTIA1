#include <gl/glut.h>
#include <cmath>

float posx = 0.0f;
float posy = 0.0f;
void SegiEmpat(void){
	glClear(GL_COLOR_BUFFER_BIT);
	glTranslatef(0.50,0.50,0);
	glColor3f(1.0f,0.0f,0.0f);
	glRectf(-0.18,0.18,0.18,-0.18);

}

void display(){
	glPushMatrix();
		glTranslatef(posx,posy,0);
		SegiEmpat();
	glPopMatrix();
	glFlush();
}

void keyboard(unsigned char key,int x,int y){
	if(key=='w') posy+=0.05f;
    if(key=='s') posy-=0.05f;

    if(key=='a') posx-=0.05f;
    if(key=='d') posx+=0.05f;
    
    glutPostRedisplay();
}
void init() {
    glClearColor(1,1,1,1);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-1,1,-1,1);
}
int main(int argc,char* argv[]){
	glutInit(&argc,argv);
	glutInitWindowSize(640,480);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("SegiEmpat");
	init();
	glutDisplayFunc(display);
	glutKeyboardFunc(keyboard);
	glClearColor(0.0f,0.0f,1.0f,1.0f);
	glutMainLoop();
	return 0;
}
