// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// convolve_from_c
Rcpp::NumericVector convolve_from_c(const Rcpp::NumericVector& a, const Rcpp::NumericVector& b);
RcppExport SEXP _cRcpp_convolve_from_c(SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type a(aSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(convolve_from_c(a, b));
    return rcpp_result_gen;
END_RCPP
}
// convolve_cpp
Rcpp::NumericVector convolve_cpp(const Rcpp::NumericVector& a, const Rcpp::NumericVector& b);
RcppExport SEXP _cRcpp_convolve_cpp(SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type a(aSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(convolve_cpp(a, b));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_cRcpp_convolve_from_c", (DL_FUNC) &_cRcpp_convolve_from_c, 2},
    {"_cRcpp_convolve_cpp", (DL_FUNC) &_cRcpp_convolve_cpp, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_cRcpp(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
