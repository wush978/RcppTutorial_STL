#include <Rcpp.h>
using namespace Rcpp;
//[[Rcpp::export]]
SEXP Xv(S4 m, NumericVector v) {
  // check dimension
  IntegerVector dim(m2.slot("Dim"));
  return dim;
  // matrix-vector product
}

