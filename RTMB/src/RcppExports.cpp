// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>
#include "TMB.h"

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// valid
bool valid(Rcpp::ComplexVector x);
RcppExport SEXP _RTMB_valid(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(valid(x));
    return rcpp_result_gen;
END_RCPP
}
// ad_context
bool ad_context();
RcppExport SEXP _RTMB_ad_context() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(ad_context());
    return rcpp_result_gen;
END_RCPP
}
// advec
Rcpp::ComplexVector advec(const Rcpp::NumericVector& x);
RcppExport SEXP _RTMB_advec(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(advec(x));
    return rcpp_result_gen;
END_RCPP
}
// dependent
Rcpp::ComplexVector dependent(const Rcpp::ComplexVector& x);
RcppExport SEXP _RTMB_dependent(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::ComplexVector& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(dependent(x));
    return rcpp_result_gen;
END_RCPP
}
// independent
Rcpp::ComplexVector independent(const Rcpp::ComplexVector& x);
RcppExport SEXP _RTMB_independent(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::ComplexVector& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(independent(x));
    return rcpp_result_gen;
END_RCPP
}
// Arith2
Rcpp::ComplexVector Arith2(const Rcpp::ComplexVector& x, const Rcpp::ComplexVector& y, std::string op);
RcppExport SEXP _RTMB_Arith2(SEXP xSEXP, SEXP ySEXP, SEXP opSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::ComplexVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const Rcpp::ComplexVector& >::type y(ySEXP);
    Rcpp::traits::input_parameter< std::string >::type op(opSEXP);
    rcpp_result_gen = Rcpp::wrap(Arith2(x, y, op));
    return rcpp_result_gen;
END_RCPP
}
// Math1
Rcpp::ComplexVector Math1(const Rcpp::ComplexVector& x, std::string op);
RcppExport SEXP _RTMB_Math1(SEXP xSEXP, SEXP opSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::ComplexVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::string >::type op(opSEXP);
    rcpp_result_gen = Rcpp::wrap(Math1(x, op));
    return rcpp_result_gen;
END_RCPP
}
// Reduce1
Rcpp::ComplexVector Reduce1(const Rcpp::ComplexVector& x, std::string op);
RcppExport SEXP _RTMB_Reduce1(SEXP xSEXP, SEXP opSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::ComplexVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::string >::type op(opSEXP);
    rcpp_result_gen = Rcpp::wrap(Reduce1(x, op));
    return rcpp_result_gen;
END_RCPP
}
// getValues
Rcpp::NumericVector getValues(const Rcpp::ComplexVector& x);
RcppExport SEXP _RTMB_getValues(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::ComplexVector& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(getValues(x));
    return rcpp_result_gen;
END_RCPP
}
// getVariables
Rcpp::LogicalVector getVariables(const Rcpp::ComplexVector& x);
RcppExport SEXP _RTMB_getVariables(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::ComplexVector& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(getVariables(x));
    return rcpp_result_gen;
END_RCPP
}
// dbgprint
void dbgprint(const Rcpp::ComplexVector& x);
RcppExport SEXP _RTMB_dbgprint(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::ComplexVector& >::type x(xSEXP);
    dbgprint(x);
    return R_NilValue;
END_RCPP
}
// matmul
Rcpp::ComplexVector matmul(const Rcpp::ComplexMatrix& x, const Rcpp::ComplexMatrix& y, std::string method);
RcppExport SEXP _RTMB_matmul(SEXP xSEXP, SEXP ySEXP, SEXP methodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::ComplexMatrix& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const Rcpp::ComplexMatrix& >::type y(ySEXP);
    Rcpp::traits::input_parameter< std::string >::type method(methodSEXP);
    rcpp_result_gen = Rcpp::wrap(matmul(x, y, method));
    return rcpp_result_gen;
END_RCPP
}
// dmvnorm0
Rcpp::ComplexVector dmvnorm0(const Rcpp::ComplexMatrix& x, const Rcpp::ComplexMatrix& s, bool give_log);
RcppExport SEXP _RTMB_dmvnorm0(SEXP xSEXP, SEXP sSEXP, SEXP give_logSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::ComplexMatrix& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const Rcpp::ComplexMatrix& >::type s(sSEXP);
    Rcpp::traits::input_parameter< bool >::type give_log(give_logSEXP);
    rcpp_result_gen = Rcpp::wrap(dmvnorm0(x, s, give_log));
    return rcpp_result_gen;
END_RCPP
}
// dgmrf0
Rcpp::ComplexVector dgmrf0(const Rcpp::ComplexMatrix& x, Rcpp::S4 q, bool give_log);
RcppExport SEXP _RTMB_dgmrf0(SEXP xSEXP, SEXP qSEXP, SEXP give_logSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::ComplexMatrix& >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::S4 >::type q(qSEXP);
    Rcpp::traits::input_parameter< bool >::type give_log(give_logSEXP);
    rcpp_result_gen = Rcpp::wrap(dgmrf0(x, q, give_log));
    return rcpp_result_gen;
END_RCPP
}
// SparseArith2
Rcpp::S4 SparseArith2(SEXP x, SEXP y, std::string op);
RcppExport SEXP _RTMB_SparseArith2(SEXP xSEXP, SEXP ySEXP, SEXP opSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< SEXP >::type y(ySEXP);
    Rcpp::traits::input_parameter< std::string >::type op(opSEXP);
    rcpp_result_gen = Rcpp::wrap(SparseArith2(x, y, op));
    return rcpp_result_gen;
END_RCPP
}
// distr_dexp
Rcpp::ComplexVector distr_dexp(Rcpp::ComplexVector x, Rcpp::ComplexVector rate, bool give_log);
RcppExport SEXP _RTMB_distr_dexp(SEXP xSEXP, SEXP rateSEXP, SEXP give_logSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type rate(rateSEXP);
    Rcpp::traits::input_parameter< bool >::type give_log(give_logSEXP);
    rcpp_result_gen = Rcpp::wrap(distr_dexp(x, rate, give_log));
    return rcpp_result_gen;
END_RCPP
}
// distr_dweibull
Rcpp::ComplexVector distr_dweibull(Rcpp::ComplexVector x, Rcpp::ComplexVector shape, Rcpp::ComplexVector scale, bool give_log);
RcppExport SEXP _RTMB_distr_dweibull(SEXP xSEXP, SEXP shapeSEXP, SEXP scaleSEXP, SEXP give_logSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type shape(shapeSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type scale(scaleSEXP);
    Rcpp::traits::input_parameter< bool >::type give_log(give_logSEXP);
    rcpp_result_gen = Rcpp::wrap(distr_dweibull(x, shape, scale, give_log));
    return rcpp_result_gen;
END_RCPP
}
// distr_dbinom
Rcpp::ComplexVector distr_dbinom(Rcpp::ComplexVector k, Rcpp::ComplexVector size, Rcpp::ComplexVector prob, bool give_log);
RcppExport SEXP _RTMB_distr_dbinom(SEXP kSEXP, SEXP sizeSEXP, SEXP probSEXP, SEXP give_logSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type k(kSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type size(sizeSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type prob(probSEXP);
    Rcpp::traits::input_parameter< bool >::type give_log(give_logSEXP);
    rcpp_result_gen = Rcpp::wrap(distr_dbinom(k, size, prob, give_log));
    return rcpp_result_gen;
END_RCPP
}
// distr_dbinom_robust
Rcpp::ComplexVector distr_dbinom_robust(Rcpp::ComplexVector k, Rcpp::ComplexVector size, Rcpp::ComplexVector logit_p, bool give_log);
RcppExport SEXP _RTMB_distr_dbinom_robust(SEXP kSEXP, SEXP sizeSEXP, SEXP logit_pSEXP, SEXP give_logSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type k(kSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type size(sizeSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type logit_p(logit_pSEXP);
    Rcpp::traits::input_parameter< bool >::type give_log(give_logSEXP);
    rcpp_result_gen = Rcpp::wrap(distr_dbinom_robust(k, size, logit_p, give_log));
    return rcpp_result_gen;
END_RCPP
}
// distr_dbeta
Rcpp::ComplexVector distr_dbeta(Rcpp::ComplexVector x, Rcpp::ComplexVector shape1, Rcpp::ComplexVector shape2, bool give_log);
RcppExport SEXP _RTMB_distr_dbeta(SEXP xSEXP, SEXP shape1SEXP, SEXP shape2SEXP, SEXP give_logSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type shape1(shape1SEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type shape2(shape2SEXP);
    Rcpp::traits::input_parameter< bool >::type give_log(give_logSEXP);
    rcpp_result_gen = Rcpp::wrap(distr_dbeta(x, shape1, shape2, give_log));
    return rcpp_result_gen;
END_RCPP
}
// distr_df
Rcpp::ComplexVector distr_df(Rcpp::ComplexVector x, Rcpp::ComplexVector df1, Rcpp::ComplexVector df2, bool give_log);
RcppExport SEXP _RTMB_distr_df(SEXP xSEXP, SEXP df1SEXP, SEXP df2SEXP, SEXP give_logSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type df1(df1SEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type df2(df2SEXP);
    Rcpp::traits::input_parameter< bool >::type give_log(give_logSEXP);
    rcpp_result_gen = Rcpp::wrap(distr_df(x, df1, df2, give_log));
    return rcpp_result_gen;
END_RCPP
}
// distr_dlogis
Rcpp::ComplexVector distr_dlogis(Rcpp::ComplexVector x, Rcpp::ComplexVector location, Rcpp::ComplexVector scale, bool give_log);
RcppExport SEXP _RTMB_distr_dlogis(SEXP xSEXP, SEXP locationSEXP, SEXP scaleSEXP, SEXP give_logSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type location(locationSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type scale(scaleSEXP);
    Rcpp::traits::input_parameter< bool >::type give_log(give_logSEXP);
    rcpp_result_gen = Rcpp::wrap(distr_dlogis(x, location, scale, give_log));
    return rcpp_result_gen;
END_RCPP
}
// distr_dsn
Rcpp::ComplexVector distr_dsn(Rcpp::ComplexVector x, Rcpp::ComplexVector alpha, bool give_log);
RcppExport SEXP _RTMB_distr_dsn(SEXP xSEXP, SEXP alphaSEXP, SEXP give_logSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< bool >::type give_log(give_logSEXP);
    rcpp_result_gen = Rcpp::wrap(distr_dsn(x, alpha, give_log));
    return rcpp_result_gen;
END_RCPP
}
// distr_dt
Rcpp::ComplexVector distr_dt(Rcpp::ComplexVector x, Rcpp::ComplexVector df, bool give_log);
RcppExport SEXP _RTMB_distr_dt(SEXP xSEXP, SEXP dfSEXP, SEXP give_logSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type df(dfSEXP);
    Rcpp::traits::input_parameter< bool >::type give_log(give_logSEXP);
    rcpp_result_gen = Rcpp::wrap(distr_dt(x, df, give_log));
    return rcpp_result_gen;
END_RCPP
}
// distr_dSHASHo
Rcpp::ComplexVector distr_dSHASHo(Rcpp::ComplexVector x, Rcpp::ComplexVector mu, Rcpp::ComplexVector sigma, Rcpp::ComplexVector nu, Rcpp::ComplexVector tau, bool give_log);
RcppExport SEXP _RTMB_distr_dSHASHo(SEXP xSEXP, SEXP muSEXP, SEXP sigmaSEXP, SEXP nuSEXP, SEXP tauSEXP, SEXP give_logSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type mu(muSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type nu(nuSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< bool >::type give_log(give_logSEXP);
    rcpp_result_gen = Rcpp::wrap(distr_dSHASHo(x, mu, sigma, nu, tau, give_log));
    return rcpp_result_gen;
END_RCPP
}
// distr_dtweedie
Rcpp::ComplexVector distr_dtweedie(Rcpp::ComplexVector y, Rcpp::ComplexVector mu, Rcpp::ComplexVector phi, Rcpp::ComplexVector p, bool give_log);
RcppExport SEXP _RTMB_distr_dtweedie(SEXP ySEXP, SEXP muSEXP, SEXP phiSEXP, SEXP pSEXP, SEXP give_logSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type mu(muSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type phi(phiSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type p(pSEXP);
    Rcpp::traits::input_parameter< bool >::type give_log(give_logSEXP);
    rcpp_result_gen = Rcpp::wrap(distr_dtweedie(y, mu, phi, p, give_log));
    return rcpp_result_gen;
END_RCPP
}
// distr_dnorm
Rcpp::ComplexVector distr_dnorm(Rcpp::ComplexVector x, Rcpp::ComplexVector mean, Rcpp::ComplexVector sd, bool give_log);
RcppExport SEXP _RTMB_distr_dnorm(SEXP xSEXP, SEXP meanSEXP, SEXP sdSEXP, SEXP give_logSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type sd(sdSEXP);
    Rcpp::traits::input_parameter< bool >::type give_log(give_logSEXP);
    rcpp_result_gen = Rcpp::wrap(distr_dnorm(x, mean, sd, give_log));
    return rcpp_result_gen;
END_RCPP
}
// distr_dnbinom
Rcpp::ComplexVector distr_dnbinom(Rcpp::ComplexVector x, Rcpp::ComplexVector size, Rcpp::ComplexVector prob, bool give_log);
RcppExport SEXP _RTMB_distr_dnbinom(SEXP xSEXP, SEXP sizeSEXP, SEXP probSEXP, SEXP give_logSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type size(sizeSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type prob(probSEXP);
    Rcpp::traits::input_parameter< bool >::type give_log(give_logSEXP);
    rcpp_result_gen = Rcpp::wrap(distr_dnbinom(x, size, prob, give_log));
    return rcpp_result_gen;
END_RCPP
}
// distr_dnbinom2
Rcpp::ComplexVector distr_dnbinom2(Rcpp::ComplexVector x, Rcpp::ComplexVector mu, Rcpp::ComplexVector var, bool give_log);
RcppExport SEXP _RTMB_distr_dnbinom2(SEXP xSEXP, SEXP muSEXP, SEXP varSEXP, SEXP give_logSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type mu(muSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type var(varSEXP);
    Rcpp::traits::input_parameter< bool >::type give_log(give_logSEXP);
    rcpp_result_gen = Rcpp::wrap(distr_dnbinom2(x, mu, var, give_log));
    return rcpp_result_gen;
END_RCPP
}
// distr_dnbinom_robust
Rcpp::ComplexVector distr_dnbinom_robust(Rcpp::ComplexVector x, Rcpp::ComplexVector log_mu, Rcpp::ComplexVector log_var_minus_mu, bool give_log);
RcppExport SEXP _RTMB_distr_dnbinom_robust(SEXP xSEXP, SEXP log_muSEXP, SEXP log_var_minus_muSEXP, SEXP give_logSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type log_mu(log_muSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type log_var_minus_mu(log_var_minus_muSEXP);
    Rcpp::traits::input_parameter< bool >::type give_log(give_logSEXP);
    rcpp_result_gen = Rcpp::wrap(distr_dnbinom_robust(x, log_mu, log_var_minus_mu, give_log));
    return rcpp_result_gen;
END_RCPP
}
// distr_dpois
Rcpp::ComplexVector distr_dpois(Rcpp::ComplexVector x, Rcpp::ComplexVector lambda, bool give_log);
RcppExport SEXP _RTMB_distr_dpois(SEXP xSEXP, SEXP lambdaSEXP, SEXP give_logSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< bool >::type give_log(give_logSEXP);
    rcpp_result_gen = Rcpp::wrap(distr_dpois(x, lambda, give_log));
    return rcpp_result_gen;
END_RCPP
}
// distr_dgamma
Rcpp::ComplexVector distr_dgamma(Rcpp::ComplexVector y, Rcpp::ComplexVector shape, Rcpp::ComplexVector scale, bool give_log);
RcppExport SEXP _RTMB_distr_dgamma(SEXP ySEXP, SEXP shapeSEXP, SEXP scaleSEXP, SEXP give_logSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type shape(shapeSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type scale(scaleSEXP);
    Rcpp::traits::input_parameter< bool >::type give_log(give_logSEXP);
    rcpp_result_gen = Rcpp::wrap(distr_dgamma(y, shape, scale, give_log));
    return rcpp_result_gen;
END_RCPP
}
// distr_dlgamma
Rcpp::ComplexVector distr_dlgamma(Rcpp::ComplexVector y, Rcpp::ComplexVector shape, Rcpp::ComplexVector scale, bool give_log);
RcppExport SEXP _RTMB_distr_dlgamma(SEXP ySEXP, SEXP shapeSEXP, SEXP scaleSEXP, SEXP give_logSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type shape(shapeSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type scale(scaleSEXP);
    Rcpp::traits::input_parameter< bool >::type give_log(give_logSEXP);
    rcpp_result_gen = Rcpp::wrap(distr_dlgamma(y, shape, scale, give_log));
    return rcpp_result_gen;
END_RCPP
}
// distr_dzipois
Rcpp::ComplexVector distr_dzipois(Rcpp::ComplexVector x, Rcpp::ComplexVector lambda, Rcpp::ComplexVector zip, bool give_log);
RcppExport SEXP _RTMB_distr_dzipois(SEXP xSEXP, SEXP lambdaSEXP, SEXP zipSEXP, SEXP give_logSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type zip(zipSEXP);
    Rcpp::traits::input_parameter< bool >::type give_log(give_logSEXP);
    rcpp_result_gen = Rcpp::wrap(distr_dzipois(x, lambda, zip, give_log));
    return rcpp_result_gen;
END_RCPP
}
// distr_pnorm_approx
Rcpp::ComplexVector distr_pnorm_approx(Rcpp::ComplexVector x);
RcppExport SEXP _RTMB_distr_pnorm_approx(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(distr_pnorm_approx(x));
    return rcpp_result_gen;
END_RCPP
}
// distr_pnorm
Rcpp::ComplexVector distr_pnorm(Rcpp::ComplexVector q, Rcpp::ComplexVector mean, Rcpp::ComplexVector sd);
RcppExport SEXP _RTMB_distr_pnorm(SEXP qSEXP, SEXP meanSEXP, SEXP sdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type q(qSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type sd(sdSEXP);
    rcpp_result_gen = Rcpp::wrap(distr_pnorm(q, mean, sd));
    return rcpp_result_gen;
END_RCPP
}
// distr_pgamma
Rcpp::ComplexVector distr_pgamma(Rcpp::ComplexVector q, Rcpp::ComplexVector shape, Rcpp::ComplexVector scale);
RcppExport SEXP _RTMB_distr_pgamma(SEXP qSEXP, SEXP shapeSEXP, SEXP scaleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type q(qSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type shape(shapeSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type scale(scaleSEXP);
    rcpp_result_gen = Rcpp::wrap(distr_pgamma(q, shape, scale));
    return rcpp_result_gen;
END_RCPP
}
// distr_ppois
Rcpp::ComplexVector distr_ppois(Rcpp::ComplexVector q, Rcpp::ComplexVector lambda);
RcppExport SEXP _RTMB_distr_ppois(SEXP qSEXP, SEXP lambdaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type q(qSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type lambda(lambdaSEXP);
    rcpp_result_gen = Rcpp::wrap(distr_ppois(q, lambda));
    return rcpp_result_gen;
END_RCPP
}
// distr_pexp
Rcpp::ComplexVector distr_pexp(Rcpp::ComplexVector x, Rcpp::ComplexVector rate);
RcppExport SEXP _RTMB_distr_pexp(SEXP xSEXP, SEXP rateSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type rate(rateSEXP);
    rcpp_result_gen = Rcpp::wrap(distr_pexp(x, rate));
    return rcpp_result_gen;
END_RCPP
}
// distr_pweibull
Rcpp::ComplexVector distr_pweibull(Rcpp::ComplexVector x, Rcpp::ComplexVector shape, Rcpp::ComplexVector scale);
RcppExport SEXP _RTMB_distr_pweibull(SEXP xSEXP, SEXP shapeSEXP, SEXP scaleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type shape(shapeSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type scale(scaleSEXP);
    rcpp_result_gen = Rcpp::wrap(distr_pweibull(x, shape, scale));
    return rcpp_result_gen;
END_RCPP
}
// distr_pbeta
Rcpp::ComplexVector distr_pbeta(Rcpp::ComplexVector q, Rcpp::ComplexVector shape1, Rcpp::ComplexVector shape2);
RcppExport SEXP _RTMB_distr_pbeta(SEXP qSEXP, SEXP shape1SEXP, SEXP shape2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type q(qSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type shape1(shape1SEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type shape2(shape2SEXP);
    rcpp_result_gen = Rcpp::wrap(distr_pbeta(q, shape1, shape2));
    return rcpp_result_gen;
END_RCPP
}

RcppExport SEXP _rcpp_module_boot_mod_adfun();

static const R_CallMethodDef CallEntries[] = {
    TMB_CALLDEFS,
    {"_RTMB_valid", (DL_FUNC) &_RTMB_valid, 1},
    {"_RTMB_ad_context", (DL_FUNC) &_RTMB_ad_context, 0},
    {"_RTMB_advec", (DL_FUNC) &_RTMB_advec, 1},
    {"_RTMB_dependent", (DL_FUNC) &_RTMB_dependent, 1},
    {"_RTMB_independent", (DL_FUNC) &_RTMB_independent, 1},
    {"_RTMB_Arith2", (DL_FUNC) &_RTMB_Arith2, 3},
    {"_RTMB_Math1", (DL_FUNC) &_RTMB_Math1, 2},
    {"_RTMB_Reduce1", (DL_FUNC) &_RTMB_Reduce1, 2},
    {"_RTMB_getValues", (DL_FUNC) &_RTMB_getValues, 1},
    {"_RTMB_getVariables", (DL_FUNC) &_RTMB_getVariables, 1},
    {"_RTMB_dbgprint", (DL_FUNC) &_RTMB_dbgprint, 1},
    {"_RTMB_matmul", (DL_FUNC) &_RTMB_matmul, 3},
    {"_RTMB_dmvnorm0", (DL_FUNC) &_RTMB_dmvnorm0, 3},
    {"_RTMB_dgmrf0", (DL_FUNC) &_RTMB_dgmrf0, 3},
    {"_RTMB_SparseArith2", (DL_FUNC) &_RTMB_SparseArith2, 3},
    {"_RTMB_distr_dexp", (DL_FUNC) &_RTMB_distr_dexp, 3},
    {"_RTMB_distr_dweibull", (DL_FUNC) &_RTMB_distr_dweibull, 4},
    {"_RTMB_distr_dbinom", (DL_FUNC) &_RTMB_distr_dbinom, 4},
    {"_RTMB_distr_dbinom_robust", (DL_FUNC) &_RTMB_distr_dbinom_robust, 4},
    {"_RTMB_distr_dbeta", (DL_FUNC) &_RTMB_distr_dbeta, 4},
    {"_RTMB_distr_df", (DL_FUNC) &_RTMB_distr_df, 4},
    {"_RTMB_distr_dlogis", (DL_FUNC) &_RTMB_distr_dlogis, 4},
    {"_RTMB_distr_dsn", (DL_FUNC) &_RTMB_distr_dsn, 3},
    {"_RTMB_distr_dt", (DL_FUNC) &_RTMB_distr_dt, 3},
    {"_RTMB_distr_dSHASHo", (DL_FUNC) &_RTMB_distr_dSHASHo, 6},
    {"_RTMB_distr_dtweedie", (DL_FUNC) &_RTMB_distr_dtweedie, 5},
    {"_RTMB_distr_dnorm", (DL_FUNC) &_RTMB_distr_dnorm, 4},
    {"_RTMB_distr_dnbinom", (DL_FUNC) &_RTMB_distr_dnbinom, 4},
    {"_RTMB_distr_dnbinom2", (DL_FUNC) &_RTMB_distr_dnbinom2, 4},
    {"_RTMB_distr_dnbinom_robust", (DL_FUNC) &_RTMB_distr_dnbinom_robust, 4},
    {"_RTMB_distr_dpois", (DL_FUNC) &_RTMB_distr_dpois, 3},
    {"_RTMB_distr_dgamma", (DL_FUNC) &_RTMB_distr_dgamma, 4},
    {"_RTMB_distr_dlgamma", (DL_FUNC) &_RTMB_distr_dlgamma, 4},
    {"_RTMB_distr_dzipois", (DL_FUNC) &_RTMB_distr_dzipois, 4},
    {"_RTMB_distr_pnorm_approx", (DL_FUNC) &_RTMB_distr_pnorm_approx, 1},
    {"_RTMB_distr_pnorm", (DL_FUNC) &_RTMB_distr_pnorm, 3},
    {"_RTMB_distr_pgamma", (DL_FUNC) &_RTMB_distr_pgamma, 3},
    {"_RTMB_distr_ppois", (DL_FUNC) &_RTMB_distr_ppois, 2},
    {"_RTMB_distr_pexp", (DL_FUNC) &_RTMB_distr_pexp, 2},
    {"_RTMB_distr_pweibull", (DL_FUNC) &_RTMB_distr_pweibull, 3},
    {"_RTMB_distr_pbeta", (DL_FUNC) &_RTMB_distr_pbeta, 3},
    {"_rcpp_module_boot_mod_adfun", (DL_FUNC) &_rcpp_module_boot_mod_adfun, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_RTMB(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
    TMB_CCALLABLES("RTMB");
}
