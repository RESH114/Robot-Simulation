#include <stdlib.h>
#include <math.h>
#define GLUT
#include <GL/glut.h>
GLUquadricObj* qobj;
int shoulder1 = 0, shoulder2 = 0, shoulder3 = 0, shoulder4 = 0, elbow1 = 0, elbow2 = 0, pivot = 0, ankle2 = 0,antirotate1 = 20, clockrotate2 = 20,tilt = 10,
    heel2 = 0, hip11 = 0, hip12 = 0, hip21 = 0, hip22 = 0, fire = 0, anim = 0, turn = 0, turn1 = 0, lightturn = 0, lightturn1 = 0,elevation = 0.0, distance = 0.0, frame = 3.0;
GLfloat mat_specular[] = {1.0, 0.0, 0.0, 1.0};
GLfloat mat_ambient[] = {1.0, 0.0, 0.0, 1.0};
GLfloat mat_diffuse[] = {1.0, 0.0, 0.0, 1.0};
GLfloat mat_shininess[] = {500};
GLfloat mat_specular2[] = {0.5, 0.35, 0.05};
GLfloat mat_ambient2[] = {0.5, 0.35, 0.05};
GLfloat mat_diffuse2[] = {0.5, 0.35, 0.05};
GLfloat mat_shininess2[] = {500};
GLfloat mat_specular3[] = {0.0, 0.0,1.0};
GLfloat mat_ambient3[] = {0.0, 0.0, 1.0};
GLfloat mat_diffuse3[] = {0.0, 0.0, 1.0};
GLfloat mat_shininess3[] = {500};
void lighting(void)
{
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
    glEnable(GL_NORMALIZE);
}
void shoulder1Add(void)
{
    shoulder1 = (shoulder1 + 5);
}
void shoulder1Subtract(void)
{
    shoulder1 = (shoulder1 - 5);
}
void shoulder2Add(void)
{
    shoulder2 = (shoulder2 + 5);
}
void shoulder2Subtract(void)
{
    shoulder2 = (shoulder2 - 5);
}
void shoulder3Add(void)
{
    shoulder3 = (shoulder3 + 5);
}
void shoulder3Subtract(void)
{
    shoulder3 = (shoulder3 - 5);
}
void shoulder4Add(void)
{
    shoulder4 = (shoulder4 + 5);
}
void shoulder4Subtract(void)
{
    shoulder4 = (shoulder4 - 5);
}
void antirotate1Raise(void)
{
    antirotate1 = (antirotate1 + 5);
}
void antirotate1Lower(void)
{
    antirotate1 = (antirotate1 - 5);
}
void clockrotate2Raise(void)
{
    clockrotate2 = (clockrotate2 + 5);
}
void clockrotate2Lower(void)
{
    clockrotate2 = (clockrotate2 - 5);
}
void FireCannon(void)
{
    fire = (fire + 20);
}
void Heel2Add(void)
{
    heel2 = (heel2 + 5);
}
void Heel2Subtract(void)
{
    heel2 = (heel2 - 5);
}
void Ankle2Add(void)
{
    ankle2 = (ankle2 + 5);
}
void Ankle2Subtract(void)
{
    ankle2 = (ankle2 - 5);
}
void RotateAdd(void)
{
    pivot = (pivot + 5);
}
void RotateSubtract(void)
{
    pivot = (pivot - 10);
}
void MechTiltSubtract(void)
{
    tilt = (tilt - 10);
}
void MechTiltAdd(void)
{
    tilt = (tilt + 10);
}
void elbow1Add(void)
{
    elbow1 = (elbow1 + 5);
}
void elbow1Subtract(void)
{
    elbow1 = (elbow1 - 5);
}
void elbow2Add(void)
{
    elbow2 = (elbow2 + 5);
}
void elbow2Subtract(void)
{
    elbow2 = (elbow2 - 5);
}
void RaiseLeg1Forward(void)
{
    hip11 = (hip11 + 5);
}
void LowerLeg1Backwards(void)
{
    hip11 = (hip11 - 5);
}
void RaiseLeg1Outwards(void)
{
    hip12 = (hip12 + 10);
}
void LowerLeg1Inwards(void)
{
    hip12 = (hip12 - 10);
}
void RaiseLeg2Forward(void)
{
    hip21 = (hip21 + 5);
}
void LowerLeg2Backwards(void)
{
    hip21 = (hip21 - 5);
}
void RaiseLeg2Outwards(void)
{
    hip22 = (hip22 + 10);
}
void LowerLeg2Inwards(void)
{
    hip22 = (hip22 - 10);
}
void TurnRight(void)
{
    turn = (turn - 10);
}
void TurnLeft(void)
{
    turn = (turn + 10);
}
void TurnForwards(void)
{
    turn1 = (turn1 - 10);
}
void TurnBackwards(void)
{
    turn1 = (turn1 + 10);
}
void SetMaterial(GLfloat spec[], GLfloat amb[], GLfloat diff[], GLfloat shin[])
{
    glMaterialfv(GL_FRONT, GL_SPECULAR, spec);
    glMaterialfv(GL_FRONT, GL_SHININESS, shin);
    glMaterialfv(GL_FRONT, GL_AMBIENT, amb);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, diff);
}
void keyboard(unsigned char key, int x, int y)
{
    int i = 0;
    if(key == 27)
        exit (0);
    switch (key)
    {
    case 'q':
    {
        shoulder2Subtract();
        i++;
    }
    break;
    case 'a':
    {
        shoulder2Add();
        i++;
    }
    break;
    case 'w':
    {
        shoulder1Subtract();
        i++;
    }
    break;
    case 's':
    {
        shoulder1Add();
        i++;
    }
    break;
    case '2':
    {
        shoulder3Add();
        i++;
    }
    break;
    case '1':
    {
        shoulder4Add();
        i++;
    }
    break;
    case '4':
    {
        shoulder3Subtract();
        i++;
    }
    break;
    case '3':
    {
        shoulder4Subtract();
        i++;
    }
    break;
    case 'z':
    {
        clockrotate2Raise();
        i++;
    }
    break;
    case 'Z':
    {
        clockrotate2Lower();
        i++;
    }
    break;
    case 'x':
    {
        antirotate1Raise();
        i++;
    }
    break;
    case 'X':
    {
        antirotate1Raise();
        i++;
    }
    break;
    case 'A':
    {
        elbow2Add();
        i++;
    }
    break;
    case 'Q':
    {
        elbow2Subtract();
        i++;
    }
    break;
    case 'S':
    {
        elbow1Add();
        i++;
    }
    break;
    case 'W':
    {
        elbow1Subtract();
        i++;
    }
    break;
    case 'd':
    {
        RotateAdd();
        i++;
    }
    break;
    case 'g':
    {
        RotateSubtract();
        i++;
    }
    break;
    case 'f':
    {
        MechTiltAdd();
        i++;
    }
    break;
    case 'b':
    {
        MechTiltSubtract();
        i++;
    }
    break;
    case 'h':
    {
        RaiseLeg2Forward();
        i++;
    }
    break;
    case 'y':
    {
        LowerLeg2Backwards();
        i++;
    }
    break;
    case 'Y':
    {
        RaiseLeg2Outwards();
        i++;
    }
    break;
    case 'H':
    {
        LowerLeg2Inwards();
        i++;
    }
    break;
    case 'j':
    {
        RaiseLeg1Forward();
        i++;
    }
    break;
    case 'u':
    {
        LowerLeg1Backwards();
        i++;
    }
    break;
    case 'U':
    {
        RaiseLeg1Outwards();
        i++;
    }
    break;
    case 'J':
    {
        LowerLeg1Inwards();
        i++;
    }
    break;
    case 'N':
    {
        Heel2Add();
        i++;
    }
    break;
    case 'n':
    {
        Heel2Subtract();
        i++;
    }
    break;
    case 'k':
    {
        Ankle2Add();
        i++;
    }
    break;
    case 'K':
    {
        Ankle2Subtract();
        i++;
    }
    break;
    }
    glutPostRedisplay();
}
void special(int key, int x, int y)
{
    int i = 0;
    switch(key)
    {
    case GLUT_KEY_RIGHT:
    {
        TurnRight();
        i++;
    }
    break;
    case GLUT_KEY_LEFT:
    {
        TurnLeft();
        i++;
    }
    break;
    case GLUT_KEY_DOWN:
    {
        TurnForwards();
        i++;
    }
    break;
    case GLUT_KEY_UP:
    {
        TurnBackwards();
        i++;
    }
    break;
    case GLUT_KEY_PAGE_UP:
    {
        FireCannon();
        i++;
    }
    break;
    }
    glutPostRedisplay();
}
void Box(float width, float height, float depth)
{
    int j = 0;
    float x = width / 2.0, y = height / 2.0, z = depth / 2.0;
    for(int i = 0; i < 4; i++)
    {
        glRotatef(90.0, 0.0, 0.0, 1.0);
        if(j)
        {
            glBegin(GL_QUADS);
            glNormal3f(-1.0, 0.0, 0.0);
            glVertex3f(-x, y, z);
            glVertex3f(-x, -y, z);
            glVertex3f(-x, -y, -z);
            glVertex3f(-x, y, -z);
            glEnd();
            glBegin(GL_TRIANGLES);
            glNormal3f(0.0, 0.0, 1.0);
            glVertex3f(0.0, 0.0, z);
            glVertex3f(-x, y, z);
            glVertex3f(-x, -y, z);
            glNormal3f(0.0, 0.0, -1.0);
            glVertex3f(0.0, 0.0, -z);
            glVertex3f(-x, -y, -z);
            glVertex3f(-x, y, -z);
            glEnd();
            j = 0;
        }
        else
        {
            glBegin(GL_QUADS);
            glNormal3f(-1.0, 0.0, 0.0);
            glVertex3f(-y, x, z);
            glVertex3f(-y, -x, z);
            glVertex3f(-y, -x, -z);
            glVertex3f(-y, x, -z);
            glEnd();
            glBegin(GL_TRIANGLES);
            glNormal3f(0.0, 0.0, 1.0);
            glVertex3f(0.0, 0.0, z);
            glVertex3f(-y, x, z);
            glVertex3f(-y, -x, z);
            glNormal3f(0.0, 0.0, -1.0);
            glVertex3f(0.0, 0.0, -z);
            glVertex3f(-y, -x, -z);
            glVertex3f(-y, x, -z);
            glEnd();
            j = 1;
        }
    }
}
void Octagon(float side, float height)
{
    float x = 0.64*side, y=side/2.0, z=height/ 2.0;
    for(int i = 0; i < 8; i++)
    {
        glTranslatef(-(x+y), 0.0, 0.0);
        glBegin(GL_QUADS);
        glNormal3f(-1.0, 0.0, 0.0);
        glVertex3f(0.0, -y, z);
        glVertex3f(0.0, y, z);
        glVertex3f(0.0, y, -z);
        glVertex3f(0.0, -y, -z);
        glEnd();
        glTranslatef((x+y), 0.0, 0.0);
        glBegin(GL_TRIANGLES);
        glNormal3f(0.0, 0.0, 1.0);
        glVertex3f(0.0, 0.0, z);
        glVertex3f(-x, -y, z);
        glVertex3f(x, y, z);
        glNormal3f(0.0, 0.0, -1.0);
        glVertex3f(0.0, 0.0, -z);
        glVertex3f(-(x+y), y, -z);
        glVertex3f(-(x+y), -y, -z);
        glEnd();
        glRotatef(45.0, 0.0, 0.0, 1.0);
    }
}
void RobotTop()
{
    glNewList(1, GL_COMPILE);
    SetMaterial(mat_specular, mat_ambient, mat_diffuse, mat_shininess);
    glColor3f(1.0, 0.0, 0.0);
    Box(1.0, 1.0, 3.0);
    glTranslatef(0.75, 0.0, 0.0);
    SetMaterial(mat_specular2, mat_ambient2, mat_diffuse2, mat_shininess2);
    glColor3f(0.0, 0.0, 1.0);
    Box(0.5, 0.6, 2.0);
    glTranslatef(-1.5, 0.0, 0.0);
    Box(0.5, 0.6, 2.0);
    glTranslatef(0.75, 0.0, 0.0);
    glEndList();
}
void RobotHip()
{
    glNewList(2, GL_COMPILE);
    SetMaterial(mat_specular, mat_ambient, mat_diffuse, mat_shininess);
    glColor3f(0.0, 1.0, 0.0);
    Octagon(0.7, 0.5);
    for(int i = 0; i < 2; i++)
    {
        glScalef(-1.0, 1.0, 1.0);
        glTranslatef(1.0, 0.0, 0.0);
        SetMaterial(mat_specular2, mat_ambient2, mat_diffuse2, mat_shininess2);
        glColor3f(0.0, 0.0, 1.0);
        gluSphere(qobj, 0.2, 16, 16);
        glTranslatef(-1.0, 0.0, 0.0);
    }
    glScalef(-1.0, 1.0, 1.0);
    glEndList();
}
void Shoulder()
{
    glNewList(3, GL_COMPILE);
    SetMaterial(mat_specular, mat_ambient, mat_diffuse, mat_shininess);
    glColor3f(0.0, 1.0, 0.0);
    Box(1.0, 0.5, 0.5);
    glTranslatef(0.9, 0.0, 0.0);
    SetMaterial(mat_specular2, mat_ambient2, mat_diffuse2, mat_shininess2);
    glColor3f(0.0, 1.0, 0.0);
    gluSphere(qobj, 0.6, 16, 16);
    glTranslatef(-0.9, 0.0, 0.0);
    glEndList();
}
void UpperArm()
{
    glNewList(4, GL_COMPILE);
    SetMaterial(mat_specular, mat_ambient, mat_diffuse, mat_shininess);
    glColor3f(1.0, 0.0, 0.0);
    Box(1.0, 2.0, 1.0);
    glTranslatef(0.0, -0.95, 0.0);
    glRotatef(90.0, 1.0, 0.0, 0.0);
    SetMaterial(mat_specular2, mat_ambient2, mat_diffuse2, mat_shininess2);
    glColor3f(1.0, 0.0, 0.0);
    gluCylinder(qobj, 0.4, 0.4, 1.5, 16, 10);
    glRotatef(-90.0, 1.0, 0.0, 0.0);
    glTranslatef(-0.4, -1.85, 0.0);
    glRotatef(90.0, 0.0, 1.0, 0.0);
    gluCylinder(qobj, 0.5, 0.5, 0.8, 16, 10);
    glScalef(-1.0, 1.0, 1.0);
    glTranslatef(0.0, 0.0, 0.8);
    gluDisk(qobj, 0.2, 0.5, 16, 10);
    glTranslatef(0.0, 0.0, -0.8);
    glScalef(-1.0, 1.0, 1.0);
    glRotatef(-90.0, 0.0, 1.0, 0.0);
    glTranslatef(0.4, 2.9, 0.0);
    glEndList();
}
void Shooter()
{
    glNewList(9, GL_COMPILE);
    SetMaterial(mat_specular2, mat_ambient2, mat_diffuse2, mat_shininess2);
    glColor3f(0.0, 0.0, 1.0);
    gluCylinder(qobj, 0.5, 0.5, 0.5, 16, 10);
    glTranslatef(0.0, 0.0, 0.5);
    gluDisk(qobj, 0.0, 0.5, 16, 10);
    for(int i = 0; i < 5; i++)
    {
        glRotatef(72.0, 0.0, 0.0, 1.0);
        glTranslatef(0.0, 0.3, 0.0);
        gluCylinder(qobj, 0.15, 0.15, 2.0, 16, 10);
        gluCylinder(qobj, 0.06, 0.06, 2.0, 16, 10);
        glTranslatef(0.0, 0.0, 2.0);
        gluDisk(qobj, 0.1, 0.15, 16, 10);
        gluCylinder(qobj, 0.1, 0.1, 0.1, 16, 5);
        glTranslatef(0.0, 0.0, 0.1);
        gluDisk(qobj, 0.06, 0.1, 16, 5);
        glTranslatef(0.0, -0.3, -2.1);
    }
    glEndList();
}
void ForeArm()
{
    glNewList(5, GL_COMPILE);
    SetMaterial(mat_specular, mat_ambient, mat_diffuse, mat_shininess);
    glColor3f(0.0, 1.0, 1.0);
    for(int i = 0; i < 5; i++)
    {
        glTranslatef(0.0, -0.1, -0.15);
        Box(0.6, 0.8, 0.2);
        glTranslatef(0.0, 0.1, -0.15);
        Box(0.4, 0.6, 0.1);
    }
    glTranslatef(0.0, 0.0, 2.45);
    Box(1.0, 1.0, 2.0);
    glTranslatef(0.0, 0.0, -1.0);
    glEndList();
}
void UpperLeg()
{
    glNewList(6, GL_COMPILE);
    SetMaterial(mat_specular, mat_ambient, mat_diffuse, mat_shininess);
    glColor3f(1.0, 1.0, 0.0);
    glTranslatef(0.0, -1.0, 0.0);
    Box(0.4, 1.0, 0.7);
    glTranslatef(0.0, -0.65, 0.0);
    for(int i = 0; i < 5; i++)
    {
        Box(1.2, 0.3, 1.2);
        glTranslatef(0.0, -0.2, 0.0);
        Box(1.0, 0.1, 1.0);
        glTranslatef(0.0, -0.2, 0.0);
    }
    glTranslatef(0.0, -0.15, -0.4);
    Box(2.0, 0.5, 2.0);
    glTranslatef(0.0, -0.3, -0.2);
    glRotatef(90.0, 1.0, 0.0, 0.0);
    gluCylinder(qobj, 0.6, 0.6, 3.0, 16, 10);
    glRotatef(-90.0, 1.0, 0.0, 0.0);
    glTranslatef(0.0, -1.5, 1.0);
    Box(1.5, 3.0, 0.5);
    glTranslatef(0.0, -1.75, -0.8);
    Box(2.0, 0.5, 2.0);
    glTranslatef(0.0, -0.9, -0.85);
    SetMaterial(mat_specular2, mat_ambient2, mat_diffuse2, mat_shininess2);
    glColor3f(1.0, 0.0, 0.0);
    gluCylinder(qobj, 0.8, 0.8, 1.8, 16, 10);
    for(int i = 0; i < 2; i++)
    {
        if (i)
            glScalef(-1.0, 1.0, 1.0);
        if (i)
            glTranslatef(0.0, 0.0, 1.8);
        gluDisk(qobj, 0.0, 0.8, 16, 10);
        if (i)
            glTranslatef(0.0, 0.0, -1.8);
    }
    glScalef(-1.0, 1.0, 1.0);
    glEndList();
}
void Foot()
{
    glNewList(7, GL_COMPILE);
    SetMaterial(mat_specular2, mat_ambient2, mat_diffuse2, mat_shininess2);
    glColor3f(1.0, 0.0, 0.0);
    glRotatef(90.0, 1.0, 0.0, 0.0);
    Octagon(1.5, 0.6);
    glRotatef(-90.0, 1.0, 0.0, 0.0);
    glEndList();
}
void LowerLeg()
{
    SetMaterial(mat_specular, mat_ambient, mat_diffuse, mat_shininess);
    glColor3f(1.0, 0.0, 0.0);
    for(float k = 0.0; k < 2.0; k++)
    {
        for(float l = 0.0; l < 2.0; l++)
        {
            glPushMatrix();
            glTranslatef(k, 0.0, l);
            SetMaterial(mat_specular, mat_ambient, mat_diffuse, mat_shininess);
            glColor3f(1.0, 0.0, 0.0);
            Box(1.0, 0.5, 1.0);
            glTranslatef(0.0, -0.45, 0.0);
            SetMaterial(mat_specular2, mat_ambient2, mat_diffuse2, mat_shininess2);
            glColor3f(1.0, 0.0, 0.0);
            glutSolidSphere(0.2, 16, 10);
            glRotatef((GLfloat) heel2, 1.0, 0.0, 0.0);
            glTranslatef(0.0, -1.7, 0.0);
            SetMaterial(mat_specular, mat_ambient, mat_diffuse, mat_shininess);
            glColor3f(1.0, 0.0, 0.0);
            Box(0.25, 3.0, 0.25);
            glTranslatef(0.0, -1.7, 0.0);
            SetMaterial(mat_specular2, mat_ambient2, mat_diffuse2, mat_shininess2);
            glColor3f(0.0, 0.0, 1.0);
            glutSolidSphere(0.2, 16, 10);
            glRotatef((GLfloat) - heel2, 1.0, 0.0, 0.0);
            glTranslatef(0.0, -0.45, 0.0);
            SetMaterial(mat_specular, mat_ambient, mat_diffuse, mat_shininess);
            glColor3f(0.0, 1.0, 0.0);
            Box(1.0, 0.5, 1.0);
            if (!k && !l)
            {
                int j;
                glTranslatef(-0.4, -0.8, 0.5);
                glRotatef((GLfloat) ankle2, 1.0, 0.0, 0.0);
                glRotatef(90.0, 0.0, 1.0, 0.0);
                gluCylinder(qobj, 0.8, 0.8, 1.8, 16, 10);
                for (j = 0; j < 2; j++)
                {
                    if (j)
                    {
                        glScalef(-1.0, 1.0, 1.0);
                        glTranslatef(0.0, 0.0, 1.8);
                    }
                    gluDisk(qobj, 0.0, 0.8, 16, 10);
                    if (j)
                        glTranslatef(0.0, 0.0, -1.8);
                }
                glScalef(-1.0, 1.0, 1.0);
                glRotatef(-90.0, 0.0, 1.0, 0.0);
                glTranslatef(0.95, -0.8, 0.0);
                glCallList(7);
            }
            glPopMatrix();
        }
    }
}
void RocketPod()
{
    int i, j, k = 0;
    glNewList(8, GL_COMPILE);
    SetMaterial(mat_specular2, mat_ambient2, mat_diffuse2, mat_shininess2);
    glColor3f(0.0, 1.0, 0.0);
    glScalef(0.4, 0.4, 0.4);
    glRotatef(45.0, 0.0, 0.0, 1.0);
    glTranslatef(1.0, 0.0, 0.0);
    Box(2.0, 0.5, 3.0);
    glTranslatef(1.0, 0.0, 0.0);
    glRotatef(45.0, 0.0, 0.0, 1.0);
    glTranslatef(0.5, 0.0, 0.0);
    Box(1.2, 0.5, 3.0);
    glTranslatef(2.1, 0.0, 0.0);
    glRotatef(-90.0, 0.0, 0.0, 1.0);
    SetMaterial(mat_specular, mat_ambient, mat_diffuse, mat_shininess);
    glColor3f(1.0, 1.0, 0.0);
    Box(2.0, 3.0, 4.0);
    glTranslatef(-0.5, -1.0, 1.3);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            glTranslatef(i, j, 0.6);
            SetMaterial(mat_specular3, mat_ambient3, mat_diffuse3, mat_shininess3);
            glColor3f(1.0, 1.0, 1.0);
            gluCylinder(qobj, 0.4, 0.4, 0.3, 16, 10);
            glTranslatef(0.0, 0.0, 0.3);
            SetMaterial(mat_specular3, mat_ambient3, mat_diffuse3, mat_shininess3);
            glColor3f(0.0, 1.0, 0.0);
            gluCylinder(qobj, 0.4, 0.0, 0.5, 16, 10);
            k++;
            glTranslatef(-i, -j, -0.9);
        }
    }
    glEndList();
}
void DrawMech(void)
{
    glScalef(0.5, 0.5, 0.5);
    glPushMatrix();
    glTranslatef(0.0, -0.75, 0.0);
    glRotatef(tilt, 1.0, 0.0, 0.0);
    glRotatef(90.0, 1.0, 0.0, 0.0);
    glCallList(2);
    glRotatef(-90.0, 1.0, 0.0, 0.0);
    glTranslatef(0.0, 0.75, 0.0);
    glPushMatrix();
    glRotatef(pivot, 0.0, 1.0, 0.0);
    glPushMatrix();
    glCallList(1);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.5, 0.5, 0.0);
    glCallList(8);
    glPopMatrix();
    for(int i = 0; i < 2; i++)
    {
        glPushMatrix();
        if(i)
            glScalef(-1.0, 1.0, 1.0);
        glTranslatef(1.5, 0.0, 0.0);
        glCallList(3);
        glTranslatef(0.9, 0.0, 0.0);
        if(i)
        {
            glRotatef(antirotate1, 0.0, 0.0, 1.0);
            glRotatef(shoulder1, 1.0, 0.0, 0.0);
            glRotatef(shoulder3, 0.0, 1.0, 0.0);
        }
        else
        {
            glRotatef(clockrotate2, 0.0, 0.0, 1.0);
            glRotatef(shoulder2, 1.0, 0.0, 0.0);
            glRotatef(shoulder4, 0.0, 1.0, 0.0);
        }
        glTranslatef(0.0, -1.4, 0.0);
        glCallList(4);
        glTranslatef(0.0, -2.9, 0.0);
        if(i)
            glRotatef(elbow1, 1.0, 0.0, 0.0);
        else
            glRotatef(elbow2, 1.0, 0.0, 0.0);
        glTranslatef(0.0, -0.9, -0.2);
        glCallList(5);
        glPushMatrix();
        glTranslatef(0.0, 0.0, 2.0);
        glRotatef(fire, 0.0, 0.0, 1.0);
        glCallList(9);
        glPopMatrix();
        glPopMatrix();
    }
    glPopMatrix();
    glPopMatrix();
    for(int j = 0; j < 2; j++)
    {
        glPushMatrix();
        if(j)
        {
            glScalef(-0.5, 0.5, 0.5);
        }
        else
        {
            glScalef(0.5, 0.5, 0.5);
        }
        glTranslatef(2.0, -1.5, 0.0);
        if(j)
        {
            glRotatef(hip11, 1.0, 0.0, 0.0);
            glRotatef(hip12, 0.0, 0.0, 1.0);
        }
        else
        {
            glRotatef(hip21, 1.0, 0.0, 0.0);
            glRotatef(hip22, 0.0, 0.0, 1.0);
        }
        glTranslatef(0.0, 0.3, 0.0);
        glPushMatrix();
        glCallList(6);
        glPopMatrix();
        glTranslatef(0.0, -8.3, -0.4);
        if (j)
            glRotatef(-hip12, 0.0, 0.0, 1.0);
        else
            glRotatef(-hip22, 0.0, 0.0, 1.0);
        glTranslatef(-0.5, -0.85, -0.5);
        LowerLeg();
        glPopMatrix();
    }
}
void display(void)
{
    glClearColor(0.25, 0.75, 1.0, 0.0);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glEnable(GL_DEPTH_TEST);
    glPushMatrix();
    glRotatef(turn, 0.0, 1.0, 0.0);
    glRotatef(turn1, 1.0, 0.0, 0.0);
    glPushMatrix();
    lighting();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.0,elevation, 0.0);
    DrawMech();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.0, -5.0, -distance);
    glCallList(10);
    glTranslatef(0.0, 0.0, 10.0);
    glCallList(10);
    glPopMatrix();
    glPopMatrix();
    glFlush();
    glutSwapBuffers();
}
void myinit(void)
{
    qobj = gluNewQuadric();
    RobotTop();
    RobotHip();
    Shoulder();
    RocketPod();
    UpperArm();
    ForeArm();
    UpperLeg();
    Foot();
    Shooter();
}
void myReshape(int w, int h)
{
    glMatrixMode(GL_PROJECTION);
    gluPerspective(65.0, (GLfloat) w / (GLfloat) h, 1.0, 20.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(0.0, 1.2, -5.5);
}
void menu_select(int mode)
{
    switch(mode)
    {
    case 1:
        exit(EXIT_SUCCESS);
    }
}
void null_select(int mode) {}
void glutMenu(void)
{
    int glut_menu[11];
    glut_menu[7] = glutCreateMenu(null_select);
    glutAddMenuEntry("Forward       : q,w", 1);
    glutAddMenuEntry("Backwards     : a,s", 2);
    glutAddMenuEntry("Outwards      : z,x", 3);
    glutAddMenuEntry("Inwards       : Z,X", 4);
    glut_menu[8] = glutCreateMenu(null_select);
    glutAddMenuEntry("Upwards       : Q,W", 1);
    glutAddMenuEntry("Downwards     : A,S", 2);
    glutAddMenuEntry("Outwards      : 1,2", 3);
    glutAddMenuEntry("Inwards       : 3,4", 4);
    glut_menu[9] = glutCreateMenu(null_select);
    glutAddMenuEntry("Forward       : y,u", 0);
    glutAddMenuEntry("Backwards     : h.j", 0);
    glutAddMenuEntry("Outwards      : Y,U", 0);
    glutAddMenuEntry("Inwards       : H,J", 0);
    glut_menu[10] = glutCreateMenu(null_select);
    glutAddMenuEntry("Forward       : n", 0);
    glutAddMenuEntry("Backwards     : N", 0);
    glut_menu[11] = glutCreateMenu(null_select);
    glutAddMenuEntry("Toes up       : K", 0);
    glutAddMenuEntry("Toes down     : k", 0);
    glut_menu[1] = glutCreateMenu(NULL);
    glutAddSubMenu("At the shoulders ", glut_menu[7]);
    glutAddSubMenu("At the elbows", glut_menu[8]);
    glut_menu[2] = glutCreateMenu(null_select);
    glutAddMenuEntry(" : Page_up", 0);
    glut_menu[3] = glutCreateMenu(NULL);
    glutAddSubMenu("At the bottom", glut_menu[9]);
    glutAddSubMenu("At the knees", glut_menu[10]);
    glutAddSubMenu("At the ankles", glut_menu[11]);
    glut_menu[4] = glutCreateMenu(null_select);
    glutAddMenuEntry("Turn left    : d", 0);
    glutAddMenuEntry("Turn right   : g", 0);
    glut_menu[5] = glutCreateMenu(null_select);
    glutAddMenuEntry("Tilt forwards : f", 0);
    glutAddMenuEntry("Tilt backwards: b", 0);
    glut_menu[6] = glutCreateMenu(null_select);
    glutAddMenuEntry("Right  : right arrow", 0);
    glutAddMenuEntry("Left   : left arrow", 0);
    glutAddMenuEntry("Down   : up arrow", 0);
    glutAddMenuEntry("Up     : down arrow", 0);
    glut_menu[0] = glutCreateMenu(NULL);
    glutAddSubMenu("Move the arms ", glut_menu[1]);
    glutAddSubMenu("Fire Shooter", glut_menu[2]);
    glutAddSubMenu("Move the legs", glut_menu[3]);
    glutAddSubMenu("Turn the Robot", glut_menu[4]);
    glutAddSubMenu("Move the upper portion", glut_menu[5]);
    glutAddSubMenu("Rotate the scene", glut_menu[6]);
    glutCreateMenu(menu_select);
    glutAddSubMenu("What should I do...", glut_menu[0]);
    glutAddMenuEntry("Quit", 1);
    glutAttachMenu(GLUT_LEFT_BUTTON);
    glutAttachMenu(GLUT_RIGHT_BUTTON);
}
int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH);
    glutInitWindowSize(1000, 1000);
    glutCreateWindow("ROBOT SIMULATION");
    myinit();
    glutDisplayFunc(display);
    glutReshapeFunc(myReshape);
    glutKeyboardFunc(keyboard);
    glutSpecialFunc(special);
    glutMenu();
    glutMainLoop();
    return 0;
}
