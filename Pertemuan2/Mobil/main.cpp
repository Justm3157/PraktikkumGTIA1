#include <gl/glut.h>
#include <gl/gl.h>
#include <math.h>
float Posisi = 0.0f;      
float Derajat = 0.0f; 
void BodyMobil(){
    glColor3f(0.8,0.2,0.1);
    glBegin(GL_POLYGON);
		glVertex2f(-0.224, 0.172); //A
	    glVertex2f(-0.165, 0.209); //B
	    glVertex2f(0.01, 0.209); //BA
	    glVertex2f(0.307, 0.339);//F
	    glVertex2f(0.462, 0.319);//G
	    glVertex2f(0.557, 0.269);//H
	    glVertex2f(0.660, 0.265);//I
	    glVertex2f(0.694, 0.204);//J
	    glVertex2f(0.694, 0.146);//K
	    glVertex2f(0.712,0.112);//L
	    glVertex2f(0.702,0.079);//M
	    glVertex2f(0.595,0.077);//N
	    glVertex2f(-0.123,0.079);//O
	    glVertex2f(-0.179,0.087);//P
    glEnd();
    glColor3f(0,0,0);     
    glLineWidth(2.0);     
    glBegin(GL_LINE_LOOP);
        glVertex2f(-0.224, 0.172);
        glVertex2f(-0.165, 0.209);
        glVertex2f(0.01, 0.209);
        glVertex2f(0.307, 0.339);
        glVertex2f(0.462, 0.319);
        glVertex2f(0.557, 0.269);
        glVertex2f(0.660, 0.265);
        glVertex2f(0.694, 0.204);
        glVertex2f(0.694, 0.146);
        glVertex2f(0.712,0.112);
        glVertex2f(0.702,0.079);
        glVertex2f(0.595,0.077);
        glVertex2f(-0.123,0.079);
        glVertex2f(-0.179,0.087);
    glEnd();
}

void Ban(){
    #define PI 3.1415926535898
    glColor3f(0.0f, 0.0f, 0.0f);
    float r = 0.08;
    glLineWidth(3.5);
    glBegin(GL_LINE_LOOP);
    int circle_points = 100;
    for(int i=0;i<circle_points;i++){
        float angle = 2*PI*i/circle_points;

        float x = r * cos(angle);
        float y = r * sin(angle);
        glVertex2f(x,y);
    }
    glEnd();
}
void Velg(){
    #define PI 3.1415926535898
    glColor3f(0.8f, 0.8f, 0.8f);
    float r = 0.075;
//    glLineWidth(3.5);
    glBegin(GL_POLYGON);
    int circle_points = 100;
    for(int i=0;i<circle_points;i++){
        float angle = 2*PI*i/circle_points;

        float x = r * cos(angle);
        float y = r * sin(angle);
        glVertex2f(x,y);
    }
    glEnd();
        // Cross pattern
    glColor3f(0,0,0);
    glLineWidth(2);

    glBegin(GL_LINES);
        glVertex2f(-r*1, 0);
        glVertex2f(r*1, 0);
        glVertex2f(0, -r*1);
        glVertex2f(0, r*1);
        glVertex2f(-r*0.7, -r*0.7);
        glVertex2f(r*0.7, r*0.7);
        glVertex2f(-r*0.7, r*0.7);
        glVertex2f(r*0.7, -r*0.7);
    glEnd();
}
void JendelaDriver(){
    glColor3f(0.1,0.1,0.6);
    glBegin(GL_POLYGON);
	    glVertex2f(0.020, 0.231); //U
	    glVertex2f(0.055, 0.267); //V
	    glVertex2f(0.164, 0.316); //W
	    glVertex2f(0.278, 0.327); //Z
	    glVertex2f(0.265, 0.233);//A1
    glEnd();
}

void JendelaPenumpang(){
    glColor3f(0.1,0.1,0.6);
    glBegin(GL_POLYGON);
	    glVertex2f(0.305, 0.327); //B1
	    glVertex2f(0.289, 0.231); //C1
	    glVertex2f(0.450, 0.228); //D1
	    glVertex2f(0.451, 0.264); //E1
	    glVertex2f(0.445, 0.286);//F1
	    glVertex2f(0.421, 0.317); //G1
	    glVertex2f(0.361, 0.325);//H1
    glEnd();
}
void JendelaBelakang(){
    glColor3f(0.1,0.1,0.6);
    glBegin(GL_POLYGON);
	    glVertex2f(0.449, 0.314); //J1
	    glVertex2f(0.471, 0.229); //K1
	    glVertex2f(0.504, 0.246); //L1
	    glVertex2f(0.519, 0.255); //M1
	    glVertex2f(0.534, 0.266);//N1
	    glVertex2f(0.513, 0.279); //O1
	    glVertex2f(0.486, 0.296);//P1
    glEnd();
}

