#include <RcppArmadillo.h>
#include <math.h>
// [[Rcpp::depends("RcppArmadillo")]]

using namespace Rcpp;

// [[Rcpp::export]]

List twoptsbcril(double n1, double n2, double n3, double n4, arma::mat& M){
  
  double logLrnew = -1000000000, logLr;
  double r = 0.0;
  double f1,f2,f3,f4;
  int i=1;
  
  do {
    logLr = logLrnew;
    
    f1 = M(i,1);
    f2 = M(i,2);
    f3 = M(i,3);
    f4 = M(i,4);
    
    logLrnew = log10(pow(f1,n1)*pow(f2,n2)*pow(f3,n3)*pow(f4,n4));
    i = i + 1;
    
  } while (logLrnew > logLr && i < 5000);
  
  double logLrh0 = log10(pow(0.015625, n1)*pow(0.109375, n2)*pow(0.109375, n3)*pow(0.765625, n4));
  
  double LOD = log10(pow(10, logLr)/pow(10,logLrh0));
  
  List R;
  
  R["r"] = M(i,0);
  R["LOD"] = LOD;
  
  return R;
}
