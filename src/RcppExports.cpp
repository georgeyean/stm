// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// lhoodcpp
double lhoodcpp(SEXP eta, SEXP beta, SEXP doc_ct, SEXP mu, SEXP siginv);
RcppExport SEXP _stm_lhoodcpp(SEXP etaSEXP, SEXP betaSEXP, SEXP doc_ctSEXP, SEXP muSEXP, SEXP siginvSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type eta(etaSEXP);
    Rcpp::traits::input_parameter< SEXP >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< SEXP >::type doc_ct(doc_ctSEXP);
    Rcpp::traits::input_parameter< SEXP >::type mu(muSEXP);
    Rcpp::traits::input_parameter< SEXP >::type siginv(siginvSEXP);
    rcpp_result_gen = Rcpp::wrap(lhoodcpp(eta, beta, doc_ct, mu, siginv));
    return rcpp_result_gen;
END_RCPP
}
// gradcpp
arma::vec gradcpp(SEXP eta, SEXP beta, const arma::uvec& doc_cts, SEXP mu, SEXP siginv);
RcppExport SEXP _stm_gradcpp(SEXP etaSEXP, SEXP betaSEXP, SEXP doc_ctsSEXP, SEXP muSEXP, SEXP siginvSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type eta(etaSEXP);
    Rcpp::traits::input_parameter< SEXP >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type doc_cts(doc_ctsSEXP);
    Rcpp::traits::input_parameter< SEXP >::type mu(muSEXP);
    Rcpp::traits::input_parameter< SEXP >::type siginv(siginvSEXP);
    rcpp_result_gen = Rcpp::wrap(gradcpp(eta, beta, doc_cts, mu, siginv));
    return rcpp_result_gen;
END_RCPP
}
// hpbcpp
SEXP hpbcpp(SEXP eta, SEXP beta, SEXP doc_ct, SEXP mu, SEXP siginv, SEXP sigmaentropy);
RcppExport SEXP _stm_hpbcpp(SEXP etaSEXP, SEXP betaSEXP, SEXP doc_ctSEXP, SEXP muSEXP, SEXP siginvSEXP, SEXP sigmaentropySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type eta(etaSEXP);
    Rcpp::traits::input_parameter< SEXP >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< SEXP >::type doc_ct(doc_ctSEXP);
    Rcpp::traits::input_parameter< SEXP >::type mu(muSEXP);
    Rcpp::traits::input_parameter< SEXP >::type siginv(siginvSEXP);
    Rcpp::traits::input_parameter< SEXP >::type sigmaentropy(sigmaentropySEXP);
    rcpp_result_gen = Rcpp::wrap(hpbcpp(eta, beta, doc_ct, mu, siginv, sigmaentropy));
    return rcpp_result_gen;
END_RCPP
}
// n_mat_sumcpp
SEXP n_mat_sumcpp(SEXP sum_, SEXP c_, SEXP input_, SEXP t_);
RcppExport SEXP _stm_n_mat_sumcpp(SEXP sum_SEXP, SEXP c_SEXP, SEXP input_SEXP, SEXP t_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type sum_(sum_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type c_(c_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type input_(input_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type t_(t_SEXP);
    rcpp_result_gen = Rcpp::wrap(n_mat_sumcpp(sum_, c_, input_, t_));
    return rcpp_result_gen;
END_RCPP
}
// n_beta_sumcpp
void n_beta_sumcpp(SEXP sum_, const arma::uvec& aw, SEXP c_, SEXP input_);
RcppExport SEXP _stm_n_beta_sumcpp(SEXP sum_SEXP, SEXP awSEXP, SEXP c_SEXP, SEXP input_SEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type sum_(sum_SEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type aw(awSEXP);
    Rcpp::traits::input_parameter< SEXP >::type c_(c_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type input_(input_SEXP);
    n_beta_sumcpp(sum_, aw, c_, input_);
    return R_NilValue;
END_RCPP
}
// n_beta_comb_sumcpp
void n_beta_comb_sumcpp(SEXP sumc_, const arma::uvec& aw, SEXP input_);
RcppExport SEXP _stm_n_beta_comb_sumcpp(SEXP sumc_SEXP, SEXP awSEXP, SEXP input_SEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type sumc_(sumc_SEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type aw(awSEXP);
    Rcpp::traits::input_parameter< SEXP >::type input_(input_SEXP);
    n_beta_comb_sumcpp(sumc_, aw, input_);
    return R_NilValue;
END_RCPP
}
// n_beta_sumcpp_loop
void n_beta_sumcpp_loop(SEXP sum_, const arma::uvec& aw, SEXP c_, SEXP input_, SEXP t_);
RcppExport SEXP _stm_n_beta_sumcpp_loop(SEXP sum_SEXP, SEXP awSEXP, SEXP c_SEXP, SEXP input_SEXP, SEXP t_SEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type sum_(sum_SEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type aw(awSEXP);
    Rcpp::traits::input_parameter< SEXP >::type c_(c_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type input_(input_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type t_(t_SEXP);
    n_beta_sumcpp_loop(sum_, aw, c_, input_, t_);
    return R_NilValue;
END_RCPP
}
// n_beta_sumcpp_at
void n_beta_sumcpp_at(SEXP sum_, const arma::uvec& aw, SEXP c_, SEXP input_, SEXP t_);
RcppExport SEXP _stm_n_beta_sumcpp_at(SEXP sum_SEXP, SEXP awSEXP, SEXP c_SEXP, SEXP input_SEXP, SEXP t_SEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type sum_(sum_SEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type aw(awSEXP);
    Rcpp::traits::input_parameter< SEXP >::type c_(c_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type input_(input_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type t_(t_SEXP);
    n_beta_sumcpp_at(sum_, aw, c_, input_, t_);
    return R_NilValue;
END_RCPP
}
// n_beta_sumcpp_oneloop
void n_beta_sumcpp_oneloop(SEXP sum_, const arma::uvec& aw, SEXP c_, SEXP input_);
RcppExport SEXP _stm_n_beta_sumcpp_oneloop(SEXP sum_SEXP, SEXP awSEXP, SEXP c_SEXP, SEXP input_SEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type sum_(sum_SEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type aw(awSEXP);
    Rcpp::traits::input_parameter< SEXP >::type c_(c_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type input_(input_SEXP);
    n_beta_sumcpp_oneloop(sum_, aw, c_, input_);
    return R_NilValue;
END_RCPP
}
// n_beta_sumcpp_arma
void n_beta_sumcpp_arma(arma::mat& asum, const arma::uvec& aw, arma::mat& ac, arma::mat& ainput, arma::mat& at);
RcppExport SEXP _stm_n_beta_sumcpp_arma(SEXP asumSEXP, SEXP awSEXP, SEXP acSEXP, SEXP ainputSEXP, SEXP atSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type asum(asumSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type aw(awSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type ac(acSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type ainput(ainputSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type at(atSEXP);
    n_beta_sumcpp_arma(asum, aw, ac, ainput, at);
    return R_NilValue;
END_RCPP
}
// n_sigma_sumcpp
void n_sigma_sumcpp(SEXP sum_, SEXP c_, SEXP input_, SEXP t_);
RcppExport SEXP _stm_n_sigma_sumcpp(SEXP sum_SEXP, SEXP c_SEXP, SEXP input_SEXP, SEXP t_SEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type sum_(sum_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type c_(c_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type input_(input_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type t_(t_SEXP);
    n_sigma_sumcpp(sum_, c_, input_, t_);
    return R_NilValue;
END_RCPP
}
// n_sigma_sumcpp_opt
void n_sigma_sumcpp_opt(arma::mat& asum, arma::mat& ac, arma::mat& ainput, arma::mat& at);
RcppExport SEXP _stm_n_sigma_sumcpp_opt(SEXP asumSEXP, SEXP acSEXP, SEXP ainputSEXP, SEXP atSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type asum(asumSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type ac(acSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type ainput(ainputSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type at(atSEXP);
    n_sigma_sumcpp_opt(asum, ac, ainput, at);
    return R_NilValue;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_stm_lhoodcpp", (DL_FUNC) &_stm_lhoodcpp, 5},
    {"_stm_gradcpp", (DL_FUNC) &_stm_gradcpp, 5},
    {"_stm_hpbcpp", (DL_FUNC) &_stm_hpbcpp, 6},
    {"_stm_n_mat_sumcpp", (DL_FUNC) &_stm_n_mat_sumcpp, 4},
    {"_stm_n_beta_sumcpp", (DL_FUNC) &_stm_n_beta_sumcpp, 4},
    {"_stm_n_beta_comb_sumcpp", (DL_FUNC) &_stm_n_beta_comb_sumcpp, 3},
    {"_stm_n_beta_sumcpp_loop", (DL_FUNC) &_stm_n_beta_sumcpp_loop, 5},
    {"_stm_n_beta_sumcpp_at", (DL_FUNC) &_stm_n_beta_sumcpp_at, 5},
    {"_stm_n_beta_sumcpp_oneloop", (DL_FUNC) &_stm_n_beta_sumcpp_oneloop, 4},
    {"_stm_n_beta_sumcpp_arma", (DL_FUNC) &_stm_n_beta_sumcpp_arma, 5},
    {"_stm_n_sigma_sumcpp", (DL_FUNC) &_stm_n_sigma_sumcpp, 4},
    {"_stm_n_sigma_sumcpp_opt", (DL_FUNC) &_stm_n_sigma_sumcpp_opt, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_stm(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
