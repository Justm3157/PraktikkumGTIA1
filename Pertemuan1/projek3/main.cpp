#include <GL/glut.h>
void point(void){
	glClear(GL_COLOR_BUFFER_BIT);
	glPointSize(50.0f);
	glBegin(GL_POINTS);
	glColor3f(1.0f,1.0f,0.0f);
	glVertex3f(0.5,0.5,0.0);
	glEnd();
	glFlush();
}

int main(int argc,char* argv[]){
	glutInit(&argc,argv);
	glutInitWindowSize(640,480);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("24060124130076-Johan Reinhart Calvin");
	glutDisplayFunc(point);
	glClearColor(0.0f,0.0f,1.0f,1.0f);
	glutMainLoop();
	return 0;
}
