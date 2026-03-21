#include <GL/glut.h>
static int shoulder = 0, elbow = 0,tangan = 0;
static int jariBw1 = 0,jariMd1 = 0,jariTp1 = 0;
static int jariBw2 = 0,jariMd2 = 0,jariTp2 = 0;
static int jariBw3 = 0,jariMd3 = 0,jariTp3 = 0;
static int jariBw4 = 0,jariMd4 = 0,jariTp4 = 0;
static int jariBw5 = 0,jariMd5 = 0,jariTp5 = 0;

void init(void) {
 glClearColor (0.0, 0.0, 0.0, 0.0);
glShadeModel (GL_FLAT);
}

void display(void) {
	glClear (GL_COLOR_BUFFER_BIT);
	glPushMatrix();
		//Bahu
		glTranslatef (-1.0, 0.0, 0.0); 
		glRotatef ((GLfloat) shoulder, 0.0, 0.0, 1.0);
		glTranslatef (1.0, 0.0, 0.0); 
		glPushMatrix();
			glScalef (2.0, 0.4, 1.0);
			glutWireCube (1.0);
		glPopMatrix();
		//Lengan
		glTranslatef (1.0, 0.0, 0.0);
		glRotatef ((GLfloat) elbow, 0.0, 0.0, 1.0);
		glTranslatef (1.0, 0.0, 0.0); 
		glPushMatrix();
			glScalef (2.0, 0.4, 1.0);
			glutWireCube (1.0);
		glPopMatrix();
		//Tangan
		glTranslatef (1.0, 0.0, 0.0);
		glRotatef ((GLfloat) tangan, 0.0, 0.0, 1.0);
		glTranslatef (0.3, 0.0, 0.0); 
		glPushMatrix();
			glScalef (0.6, 0.4, 1.1);
			glutWireCube (1.0);
		glPopMatrix();
		glTranslatef (0.35, 0.0, 0.0);
		glPushMatrix();
		//Jari 1
		//Segmen bawah jari 1 
			glPushMatrix();
			    glTranslatef (-0.1, 0.2, 0.6);      
			    glRotatef ((GLfloat) jariBw1, 0.0, 0.0, 1.0);
			    glTranslatef (0.09, -0.15, 0.2);
			    glPushMatrix();
			        glScalef (0.4, 0.13, 0.2);
			        glutWireCube (1.0);
			    glPopMatrix();
			// Segmen tengah jari 1
			    glTranslatef (0.2, 0.0, 0.0);      
			    glRotatef ((GLfloat) jariMd1, 0.0, 0.0, 1.0);
			    glTranslatef (0.1, 0.0, 0.0);        
			    glPushMatrix();
			        glScalef (0.2, 0.1, 0.2);      
			        glutWireCube (1.0);
			    glPopMatrix();
			//Segmen atas jari 1
				glTranslatef (0.05, 0.0, 0.0);      
				glRotatef ((GLfloat) jariTp1, 0.0, 0.0, 1.0);
				glTranslatef (0.1, 0.0, 0.0);        
				glPushMatrix();
				    glScalef (0.17, 0.07, 0.2);      
				    glutWireCube (1.0);
				glPopMatrix();
			glPopMatrix();
			//Jari 2
			//Segmen bawah jari 2
			glPushMatrix();
			    glTranslatef (-0.1, 0.2, 0.5);         
			    glRotatef ((GLfloat) jariBw2, 0.0, 0.0, 1.0);
			    glTranslatef (0.18, -0.15, -0.1);
			    glPushMatrix();
			        glScalef (0.4, 0.1, 0.2);
			        glutWireCube (1.0);
			    glPopMatrix();
			    // Segmen tengah jari 2
			    glTranslatef (0.2, 0.0, 0.0);      
			    glRotatef ((GLfloat) jariMd2, 0.0, 0.0, 1.0);
			    glTranslatef (0.1, 0.0, 0.0);        
			    glPushMatrix();
			        glScalef (0.2, 0.1, 0.2);      
			        glutWireCube (1.0);
			    glPopMatrix();
				//Segmen atas jari 2
				glTranslatef (0.05, 0.0, 0.0);      
				glRotatef ((GLfloat) jariTp2, 0.0, 0.0, 1.0);
				glTranslatef (0.1, 0.0, 0.0);        
				glPushMatrix();
				    glScalef (0.17, 0.07, 0.2);      
				    glutWireCube (1.0);
				    glPopMatrix();
				glPopMatrix();
			glPopMatrix();
			//Jari 3
			glPushMatrix();
			    glTranslatef (-0.1, 0.2, 0.3);       
			    glRotatef ((GLfloat) jariBw3, 0.0, 0.0, 1.0);
			    glTranslatef (0.09, -0.15, 0.2);
			    glPushMatrix();
			        glScalef (0.4, 0.13, 0.2);
			        glutWireCube (1.0);
			    glPopMatrix();
			    // Segmen tengah jari 3
			    glTranslatef (0.2, 0.0, 0.0);      
			    glRotatef ((GLfloat) jariMd3, 0.0, 0.0, 1.0);
			    glTranslatef (0.1, 0.0, 0.0);        
			    glPushMatrix();
			        glScalef (0.2, 0.1, 0.2);      
			        glutWireCube (1.0);
			    glPopMatrix();
				//Segmen atas jari 3
				glTranslatef (0.05, 0.0, 0.0);      
				glRotatef ((GLfloat) jariTp3, 0.0, 0.0, 1.0);
				glTranslatef (0.1, 0.0, 0.0);        
				glPushMatrix();
				    glScalef (0.17, 0.07, 0.2);      
				    glutWireCube (1.0);
				    glPopMatrix();
			glPopMatrix();
			//Jari 4
			glPushMatrix();
			//Segmen bawah jari 4
			    glTranslatef (-0.3, 0.0, 0.7);       
			    glRotatef ((GLfloat) jariBw4, 0.0, 1.0, 0.0);
			    glTranslatef (0.09, 0.0, 0.15);
			    glPushMatrix();
			        glScalef (0.4, 0.2, 0.13);
			        glutWireCube (1.0);
			    glPopMatrix();
		   // Segmen tengah jari 4
			    glTranslatef (0.2, 0.0, 0.0);
			    glRotatef ((GLfloat) jariMd4, 0.0, 1.0, 0.0);
			    glTranslatef (0.1, 0.0, 0.0);
			    glPushMatrix();
			        glScalef (0.2, 0.1, 0.2);
			        glutWireCube (1.0);
			    glPopMatrix();
			    // Segmen atas jari 4
			    glTranslatef (0.05, 0.0, 0.0);
			    glRotatef ((GLfloat) jariTp4, 0.0, 1.0, 0.0);
			    glTranslatef (0.1, 0.0, 0.0);
			    glPushMatrix();
			        glScalef (0.17, 0.07, 0.2);
			        glutWireCube (1.0);
			    glPopMatrix();
			glPopMatrix();
			//Jari 4
			glPushMatrix();
			//Segmen jari bawah 5
			    glTranslatef (-0.1, 0.2, 0.1);       
			    glRotatef ((GLfloat) jariBw5, 0.0, 0.0, 1.0);
			    glTranslatef (0.09, -0.15, 0.2);
			    glPushMatrix();
			        glScalef (0.4, 0.13, 0.2);
			        glutWireCube (1.0);
			    glPopMatrix();
			    // Segmen tengah jari 5
			    glTranslatef (0.2, 0.0, 0.0);      
			    glRotatef ((GLfloat) jariMd5, 0.0, 0.0, 1.0);
			    glTranslatef (0.1, 0.0, 0.0);        
			    glPushMatrix();
			        glScalef (0.2, 0.1, 0.2);      
			        glutWireCube (1.0);
			    glPopMatrix();
				//Segmen atas jari 5
				glTranslatef (0.05, 0.0, 0.0);      
				glRotatef ((GLfloat) jariTp5, 0.0, 0.0, 1.0);
				glTranslatef (0.1, 0.0, 0.0);        
				glPushMatrix();
				    glScalef (0.17, 0.07, 0.2);      
				    glutWireCube (1.0);
				    glPopMatrix();
			glPopMatrix();
		glPopMatrix();
	glutSwapBuffers();
}

