#ifndef INC_MATRIXTYPE_H
#define INC_MATRIXTYPE_H
#include "DataSet.h"
#include "Action.h"
class MatrixType : public DataSet, public Action {
  public:
    enum matrixMode {
      MATRIX_NULL=0, MATRIX_DIST,      MATRIX_COVAR, MATRIX_MWCOVAR,
      MATRIX_CORREL, MATRIX_DISTCOVAR, MATRIX_IDEA,  MATRIX_IRED
    };

    MatrixType();

    int Init(ArgList&);
  private:
    matrixMode type_;
    double* vect_;
    double* vect2_;
    double* mat_;
    int vectsize_;
    int matsize_;
    AtomMask mask1_;
    AtomMask mask2_;
    int mask1tot_;
    int mask2tot_;
    int snap_;

    // Only needed by action
    int start_;
    int stop_;
    int offset_;
    int order_;
    enum OutputType { BYATOM=0, BYRESIDUE, BYMASK };
    OutputType outtype_;

    int init();
};
#endif
