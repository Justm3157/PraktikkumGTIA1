#include <GL/glut.h> 
void Jendela(void){
	//Membersihlan layar dan bla bla bla
glClear(GL_COLOR_BUFFER_BIT);
	//mEMASTIKAN SELURUH PERINTAH TERKEKSUKSI
glFlush();
}
int main (int argc, char* argv[]){
	glutInit(&argc,argv);
	glutInitWindowSize(640,480);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("hijau");
	glutDisplayFunc(Jendela);
	glClearColor(0.0f,1.0f,0.0f,0.0f);
	glutMainLoop();
	return 0;
}



