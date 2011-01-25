// vectormath.h

#define PI 3.1415926535897932384626433832795
#define FOURPI PI*4.0
#define RADDEG 57.295779513082320876798154814105
#define DEGRAD 0.017453292519943295769236907684886
#define SMALL 0.00000000000001

#define CROSS_PRODUCT(TX,TY,TZ,UX,UY,UZ,VX,VY,VZ) \
  TX = (UY*VZ) - (UZ*VY); \
  TY = (UZ*VX) - (UX*VZ); \
  TZ = (UX*VY) - (UY*VX)

void normalize(double a[3]);
double dot_product(double V[3], double U[3]);
double matrix_to_angle(double U[9]);
int axis_of_rotation(double V[3], double U[9], double theta);
void calcRotationMatrix(double T[9], double V[3], double theta);
//int jacobi3(double *a, double *d, double *v, int *nrot);
int diagEsort(double *mat, double *Emat, double *Evec[], double *Eigenvalue);

void printRotTransInfo(double U[9], double trans[6]);

