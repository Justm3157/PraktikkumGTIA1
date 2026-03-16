#include <GL/glut.h>
float angle = 0.0f;
void Segitiga(void){
	glClear(GL_COLOR_BUFFER_BIT);
	glTranslatef(0.25,-0.25,0);
	glBegin(GL_TRIANGLES);
	glColor3f(1.0f,0.0f,0.0f); glVertex3f(-0.10,-0.10,0.00);
	glColor3f(0.0f,1.0f,0.0f); glVertex3f(0.10,-0.10,0.00);
	glColor3f(0.0f,0.0f,1.0f); glVertex3f(0.00,0.10,0.00);
	glEnd();
}
void display(){
	glPushMatrix();
		glRotatef(angle,0,0,1);
		Segitiga();
	glPopMatrix();
	glFlush();
}
void keyboard(unsigned char key,int x,int y){
  	if(key=='a') angle+=5;
    if(key=='d') angle-=5;
    
    glutPostRedisplay();
}


int main(int argc,char* argv[]){
	glutInit(&argc,argv);
	glutInitWindowSize(640,480);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("24060124130076-Johan Reinhart Calvin");
	glutDisplayFunc(display);
	glutKeyboardFunc(keyboard);
	glClearColor(0.0f,0.0f,1.0f,1.0f);
	glutMainLoop();
	return 0;
}
