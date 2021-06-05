#include "CommonTypes.h"

/*!
\brief Read a PGM file.
\param filename Nombre de la imagen a abrir.
\param img Matriz que contrenda los valores de la imagen.
*/
int readPGM(const char *filename, struct Matrix  * img);


/*!
\brief Write a matrix to a PGM file.
\param filename Nombre de la imagen a guardar.
\param img Matriz que contiene los valores de la imagen.
*/
void writePGM(const char *filename, struct Matrix * img);

void ImageGradient(Matrix *Image, Matrix **ImgGrad);
void ImageHessian(Matrix **ImgGrad, Matrix **ImgHessian);
void NormalizeImage(Matrix *Image, Matrix *Normalized, double scale);
void PiNormalizeImage(Matrix *Image, Matrix *Normalized);
int NumNeighbours(Matrix *Image, int row, int col);
double ErrorFunction(Matrix *ImageX, Matrix *ImageY,double lambda);

double PixelNeighbours(Matrix *Image, int row, int col);
void ImageVectorProduct(Matrix *Image, Matrix *Vec, double scalar);
double ImageQuadraticFormProduct(Matrix *Vec, double lambda);
