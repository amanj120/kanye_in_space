#include <stdio.h>
#include <math.h>

typedef struct album_cover{
    //U00 - U22 are the orthonormal basis
    //U0 is points to right, U1 points to top, U2 is orthogonal
    //U starts off as I (identity matrix)
    double U[3][3]
    //P0-P3 are the <x,y,z> position vector
    double P[3]
    //pixelmap stores the colors of the album cover
    int * pixelmap;  
} cover;

//moves the album cover in space
void move(cover * c, double dx, double dy, double dz){
    c -> P[0] += dx;
    c -> P[1] += dy;
    c -> P[2] += dz;
}


void rotate(cover * c, double dx, double dy, double dz){
    //dx,dy,dz correspond to radians to rotate about the x,y,z axes
    //have to create rotation matrices for all three of them and 
}

// does A *= B, assume both A and B are 3x3 matrices
void mat_mul(double ** A, double ** B){

} 

//does B = AB, A is a 3x3 matrix, B is a 3x1 vector
void vec_mul(double ** A, double * B){

}

//does B = A^-1, A is a 3x3 matrix
void mat_inv(double ** A, double ** B){

}

//does line plane intersection. Line given as point-vector, plane given as point, orthonormal
void lpi(double * p_line, double * p_plane, double * v, double * n){

}

int main(){
    printf("Hello World");
}