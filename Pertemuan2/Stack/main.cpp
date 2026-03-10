#include <gl/glut.h>
#include <gl/gl.h>
#include <math.h>
float angles = 0.0f;
void garis(){
	glLineWidth(2.0f);
	glBegin(GL_LINES);
		glColor3f(1.0f,1.0f,1.0f);
		glVertex3f(0.00,0.20,0.0);
		glVertex3f(0.00,-0.20,0.0);
	glEnd();
}

void titik(){
	glPointSize(5.0f);
	glTranslatef(0.35,0.35,0.0);
	glBegin(GL_POINTS);
		glColor3f(1.0f,1.0f,1.0f);
		glVertex3f(0.25,0.25,0.0);
	glEnd();
}

void persegi(){
	glTranslatef(0.50,0.50,0.00);
	glBegin(GL_TRIANGLE_STRIP);
		glColor3f(1.0f,0.0f,0.0f); glVertex3f(-0.05,-0.05,0.00);
		glColor3f(0.0f,1.0f,0.0f); glVertex3f(0.15,-0.05,0.00);
		glColor3f(0.0f,0.0f,1.0f); glVertex3f(-0.05,0.05,0.00);
		glColor3f(1.0f,1.0f,0.0f); glVertex3f(0.15,0.05,0.00);
	glEnd();
}

void lingkaran(){
	#define PI 3.1415926535898
	glBegin(GL_LINE_LOOP);
		GLint circle_points = 100;
		int i;
		float angle;
		for(i = 0;i < circle_points;i++){
			angle = 2*PI*i/circle_points;
			glVertex2f(cos(angle),sin(angle));
		}
	glEnd();
}
void display(void){
	glClear(GL_COLOR_BUFFER_BIT);
	glPushMatrix();
		glRotatef(angles,0,0,1);
		garis();
	glPopMatrix();
	
	glPushMatrix();
		glRotatef(angles,0,0,1);
		titik();
	glPopMatrix();
	
	glPushMatrix();
		glRotatef(angles,0,0,1);
		persegi();
	glPopMatrix();
	
	glPushMatrix();
		lingkaran();
	glPopMatrix();

	glFlush();	
}

void keyboard(unsigned char key, int x, int y) {
    if(key=='q') angles+=5;
    if(key=='e') angles-=5;
    glutPostRedisplay(); 
}
int main(int argc, char* argv[]){
	glutInit(&argc,argv);
	glutInitWindowSize(640,480);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("Coba");
	glutDisplayFunc(display);
	glutKeyboardFunc(keyboard);
	glClearColor(0.0f,0.0f,1.0f,1.0f);
	glutMainLoop();
	return 0;
}