void reshape (int w, int h) {
 glViewport (0, 0, (GLsizei) w, (GLsizei) h);
glMatrixMode (GL_PROJECTION); glLoadIdentity();
 gluPerspective(65.0, (GLfloat) w/(GLfloat) h, 1.0, 20.0);
glMatrixMode(GL_MODELVIEW); glLoadIdentity();
 glTranslatef (0.0, 0.0, -5.0);
}

void keyboard(unsigned char key, int x, int y) {
switch (key) {
 case 's': shoulder = (shoulder + 5) % 360;
glutPostRedisplay(); break;
 case 'S': shoulder = (shoulder - 5) % 360;
glutPostRedisplay(); break;
 case 'e': elbow = (elbow + 5) % 360;
glutPostRedisplay(); break;
 case 'E': elbow = (elbow - 5) % 360;
glutPostRedisplay(); break;
 case 'D': tangan = (tangan + 5) % 360;
glutPostRedisplay(); break;
 case 'd': tangan = (tangan - 5) % 360;
glutPostRedisplay(); break;
 case 'R':jariBw1 = (jariBw1 + 5) % 360;
glutPostRedisplay(); break;
 case 'r': jariBw1 = (jariBw1 - 5) % 360;
glutPostRedisplay(); break;
 case 'F': jariMd1 = (jariMd1 + 5) % 360;
glutPostRedisplay(); break;
 case 'f': jariMd1 = (jariMd1 - 5) % 360;
glutPostRedisplay(); break;
 case 'V': jariTp1 = (jariTp1 + 5) % 360;
glutPostRedisplay(); break;
 case 'v': jariTp1 = (jariTp1 - 5) % 360;
glutPostRedisplay(); break;
 case 'T': jariBw2 = (jariBw2 + 5) % 360;
glutPostRedisplay(); break;
 case 't': jariBw2 = (jariBw2 - 5) % 360;
glutPostRedisplay(); break;
 case 'G': jariMd2 = (jariMd2 + 5) % 360;
glutPostRedisplay(); break;
 case 'g': jariMd2 = (jariMd2 - 5) % 360;
glutPostRedisplay(); break;
 case 'B': jariTp2 = (jariTp2 + 5) % 360;
glutPostRedisplay(); break;
 case 'b': jariTp2 = (jariTp2 - 5) % 360;
glutPostRedisplay(); break;
 case 'Y': jariBw3 = (jariBw3 + 5) % 360;
glutPostRedisplay(); break;
 case 'y': jariBw3 = (jariBw3 - 5) % 360;
glutPostRedisplay(); break;
 case 'H': jariMd3 = (jariMd3 + 5) % 360;
glutPostRedisplay(); break;
 case 'h': jariMd3 = (jariMd3 - 5) % 360;
glutPostRedisplay(); break;
 case 'N': jariTp3 = (jariTp3 + 5) % 360;
glutPostRedisplay(); break;
 case 'n': jariTp3 = (jariTp3 - 5) % 360;
glutPostRedisplay(); break;
 case 'U': jariBw4 = (jariBw4 + 5) % 360;
glutPostRedisplay(); break;
 case 'u': jariBw4 = (jariBw4 - 5) % 360;
glutPostRedisplay(); break;
 case 'J': jariMd4 = (jariMd4 + 5) % 360;
glutPostRedisplay(); break;
 case 'j': jariMd4 = (jariMd4 - 5) % 360;
glutPostRedisplay(); break;
 case 'M': jariTp4 = (jariTp4 + 5) % 360;
glutPostRedisplay(); break;
 case 'm': jariTp4 = (jariTp4 - 5) % 360;
glutPostRedisplay(); break;
 case 'I': jariBw5 = (jariBw5 + 5) % 360;
glutPostRedisplay(); break;
 case 'i': jariBw5 = (jariBw5 - 5) % 360;
glutPostRedisplay(); break;
 case 'K': jariMd5 = (jariMd5 + 5) % 360;
glutPostRedisplay(); break;
 case 'k': jariMd5 = (jariMd5 - 5) % 360;
glutPostRedisplay(); break;
 case '<': jariTp5 = (jariTp5 + 5) % 360;
glutPostRedisplay(); break;
 case ',': jariTp5 = (jariTp5 - 5) % 360;
glutPostRedisplay(); break;
case 27: exit(0); break;
default: break;
 }
}

int main(int argc, char** argv) {
glutInit(&argc, argv);
 glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
glutInitWindowSize (700, 600);
glutInitWindowPosition (100, 100);
glutCreateWindow ("24060124130076-Johan Reinhart Calvin"); 
init();
 glutDisplayFunc(display);
glutReshapeFunc(reshape);
glutKeyboardFunc(keyboard);
glutMainLoop(); return 0;
} 
