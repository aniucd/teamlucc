// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// threshold_Huang
int threshold_Huang(arma::ivec& data);
RcppExport SEXP teamlucc_threshold_Huang(SEXP dataSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< arma::ivec& >::type data(dataSEXP );
        int __result = threshold_Huang(data);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// calc_chg_dir
arma::ivec calc_chg_dir(arma::mat t1p, arma::mat t2p);
RcppExport SEXP teamlucc_calc_chg_dir(SEXP t1pSEXP, SEXP t2pSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< arma::mat >::type t1p(t1pSEXP );
        Rcpp::traits::input_parameter< arma::mat >::type t2p(t2pSEXP );
        arma::ivec __result = calc_chg_dir(t1p, t2p);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// cloud_fill
arma::mat cloud_fill(arma::mat cloudy, arma::mat& clear, arma::ivec& cloud_mask, arma::ivec dims, int num_class, int min_pixel, int max_pixel, int cloud_nbh, int DN_min, int DN_max, bool verbose = false);
RcppExport SEXP teamlucc_cloud_fill(SEXP cloudySEXP, SEXP clearSEXP, SEXP cloud_maskSEXP, SEXP dimsSEXP, SEXP num_classSEXP, SEXP min_pixelSEXP, SEXP max_pixelSEXP, SEXP cloud_nbhSEXP, SEXP DN_minSEXP, SEXP DN_maxSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< arma::mat >::type cloudy(cloudySEXP );
        Rcpp::traits::input_parameter< arma::mat& >::type clear(clearSEXP );
        Rcpp::traits::input_parameter< arma::ivec& >::type cloud_mask(cloud_maskSEXP );
        Rcpp::traits::input_parameter< arma::ivec >::type dims(dimsSEXP );
        Rcpp::traits::input_parameter< int >::type num_class(num_classSEXP );
        Rcpp::traits::input_parameter< int >::type min_pixel(min_pixelSEXP );
        Rcpp::traits::input_parameter< int >::type max_pixel(max_pixelSEXP );
        Rcpp::traits::input_parameter< int >::type cloud_nbh(cloud_nbhSEXP );
        Rcpp::traits::input_parameter< int >::type DN_min(DN_minSEXP );
        Rcpp::traits::input_parameter< int >::type DN_max(DN_maxSEXP );
        Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP );
        arma::mat __result = cloud_fill(cloudy, clear, cloud_mask, dims, num_class, min_pixel, max_pixel, cloud_nbh, DN_min, DN_max, verbose);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// cloud_fill_simple
arma::mat cloud_fill_simple(arma::mat cloudy, arma::mat& clear, arma::ivec& cloud_mask, arma::ivec dims, int num_class, int cloud_nbh, int DN_min, int DN_max, bool verbose = false);
RcppExport SEXP teamlucc_cloud_fill_simple(SEXP cloudySEXP, SEXP clearSEXP, SEXP cloud_maskSEXP, SEXP dimsSEXP, SEXP num_classSEXP, SEXP cloud_nbhSEXP, SEXP DN_minSEXP, SEXP DN_maxSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< arma::mat >::type cloudy(cloudySEXP );
        Rcpp::traits::input_parameter< arma::mat& >::type clear(clearSEXP );
        Rcpp::traits::input_parameter< arma::ivec& >::type cloud_mask(cloud_maskSEXP );
        Rcpp::traits::input_parameter< arma::ivec >::type dims(dimsSEXP );
        Rcpp::traits::input_parameter< int >::type num_class(num_classSEXP );
        Rcpp::traits::input_parameter< int >::type cloud_nbh(cloud_nbhSEXP );
        Rcpp::traits::input_parameter< int >::type DN_min(DN_minSEXP );
        Rcpp::traits::input_parameter< int >::type DN_max(DN_maxSEXP );
        Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP );
        arma::mat __result = cloud_fill_simple(cloudy, clear, cloud_mask, dims, num_class, cloud_nbh, DN_min, DN_max, verbose);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