void LampuBelakang(){
    glColor3f(1.0f,0.984f,0.0f);
    glBegin(GL_POLYGON);
    	glVertex2f(0.668, 0.251); //Q1
	    glVertex2f(0.596, 0.251); //R1
	    glVertex2f(0.586, 0.250); //S1
	    glVertex2f(0.585, 0.242); //T1
	    glVertex2f(0.637, 0.223); //U1
	    glVertex2f(0.668, 0.217);//V1
	    glVertex2f(0.694, 0.204);//J
    glEnd();
}

void LampuDepan(){
    glColor3f(1.0f,0.984f,0.0f);
    glBegin(GL_POLYGON);
    	glVertex2f(-0.189, 0.194); //W1
	    glVertex2f(-0.171, 0.196); //Z1
	    glVertex2f(-0.154, 0.192); //A2
	    glVertex2f(-0.154, 0.179); //B2
	    glVertex2f(-0.174, 0.168); //C2
	    glVertex2f(-0.217, 0.176);//D2
    glEnd();
}
void CoverBelakang(){
    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_POLYGON);
		glVertex2f(0.450, 0.228); //D1
		glVertex2f(0.471, 0.229); //K1
		glVertex2f(0.449, 0.314); //J1
		glVertex2f(0.421, 0.317); //G1
		glVertex2f(0.431, 0.305); //I1
		glVertex2f(0.445, 0.286);//F1
		glVertex2f(0.451, 0.264); //E1
    glEnd();
}
void CoverDepan(){
    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_POLYGON);
		glVertex2f(0.278, 0.327); //Z
		glVertex2f(0.265, 0.233);//A1
		glVertex2f(0.289, 0.231); //C1
		glVertex2f(0.305, 0.327); //B1
    glEnd();
}
void GarisDepan(){
	glBegin(GL_LINE_STRIP);
        glVertex2f(0.020, 0.231); //U
        glVertex2f(0.021, 0.222); //E2
        glVertex2f(0.017, 0.212); //F2
        glVertex2f(0.015, 0.199); //G2
        glVertex2f(0.015, 0.181); //H2
        glVertex2f(0.017, 0.161); //I2        
    glEnd();
}
void KapMesin(){
	glBegin(GL_LINE_STRIP);
        glVertex2f(-0.169, 0.206); //E3
        glVertex2f(-0.162, 0.206); //F3
        glVertex2f(-0.132, 0.209); //G3
        glVertex2f(-0.094, 0.212); //H3
        glVertex2f(-0.060, 0.214); //I3
        glVertex2f(-0.024, 0.216); //J3 
		glVertex2f(-0.001, 0.228); //K3        
    glEnd();
}
void GarisTengah(){
	glBegin(GL_LINE_STRIP);
        glVertex2f(0.277, 0.232); //V2
        glVertex2f(0.270, 0.218); //W2
        glVertex2f(0.267, 0.202); //Z2
        glVertex2f(0.266, 0.179); //A3
        glVertex2f(0.267, 0.152); //B3
        glVertex2f(0.270, 0.128); //C3 
		glVertex2f(0.273, 0.094); //D3        
    glEnd();
}
void GarisBawah(){
	glBegin(GL_LINE_STRIP);
        glVertex2f(0.085, 0.088); //L2
        glVertex2f(0.371, 0.093); //N2
        glVertex2f(0.416, 0.093); //O2      
    glEnd();
}
void GarisBelakang(){
	glBegin(GL_LINE_STRIP);
        glVertex2f(0.471, 0.229); //K1
		glVertex2f(0.487, 0.217); //U2
		glVertex2f(0.481, 0.201); //T2  
		glVertex2f(0.468, 0.159); //S2  
    glEnd();
}
void display(void) {
	glClear(GL_COLOR_BUFFER_BIT);
	glPushMatrix();
		glTranslatef(Posisi, 0, 0);
		glPushMatrix();//BODY MOBIL
		    glTranslatef(-0.2, -0.2, 0);  
			BodyMobil();
			JendelaDriver();
			JendelaPenumpang();
			JendelaBelakang();
			LampuBelakang();
			LampuDepan();
			CoverBelakang();
			CoverDepan();
			GarisDepan();
			KapMesin();
			GarisTengah();
			GarisBawah();
			GarisBelakang();
		glPopMatrix();

		glPushMatrix();//Ban Depan
			glTranslatef(-0.2, -0.12, 0);
			glRotatef(Derajat,0,0,1);
			Ban();
			Velg();
		glPopMatrix();
		glPushMatrix();//Ban Belakang
			glTranslatef(0.3, -0.12, 0);
			glRotatef(Derajat,0,0,1);
			Ban();
			Velg();
		glPopMatrix();
	glPopMatrix();
    glFlush();
}

void init(){
    glClearColor(1,1,1,1);
    gluOrtho2D(-1,1,-1,1);
}
void update(){
    Posisi -= 0.002f;      
    Derajat -= 2.0f;    
    if(Posisi < -1.2f)      
        Posisi = 1.2f;
    glutPostRedisplay();
}

int main(int argc, char** argv){
    glutInit(&argc,argv);
    glutInitWindowSize(800,600);
    glutCreateWindow("24060124130076-Johan Reinhart Calvin");
    init();
    glutDisplayFunc(display);
    glutIdleFunc(update);
    glutMainLoop();
}
