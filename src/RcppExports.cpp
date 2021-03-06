// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// twoptsbcril
List twoptsbcril(double n1, double n2, double n3, double n4, arma::mat& M);
RcppExport SEXP _onemap_twoptsbcril(SEXP n1SEXP, SEXP n2SEXP, SEXP n3SEXP, SEXP n4SEXP, SEXP MSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type n1(n1SEXP);
    Rcpp::traits::input_parameter< double >::type n2(n2SEXP);
    Rcpp::traits::input_parameter< double >::type n3(n3SEXP);
    Rcpp::traits::input_parameter< double >::type n4(n4SEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type M(MSEXP);
    rcpp_result_gen = Rcpp::wrap(twoptsbcril(n1, n2, n3, n4, M));
    return rcpp_result_gen;
END_RCPP
}

RcppExport SEXP est_hmm_bc(SEXP, SEXP, SEXP, SEXP, SEXP);
RcppExport SEXP est_hmm_f2(SEXP, SEXP, SEXP, SEXP);
RcppExport SEXP est_hmm_out(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
RcppExport SEXP est_rf_bc_wrap(SEXP, SEXP, SEXP, SEXP, SEXP);
RcppExport SEXP est_rf_f2_wrap(SEXP, SEXP, SEXP, SEXP, SEXP);
RcppExport SEXP est_rf_out_wrap(SEXP, SEXP, SEXP, SEXP, SEXP);
RcppExport SEXP get_bins(SEXP, SEXP, SEXP);

static const R_CallMethodDef CallEntries[] = {
    {"_onemap_twoptsbcril", (DL_FUNC) &_onemap_twoptsbcril, 5},
    {"est_hmm_bc",      (DL_FUNC) &est_hmm_bc,      5},
    {"est_hmm_f2",      (DL_FUNC) &est_hmm_f2,      4},
    {"est_hmm_out",     (DL_FUNC) &est_hmm_out,     6},
    {"est_rf_bc_wrap",  (DL_FUNC) &est_rf_bc_wrap,  5},
    {"est_rf_f2_wrap",  (DL_FUNC) &est_rf_f2_wrap,  5},
    {"est_rf_out_wrap", (DL_FUNC) &est_rf_out_wrap, 5},
    {"get_bins",        (DL_FUNC) &get_bins,        3},
    {NULL, NULL, 0}
};

RcppExport void R_init_onemap(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
